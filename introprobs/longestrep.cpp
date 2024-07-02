#include <bits/stdc++.h>
using namespace std;

int main(){

    string s;
    cin>>s;

    char curr_char=s[0];
    int curr_length=1;
    int max_length=curr_length;
    for(int i=1;i<s.size();i++){
        if(s[i]==curr_char){
            curr_length++;
            max_length=max(max_length,curr_length);
        }
        else{
            curr_char=s[i];
            curr_length=1;
        }
    }
    cout<<max_length<<endl;
}