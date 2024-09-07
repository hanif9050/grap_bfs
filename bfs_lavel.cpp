#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<int>v[N];
vector<int>lavel(N,-1);
vector<bool>vis(N,false);

void bfs_lvl(int src){
    queue<int>q;
    vis[src]=true;
    lavel[src]=0;
    q.push(src);
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        for(int child:v[par]){
            if(vis[child]==false){
                q.push(child);
                vis[child]=true;
                lavel[child]=lavel[par]+1;
            }
        }
    }
    

};

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
        bfs_lvl(0);
        for(int i = 0; i < n; i++){
            cout<<i <<" "<<lavel[i]<<endl;
        }
    return 0;
}
