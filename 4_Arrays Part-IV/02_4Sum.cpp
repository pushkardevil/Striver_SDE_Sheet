///////////////////////////////////////////////////////// 


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;

        for(int i=0;i<n;i++){
            long long int temptarget = target - nums[i];
            for(int j=i+1;j<n;j++){
                long long int newtarget=temptarget- nums[j];

                int front=j+1;
                int back=n-1;

                while(front < back){
                    long long int sum=nums[front]+nums[back];

                    if(sum < newtarget){
                        front++;
                    }
                    else if(sum > newtarget){
                        back--;
                    }
                    else{
                        vector<int>v(4 , 0);
                        v[0]=nums[i];
                        v[1]=nums[j];
                        v[2]=nums[front];
                        v[3]=nums[back];
                        ans.push_back(v);

                        // processing the duplicates for number 2
                        while(front < back && nums[front] == v[2]) front++;

                        // processing the duplicates for number 3
                        while(front < back && nums[back] == v[3]) back--;

                    }
                }
                // processing the duplicates for number 1
                while(j+1 < n && nums[j+1] == nums[j]) j++;
            }
            // processing the duplicates for number 0
             while(i+1 < n && nums[i+1] == nums[i]) i++;
        }

        return ans;

    }
};
