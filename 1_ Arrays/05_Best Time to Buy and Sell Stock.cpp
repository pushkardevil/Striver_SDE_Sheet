//////////////////////////////////////////////////// Brute Force--------TLE ///////////////////////////////////////

class Solution {
public:

    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxi=0;
        for(int i=0;i<n-1;i++){
            int s=prices[i];
            for(int j=i+1;j<n;j++){
                if(prices[j] >= s){
                    maxi=max(maxi,prices[j]-s);
                }
            }
        }

        return maxi;
    }
};

////////////////////////////////////////////////// Optimal //////////////////////////////////////////////////////////////

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int maxProfit=0;
        int minSoFar=prices[0];

        for(int i=0;i<n;i++){
            minSoFar=min(minSoFar , prices[i]);
            int profit=prices[i]-minSoFar;
            maxProfit=max(maxProfit , profit);
        }
        return maxProfit;
    }
};
