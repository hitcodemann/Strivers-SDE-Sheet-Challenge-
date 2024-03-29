#include<bits/stdc++.h>
long countWaysToMakeChange(int *num, int n, int target)
{
    vector<vector<long>> dp(n,vector<long>(target+1,0));
    for(int t=0;t<=target;t++){
       dp[0][t]=(t%num[0]==0);
     }
    for(int i=1;i<n;i++){
       for(int t=0;t<=target;t++){
           long not_take=dp[i-1][t];
           long take=0;
           if(num[i]<=t){
               take=dp[i][t-num[i]];
           }
           dp[i][t]=take+not_take;
       }
   }
    return dp[n-1][target];
}
