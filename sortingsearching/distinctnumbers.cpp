#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    map<ll,ll> mp;
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++){
        ll k;
        cin>>k;
        mp[k]++;
    }
    ll count=0;
    for(auto it: mp){
        count++;
    }
    cout<<count<<endl;
}