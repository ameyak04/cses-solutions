#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> dp(n+1,0);
    const unsigned int M = 1000000007;
    dp[0]=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=6;j++){
            if(i-j>=0)
            dp[i]+=dp[i-j];
            dp[i]=dp[i]%M;
        }
    }

    cout<<dp[n]<<endl;
}