///////////////////////////////////////////////////   Brute Force   //////////////////////////////////////////////////////////////
// T.C : O(NLOGN) +O(N2)

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int n=intervals.size();
        sort(intervals.begin(), intervals.end());
        
        for(int i=0;i<n;i++){
            int s=intervals[i][0];
            int e=intervals[i][1];

            if (ans.size() != 0) {
                if (s <= ans[ans.size()-1][1]) continue;   
            }


            for(int j=i+1;j<n;j++){
                if(e >= intervals[j][0]){
                    e=max(e , intervals[j][1]);
                }
            }

            //e=max(e , intervals[i][1]);

            ans.push_back({s  , e});
        }
        return ans;

    }
};


//////////////////////////////////////////////////////////  OPTIMAL   //////////////////////////////////////////////////////////////////////////

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> Mergedans;
        int n=intervals.size();
        sort(intervals.begin(), intervals.end());

        vector<int> v= intervals[0];
        for(auto it:intervals){
            if(it[0] <= v[1]){
                v[1]=max(v[1] , it[1]);
            }
            else{
                Mergedans.push_back(v);
                v=it;
            }
        }

        Mergedans.push_back(v);
        return Mergedans;       

    }
};
