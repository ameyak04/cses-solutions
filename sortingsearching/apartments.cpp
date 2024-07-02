#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int n,m,k;
    cin>>n>>m>>k;

    vector<int>desiredsizes(n,0);
    vector<int>sizes(m,0);

    for(int i=0;i<n;i++){
        cin>>desiredsizes[i];
    }

    for(int i=0;i<m;i++){
        cin>>sizes[i];
    }

    sort(desiredsizes.begin(),desiredsizes.end());
    sort(sizes.begin(),sizes.end());

    auto p1 = 0;
    int count=0;
    auto p2 = 0;
    while(p1<n && p2<m){
        if(sizes[p2]<=desiredsizes[p1]+k && sizes[p2]>=desiredsizes[p1]-k) {p1++;count++;p2++;}
        else if(sizes[p2]<desiredsizes[p1]-k) p2++;
        else p1++;
    }

    cout<<count<<endl;
}