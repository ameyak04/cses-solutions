#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,x;
    cin>>n>>x;
    vector<long long int> dp(x+1,0);
    vector<long long int>coins(n);
    for(long long int i=0;i<n;i++){
        cin>>coins[i];
    }

    const unsigned long long int M = 1000000007;
    dp[0]=1;
    for(long long int i=1;i<=x;i++){
        for(long long int j=0;j<n;j++){
            if(i - coins[j] >= 0)
            dp[i]+=dp[i-coins[j]];
            dp[i]=dp[i]%M;
        }
    }
    cout<<dp[x]<<endl;
}   