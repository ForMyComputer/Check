#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()

void solve(){
    int n;
    cin>>n;
    vector<int> g(n);
    for(int i=0; i<n; i++) cin>>g[i];
    sort(all(g));
    for(int i=0; i<n; i++) cout<<g[i]<<" ";
}

int main(){
    int t=1;
    while(t--){
        solve();
    }
}