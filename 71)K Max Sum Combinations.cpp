#include <bits/stdc++.h> 
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){
	vector<int> ans;
	priority_queue<int> pq;
	for(auto it: a){
		for(auto i: b){
			pq.push(it+i);
		}
	}
	while(k--){
		ans.push_back(pq.top());
		pq.pop();
	}
	return ans;
}
