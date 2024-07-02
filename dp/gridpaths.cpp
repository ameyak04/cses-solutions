#include <bits/stdc++.h>
using namespace std;

#define ll long long
const unsigned int M = 1e9+7;
int main(){
    ll n;
    cin>>n;
    vector<vector<char>>arr(n,vector<char>(n,0));

    for(ll i=0;i<n;i++){
        for(ll j=0;j<n;j++){
            cin >>arr[i][j];
        }
    }

    vector<vector<ll>>dp(n,vector<ll>(n,0));

    if(arr[0][0]=='.') dp[0][0] = 1;
    else dp[0][0] = 0;


    for(ll i=0;i<n;i++){
        if(arr[i][0]=='.') dp[i][0]=1;
        else  {dp[i][0]=0;break;}
    }
    for(ll i=0;i<n;i++){
        if(arr[0][i]=='.') dp[0][i]=1;
        else  {dp[0][i]=0;break;}
    }

    for(ll i=1;i<n;i++){
        for(ll j=1;j<n;j++){
            if(arr[i][j]=='*') dp[i][j]=0;
            else {dp[i][j]=dp[i-1][j]+dp[i][j-1];dp[i][j]%=M;}
        }
    }

    cout<<dp[n-1][n-1]<<endl;
}