/////////////////////////////////////////////// Brute force   ///////////////////////////////

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
         int n=nums.size();
        for(int i=0;i<n-1 ;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i] + nums[j] == target){
                    return {i,j};
                
            } 
        }
    }
 return {};
    }
};


/////////////////////////////// optimised ///////////////////////////////////////////////

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int, int> mp;
       
        for(int i=0;i<n;i++){
            if(mp.find(target - nums[i]) != mp.end()){
                return {i , mp[target-nums[i]]};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};
