int findDuplicate(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        // int n;
        // for(int i=0;i<nums.size()-1;i++){
        //     if(nums[i+1]==nums[i])
        //         {
        //             n= nums[i];
        //             break;
        //         }
        // }
        // return n;



        //  int n= nums.size();
        //  int number;
        //  vector<int> hash(n+1, 0);
        //  for(int i=0;i<n;i++){
        //     hash[nums[i]]+=1;
        //  }

        // for(int i=0;i<n+1;i++)
        //     if(hash[i]>1){
        //         number=i;
        //         break;
        //     }
        // return number;



// linked list cycle method
        int slow =0,fast=0;
        do{
            slow=nums[slow];
            fast=nums[nums[fast]];
        }while(slow!=fast);

        slow=0;
        while(slow != fast){
            slow= nums[slow];
            fast= nums[fast];
        }

        return slow;
    }
};