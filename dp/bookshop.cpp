#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    vector<int> prices(n);
    vector<int> pages(n);
    for(int i=0;i<n;i++)    cin>>prices[i];
    for(int i=0;i<n;i++)    cin>>pages[i];

    // vector<int>dp(x+1,0); if repeated books are allowed 
    // int ans=0;
    // for(int i=0;i<=x;i++){
    //     for(int j=0;j<n;j++){
    //         if(i-prices[j]>=0)
    //         dp[i]= max(dp[i],dp[i-prices[j]]+pages[j]);
    //     }
    //     ans=max(ans,dp[i]);
    // }
    //cout<<ans<<endl;

    vector<vector<int>>dp(n+1,vector<int>(x+1,0));
    for(int i=0;i<=n;i++) dp[i][0]=0;
    for(int i=0;i<=x;i++) dp[0][i]=0;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=x;j++){
            if(j>=prices[i-1]) dp[i][j]=max(dp[i-1][j],dp[i-1][j-prices[i-1]]+ pages[i-1]);
            else dp[i][j]=dp[i-1][j];
        }
    }
    cout<<dp[n][x]<<endl;
}