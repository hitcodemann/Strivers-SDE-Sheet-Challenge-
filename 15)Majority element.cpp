#include <bits/stdc++.h>
int findMajorityElement(int arr[], int n) {
	map<int,int>mp;
	for(int i =0;i<n ;i++){
		mp[arr[i]]++;
	}
    int low = n/2;
	for(auto i: mp){
		if(i.second>low){
			return i.first;
		}
	}
	return -1;
}
