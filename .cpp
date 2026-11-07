ic:

   bool jumping(vector<int>&nums,int index ,int n,vector<int>&dp)
   {    
        if(index>=n-1)
         return dp[n-1]=1;
         if(dp[index]!=-1)
         return dp[index];

         if(nums[index]==0)
         return dp[index]=0;
           
         int target=index+nums[index];
         bool answer=false;
        for(int i=index+1;i<=target;i++)
        {   if(jumping(nums,i,n,dp))
              return dp[index]=1;
           
        }
    return dp[index]=0;
   }
    bool canJump(vector<int>& nums) {
          int n=nums.size();




          vector<int>dp(n+1,-1);
          dp[n-1]=1;
        return jumping(nums,0,n,dp);
    }
};