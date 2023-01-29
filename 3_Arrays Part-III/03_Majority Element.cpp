//////////////////////////////////////////////////////////////

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }

        for(auto it:mp){
            if(it.second > n/2){
                return it.first;
            }
        }

        return -1;
    }
};

/////////////////////////////////////////////////////////////////////

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int candidate = 0;

        for (int num : nums) {
            if (count == 0) {
                candidate = num;
            }
            if(num==candidate) count += 1; 
            else count -= 1; 
        }

        return candidate;
    }
};

