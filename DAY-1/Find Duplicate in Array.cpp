
#include <bits/stdc++.h>
#include <algorithm>

int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
	  int count=0;
	 sort(arr.begin(), arr.end());
	for (int i=1;i<n; i++){
	    
		if (arr[i]==arr[i-1]){
			count++;
		}
	if(count>0){
		return arr[i];
	}
	}
	 return 0;
}