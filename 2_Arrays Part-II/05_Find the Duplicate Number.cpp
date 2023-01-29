////////////////////////////////////////////////////////////////////////////////

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                ans=nums[i];
                break;
            }
        }
        return  ans;
    }
};

///////////////////////////////////////////////////////////////////////////////////

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        int ans=0;

        for(auto it:mp){
            if(it.second > 1){
                ans=it.first;
                break;
            }
        }
        return ans;
    }
};

////////////////////////////////////////////////////////////////////////////////

#include<bits/stdc++.h>
int findDuplicate(vector<int> &nums) 
{
    // Write your code here
    int n=nums.size();
    int ans=0;
    vector<int>v(n+1,0);

    for(int i=0;i<n;i++){
        if(v[nums[i]] == 0){
            v[nums[i]]++;
        }
        else{
            return nums[i];
        }
    }
    return 0;
	
}
