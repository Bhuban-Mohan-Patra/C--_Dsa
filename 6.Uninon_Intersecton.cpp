 int doUnion(int a[], int n, int b[], int m)  {
        unordered_set<int> st;
        
        for(int i=0;i<n;i++)
            st.insert(a[i]);
            
        for(int i=0;i<m;i++)
            st.insert(b[i]);
            
        return st.size();
        
        
        
        //-------- code for intersection of 2 unsorted array
        // unordered_set<int> st;
        
        // for(int i=0;i<n;i++)
        //     st.insert(a[i]);
            
        //     int count=0;
        // for(int i=0;i<m;i++){
        //      if (st.find(b[i]) != st.end()){    // this is beacuse if not find it ruturn end iterator
        //          count++;
        //          st.erase(b[i]);
        //      }
        // }
            
            
        // return count;