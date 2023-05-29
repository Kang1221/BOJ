#include <bits/stdc++.h>
using namespace std;


vector<int> adj[1005];
bool vis[1005];

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  
  //input
  int n, m;
  cin >> n >> m;  
  while(m--){ //간선 개수만큼 반복
    int u, v;
    cin >> u >> v;
    //양방향
    adj[u].push_back(v);
    adj[v].push_back(u);    
  }

  // BFS
  int result = 0;
  queue<int> q;
  for(int i = 1; i <= n; i++){
    if(vis[i]) //방문했으면 그냥 넘어가기
        continue; 
        
    result++;
    q.push(i);
    vis[i] = true;
    
    while(!q.empty()){ 
      int cur = q.front();
      q.pop();
      for(auto nxt : adj[cur]){
        if(vis[nxt]) continue;
        q.push(nxt);
        vis[nxt] = true;
      }
    }
  }
  cout << result;
}
