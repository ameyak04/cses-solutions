#include <bits/stdc++.h>

using namespace std;

int main(){
        int n;
        cin>>n;
        long long int res=1;
        const unsigned int M = 1000000007;
        for(int i=0;i<n;i++){
            res<<=1;
            res = res%M;
        }

        cout<<res<<endl;
}