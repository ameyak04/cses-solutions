#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll y,x;
        cin>>y>>x;

        if(x%2!=0 && x>=y) cout<<x*x-y+1<<endl;
        else if(x%2==0&&x>=y) cout<<(x-1)*(x-1)+y<<endl;
        else{
            if(y%2==0) cout<<y*y-x+1<<endl;
                else cout<<(y-1)*(y-1)+x<<endl;
            }
        
    }
    
}