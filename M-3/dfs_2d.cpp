#include<bits/stdc++.h>
using namespace std;
char a[10][10];
bool vis[10][10];
int n,m;
vector<pair<int,int>>d={{0,1},{0,-1},{1,0},{-1,0}};
bool valid(int i, int j){
    if(i < 0 || i >= n || j < 0 || j >= m){
        return false;
    }
    return true;
}

void dfs(int si,int sj){
    vis[si][sj]=true;
    // cout<<a[si][sj]<<" "<<endl;
     cout << "Visiting cell (" << si << "," << sj << ") with value: " << a[si][sj] << endl;
    for(int i = 0; i < 4; i++){
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if(valid(ci,cj)==true && vis[ci][cj] == false && a[ci][cj] !='-'){
            dfs(ci,cj);
        }
    }

}
int main(){
    cin>>n>>m;
    for (int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>a[i][j];
        }
    }
    // cout<<"print"<<endl;
    //  for (int i = 0; i < n; i++){
    //     for(int j = 0; j < m; j++){
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    memset(vis,false,sizeof(vis));
        dfs(0,1);
        if(vis[2][3]==true){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    return 0;
}
