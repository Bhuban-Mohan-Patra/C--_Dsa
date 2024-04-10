 int missingNumber(vector<int>& array, int n) {
        
        // int flag;
        // for(int i=1;i<=n;i++){
        //     flag=0;
        //     for(int j=0;j<n;j++){
        //         if(i==array[j]){
        //         flag=1;
        //         break;
        //         }
        //     }
        //     if(flag==0)
        //     return i;
        // }
        
        
    //   vector<int>hash(n,0);
    //   for(int i=0;i<n-1;i++){
    //       hash[array[i]-1]=1;
    //   }
       
    //   for(int i=0;i<n;i++){
    //       if(hash[i]==0)
    //       return i+1;
    //   }
    
    
    // sort(array.begin(),array.end());
    // if(array[0]!=1)
    // return 1;
    
    // for(int i=0;i<n-2;i++){
    //     if(array[i+1]!=array[i]+1){
    //         return array[i]+1;
    //     }
    // }
    // return n;
    
    
    // long long s=(n*(n+1))/2;
    // for(int i=0;i<n-1;i++){
    //     s-=array[i];
    // }
    // return s;
    
    int a=0,b=0;
    for(int i=0;i<n-1;i++){
        b^=array[i];
        a^=(i+1);
    }
    a^=n;
    return a^b; 
        
    }