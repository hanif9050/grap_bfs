#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int>v[N];
vector<bool>vis(N,false);
void dfs(int src){
    cout<<src<<" ";
    vis[src]=true;
    for(int child:v[src]){
        if(vis[child]==false){
            dfs(child);
        }
    }

}
int main(){
    int n,m;
    cin>>n>>m;
    while(m--){
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

dfs(0);

        
    return 0;
}
