#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long int n,x;
    cin>>n>>x;
    vector<long long int> dp(x+1,LLONG_MAX -1);
    vector<long long int>coins(n);
    for(long long int i=0;i<n;i++){
        cin>>coins[i];
    }
     dp[0]=0;
    for(long long int i=1;i<=x;i++){
        for(long long int j=0;j<n;j++){
            if(i - coins[j] >= 0)
            dp[i]=min(dp[i-coins[j]]+1,dp[i]);
        }
    }
    if(dp[x]!=LLONG_MAX-1)
    cout<<dp[x]<<endl;
    else cout<<-1<<endl;
 
}