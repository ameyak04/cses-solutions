#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin >>n;
    map<ll,ll> mp;
    for(ll i=0;i<n;i++){
        ll a,b;
        cin>>a>>b;
        mp[a]++;
        mp[b]--;
    }
    ll ans=0;
    ll max_a=0;
    for(auto it:mp){
        ans+=it.second;
        max_a= max(max_a,ans);
    }
    cout<<max_a<<endl;
}