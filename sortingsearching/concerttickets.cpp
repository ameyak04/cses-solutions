#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ll n, m;
    cin >> n >> m;

    multiset<ll> tickets;

    for (ll i = 0; i < n; i++) {
        ll price;
        cin >> price;
        tickets.insert(price);
    }

    for (ll i = 0; i < m; i++) {
        ll max_price;
        cin >> max_price;
         auto it = tickets.upper_bound(max_price);
        if (it == tickets.begin()) cout << -1 << endl;
        else{
            --it;
            cout << *it << endl;
            tickets.erase(it);
        }
    }

}