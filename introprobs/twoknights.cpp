#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    for(int i=1;i<=n;i++){
    if(i==1) cout<<0<<endl;
    else {    
    long long k = i*i;
    long long sum = 1;
        for(long long i = 1; i <= 2; i++){
            sum = sum * (k - 2 + i) / i;
        }
    cout<<sum -4*(i-2)*(i-1)<<endl;}
    }
    }