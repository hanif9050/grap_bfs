#include<bits/stdc++.h>
using namespace std;
const int N=1e5+1;
vector<int>v[N];
vector<bool>vis(N,false);

void bfs(int src){
    vis[src]=true;
    queue<int>q;
    q.push(src);
    while(!q.empty()){
        int par = q.front();
        q.pop();
        cout<<par<<" ";
        for(int child:v[src]){
            if(vis[child] == false){
                q.push(child);
                vis[child]=true;
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
        
    return 0;
}
