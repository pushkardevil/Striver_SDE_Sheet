class Solution {
public:
int solve(int start , int end , vector<int>nums){
    int n=nums.size();
    while(start<=end){
        if(nums[start] < nums[end]) return start;
        int mid = start + (end - start) / 2;
        if(nums[mid] <= nums[(mid + n - 1) % n]) return mid;
        else if(nums[start] <= nums[mid]) start = mid + 1;
        else end = mid - 1;
    }
    return -1;
}
int binarysearch(int s , int e , vector<int>nums , int target){
    while(s <=e){
        int mid=s+(e-s)/2;
        if(nums[mid] == target) return mid;
        else if(nums[mid] < target) s=mid+1;
        else e=mid-1;
    }
    return -1;
}
    int search(vector<int>& nums, int target) {
        int n=nums.size();
        int start =0;
        int end=n-1;
        int index=solve(start , end , nums);
        

        if(binarysearch(0 , index-1 , nums , target) != -1) return binarysearch(0 , index-1 , nums , target);
        return binarysearch(index , n-1 , nums , target);
    }
};
