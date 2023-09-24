#include <bits/stdc++.h>
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100001;

keqing(){
    int t;std::cin>>t;
    while(t--) {
        int m,n;std::cin>>m>>n;
        std::vector<int> graph[m];
        while(n-->0){
            int u,v;std::cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        int root[m]={};
        int step[m]={};
        int bef[m]={};
        int step_root[m]={};
        std::queue<int> wait;
        int res = m*2;
        for(int v:graph[0]){
            root[v]=v;
            step_root[v]=1;
            step[v]=1;
            bef[v]=v;
            wait.push(v);
        }
        while(!wait.empty()){
            int u = wait.front();
            wait.pop();
            for(int v:graph[u]){
                if(v==0)continue;
                if(bef[u]==v)continue;
                if(root[v]==0){
                    wait.push(v);
                    bef[v]=u;
                    root[v]=root[u];
                    step[v]=step[u]+1;
                    step_root[root[v]]=std::max(step_root[root[v]],step[v]);
                    continue;
                }
                if(root[u]!=root[v]){
                    res=std::min(res,step[u]+step[v]+1);
                }
            }
        }
        if(res==m*2){
            std::sort(step_root,step_root+m);
            std::cout<<step_root[m-1]+step_root[m-2]+1;
        }else{
            std::cout<<res;
        }
        std::cout<<std::endl;
    }
}