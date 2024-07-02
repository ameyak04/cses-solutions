#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n,x;
    cin>>n>>x;
    ll arr[n];
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    ll l=0; ll r=n-1;
    ll count =0;
    while(l<r){
        if(arr[r]>x) r--;
        else if(arr[r]<=x && arr[l]+arr[r]>x) { r--;count++;}
          else {l++;r--; count++;}
    }

    if(l==r && arr[r]<x) count++;

    cout<<count<<endl;
    
}