#include <bits/stdc++.h>
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100001;

void cmp(int blue,int red){
    if(blue==red)std::cout<<"DRAW";
    else if (blue>red)std::cout<<"BLUE";
    else std::cout<<"RED";
    std::cout<<std::endl;
}

keqing(){
    int t;std::cin>>t;
    while(t--) {
        int w,h;std::cin>>w>>h;
        int x,y;std::cin>>x>>y;
        char c;std::cin>>c;
        if(c=='U'){
            int y_do = y-1;
            cmp(h-y_do,y_do);
        }else if (c=='D'){
            cmp(y,h-y);
        }else if (c=='L')
        {
            int x_do=x-1;
            cmp(w-x_do,x_do);
        }else if (c=='R')
            cmp(x,w-x);
        {
            
        }
        
        
        

    }
}