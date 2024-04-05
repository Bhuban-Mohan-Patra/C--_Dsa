// for kth smallest

priority_queue<int> pq;
        
        for(int i=l;i<=r;i++){
            pq.push(arr[i]);
            
            if(pq.size()>k){
                pq.pop();
            }
        }
        
        return pq.top();

// kth largest

priority_queue<int> pq;
        
        for(int i=l;i<=r;i++){
            pq.push((-1)*arr[i]);
            
            if(pq.size()>k){
                pq.pop();
            }
        }
        
        return (-1*pq.top());