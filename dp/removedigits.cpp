#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    vector<ll> dp(n+1,LLONG_MAX-1);
    dp[n]=0;
    for(int i=n;i>=1;i--){
    if(dp[i]==(LLONG_MAX-1)) continue;
    ll k=i;
    set<int> digits;
    while(k){
        digits.insert(k%10);
        k/=10;
    }
        for(auto it= digits.begin();it!=digits.end();it++){
            if(i-*it>=0) dp[i-*it]=min(dp[i-*it],dp[i]+1);
        }
    }

    cout<<dp[0]<<endl;
}