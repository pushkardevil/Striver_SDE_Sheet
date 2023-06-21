int solve(vector<int>&rows , int mid){
    int s=0;
    int e=rows.size()-1;
    
    while(s <= e){
        int md=s+(e-s)/2;
        if(rows[md] > mid) e=md-1;
        else s=md+1;
    } 
    return s;
}

int Solution::findMedian(vector<vector<int> > &A) {
    int n=A.size();
    int m=A[0].size();
    
    int s=1;
    int e=1e9;
    
    while(s<=e){
        int mid=s+(e-s)/2;
        int cnt=0;
        
        for(int i=0;i<n;i++){
            cnt+=solve(A[i] , mid);
        }
        
        if(cnt <= (n*m)/2) s=mid+1;
        else e=mid-1;
    }
    
    return s;
}
