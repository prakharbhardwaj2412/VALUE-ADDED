#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;

void solve(){
    ll n,p;
    cin>>n;
    vector<ll> days(n+1);
    cin>>p;
    for(ll i=0;i<p;i++){
        ll x;
        cin>>x;
        for(ll j=x;j<=n;j+=x){
            days[j] = 1;
        }
    }
    ll res=0;
    for(ll i=1;i<=n;i++){
        if(days[i]==1 && (i%7!=0 && i%7!=6)) res++;
        // cout<<days[i]<<" ";
    }
    cout<<res<<"\n";
}

int main() {
    ll n;
    cin>>n;
    while(n--){
        solve();
    }
    return 0;
}
