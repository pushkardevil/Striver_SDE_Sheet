#include <bits/stdc++.h> 
#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	//pair<int,int>ans;
	int ans=0;
	int miss=0;
	sort(arr.begin(),arr.end());
	for(int i=0;i<n-1;i++){
		if(arr[i]==arr[i+1]){
			ans=arr[i];
		}
	}

	for(int i=1;i<=n;i++){
		auto it =find(arr.begin(), arr.end(), i);
		if(it == arr.end()){
			miss=i;
			break;
		}
	}

	return {miss,ans};
}
