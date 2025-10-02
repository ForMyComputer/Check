#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define all(x) x.begin(), x.end()
int const N = 200005;
vector<int> g[N];
void dfs(int u, int p){
    for(int nx: g[u]){  
        if(nx == p) continue;
        dfs(nx, u);
    }
}

void solve(){
    int n;
    cin>>n;
    vector<int> g(n);
    for(int i=0; i<n; i++) cin>>g[i];
    for(int i=0; i<n; i++) cout<<g[i]<<" ";
}

int main(){
    int t=1;
    while(t--){
        solve();
    }
}