#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        if((a+b)%3==0 && 2*a>=b && 2*b>=a) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}