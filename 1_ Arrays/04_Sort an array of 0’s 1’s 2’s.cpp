//////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i-1;j++){
                if(nums[j+1] < nums[j]){
                    swap(nums[j] , nums[j+1]);
                } 
            }
        }
    }
};

///////////////////////////////////////////////////////////////////////////////////////////////////////////////
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int a=0 , b=0, c=0;
        for(int i=0;i<n;i++){
            if(nums[i] ==0) a++;
            if(nums[i] ==1) b++;
            if(nums[i] ==2) c++;
        }

        nums.clear();
        while(a--){
            nums.push_back(0);
        }

        while(b--){
            nums.push_back(1);
        }

        while(c--){
            nums.push_back(2);
        }

       
    }
};
