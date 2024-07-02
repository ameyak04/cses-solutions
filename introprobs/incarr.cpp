#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int arr[n];
    long long int count=0;
    for(long long int i=0;i<n;i++){
        cin>>arr[i];
        }
    long long int maxi = arr[0];

    for(long long int i=1;i<n;i++){
        if(arr[i]<maxi){
            count+=(maxi-arr[i]);
            maxi=max(maxi,arr[i]);
        }
        else{
            maxi=max(maxi,arr[i]);
        }
    }
    cout<<count<<endl;

}