#include<bits/stdc++.h>
using namespace std;
const int N=1e5+5;
vector<int>v[N];
vector<bool>vis(N,false);
vector<int>parent(N,-1);

void bfs(int src){
    vis[src]=true;
    queue<int>q;
    q.push(src);
    while (!q.empty())
    {
        int par=q.front();
        q.pop();
        for(int child:v[par]){
            if(vis[child]==false){
                vis[child]=true;
                parent[child]=par;
                q.push(child);
            }
        }
    }
    
}
int main(){

    int n,m;
    cin>>n>>m;
    while (m--)
    {
        int a,b;
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    bfs(0);
    int x=5;
    while(x != -1){
        cout<<x<<" ";
        x=parent[x];
    }

        
    return 0;
}
