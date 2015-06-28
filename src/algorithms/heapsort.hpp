namespace Heapsort {
 

  template <typename T>
  void buildHeap (T* A, size_t n, size_t i, T temp){

           
    size_t parent, child;
    
           
    parent = i;         
  
    // While two children
    for (child= parent<<1; child < n; child <<= 1){   
    
        //Choose the greater value
        if (A[child] < A[child+1])       
            child ++;                

        //If child less/equal to value, stop pushing down
        if (A[child] <= temp)         
            break;

        // Move child up and go down                        
        A[parent] = A[child]; 
        parent = child;                   
    }
    //Only one final child greater than value
    if (child == n && A[child] > temp){  
        
        // Move child up and go down            
        A[parent] = A[child];          
        parent = child;                   
    }
    // Put the stored value in the hole                      
    A[parent] = temp;           
  }


  template <typename T>
  void reorganize (T* A, size_t n, T temp){ 
   
    size_t child;
    size_t parent = 1;
  
    
    // Is done even if tmp had a greater value (optimize)
    // While two children
    for (child = parent<<1; child < n; child <<= 1){   
        
        //Choose the greater value
        if (A[child] < A[child+1])       
            child ++;              

        // Move child up and go down
        A[parent] = A[child];             
        parent = child;           
    }
  
    //Only one final child
    if (child == n){                  
         
        // Move child up and go down                        
        A[parent] = A[child];              
        parent = child;
    }  
    
    // Undo some of the  steps if necessary (happen very few times)
    for (;;){                     

        child = parent;            
        parent >>= 1;                    

        if (parent == 0 || A[parent] >= temp)
            break;                  
        A[child] = A[parent];
    }
    // Put the stored value in the hole
    A[child] = temp;         
  }

 

  template <typename T, size_t SIZE>
  void heapsort(std::array<T,SIZE> &a){

    T temp;
    size_t n = SIZE ;
    
    //Array from A[1]...A[SIZE] -> childs A[x] = A[2*x] | A[2*x+1]
    T* A = a.data() -1;
    
    // Build Heap
    for (size_t i=n>>1; i; i--){
        temp = A[i];
        buildHeap (A, n, i, temp);
    }

    //Sort
    while ( n > 1){
        temp = A[n];
        A[n] = A[1];
        n --;
        // Use optimized variant to reinsert A
        reorganize (A, n, temp);  
    }
  }

} 


 