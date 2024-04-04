long long maxSubarraySum(int arr[], int n){
       
        // long long sum;
        // long long maxsum =0;
        // for(int i=0;i<n;i++){
        //     sum =0;
        //     for(int j=i;j<n;j++){
        //         sum+=arr[j];
        //         }
        //     if(sum>maxsum){
        //         maxsum = sum;
        //     }
        // }
        // return maxsum;          
        /* fail for -ve numbers like   -10,-2,-3,-4   where -2 is maximum sum of subarray */ 
        
        
        long long sum=0;
        long long maxsum =INT_MIN;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            if(maxsum < sum)
                maxsum =sum;
            
            if(sum < 0)
                sum=0;
        }
        return maxsum;    
        
    }
    
    
    
    
    // to find the sub array in kadens algorithm
    
     long long sum=0;
        long long maxsum =INT_MIN;
        int start=0,end=0,s=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            
            if(maxsum < sum){
                maxsum =sum;
                start=s;
                end=i;
            }
            
            if(sum < 0){
                sum=0;
                s=i+1;
            }
                
        }
    
};