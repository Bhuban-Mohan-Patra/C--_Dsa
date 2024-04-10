int trailingZeroes(int N)
    {
        if(N<0)
        return -1;
        int zero=0;
        while(N>0){
            zero+=N/5;
            N=N/5;
        }
        return zero;
    }