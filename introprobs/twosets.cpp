#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;
    cin>>n;
    vector<ll> v(n,0);
    for(ll i=1;i<=n;i++){
        v[i-1]=i;
    }

    if(n%2!=0 && (n+1)%4!=0) cout<<"NO"<<endl;
    else if(n%2==0 && n%4!=0) cout <<"NO"<<endl;
    else if(n%4==0){
        cout<<"YES"<<endl;
        set<ll>s1;
        set<ll>s2;
        for(ll i=0;i < n/4 ;i++){
            s1.insert(i+1);
            s1.insert(n-i);
        }
        for(ll i=n/4;i < n/2 ;i++){
            s2.insert(i+1);
            s2.insert(n-i);
        }
        cout<<s1.size()<<endl;
        for(auto it : s1){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<s2.size()<<endl;
    for(auto it : s2){
        cout<<it<<" ";
    }
    cout<<endl;

    }
else{
    cout<<"YES"<<endl;
    ll target = n*(n+1)/4;
    set<ll>s1;
    set<ll>s2;
    for(ll i=n;i>=1;i--){
        s2.insert(i);
    }

    for(ll i=n;i>=1;i--){
        if(target==0) break;
        if(i<=target) {target-=i;
        s1.insert(i);
        s2.erase(i);
    }
    }
    cout<<s1.size()<<endl;
    for(auto it : s1){
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<s2.size()<<endl;
    for(auto it : s2){
        cout<<it<<" ";
    }
    cout<<endl;
}
}