int makeProductOne(int arr[], int N) {
        int zero=0;
        int minus=0;
        int step=0;
        
        for(int i=0;i<N;i++){
            
            if(arr[i]>0){
                step+=(arr[i]-1);
            }
            
            if(arr[i]==0){
                zero++;
                step++;
            }
            
            if(arr[i]<0){
                minus++;
                step+=(abs(arr[i])-1);
            }
        }
        
        if(minus%2!=0){
            if(zero==0){
                step+=2;
            }
        }
        return step;
    }