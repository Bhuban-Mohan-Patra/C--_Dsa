 void rotateArr(int arr[], int d, int n){
        
        // while(d>0){
        //     int temp=arr[0];
        //     for(int i=0;i<n-1;i++){
        //         arr[i]=arr[i+1];
        //     }
        //     arr[n-1]=temp;
        //     d--;
        // }
        
        
        
        //  vector<int> a;
        // for(int i=d;i<n;i++){
        //     a.push_back(arr[i]);
        // }
        // for(int i=0;i<d;i++){
        //     a.push_back(arr[i]);
        // }
        
        // for(int i=0;i<n;i++){
        //     arr[i]=a[i];
        // }
        
      
    //   Perform d%n in order to keep the value of d within the range of the array where d 
        // is the number of times the array is rotated and N is the size of the array.
        d%=n;
        int s=0,l=d-1;
        while(s<l){
            swap(arr[s],arr[l]);
            s++;
            l--;
        }
        s=d;
        l=n-1;
        while(s<l){
            swap(arr[s],arr[l]);
            s++;
            l--;
        }
        s=0;
        l=n-1;
        while(s<l){
            swap(arr[s],arr[l]);
            s++;
            l--;
        }
}