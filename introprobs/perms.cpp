#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;

    if(n==1) cout<<1<<endl;
    
    else if( n>1 && n<4) cout << "NO SOLUTION"<<endl;

    else{
        for(int i=1;i<=n/2;i++){
            cout << 2*i<< " ";
        }
        int i=1;int j=1;
        while(i<=n){
            cout << i<< " ";
            i=2*j+1;
            j++;
        }
    }
    cout<<endl;

}