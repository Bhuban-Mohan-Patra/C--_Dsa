 int getMinDiff(int arr[], int n, int k) {
        sort(arr,arr+n);
        int small = arr[0];
        int large = arr[n-1];
        int diff= large-small;
        
        for(int i=1;i<n;i++){
        if(arr[i]-k<0){
            continue;
        }
        small=min(arr[0]+k,arr[i]-k);
        large=max(arr[n-1]-k,arr[i-1]+k);
        diff=min(diff,(large-small));
        }
        
        return diff;