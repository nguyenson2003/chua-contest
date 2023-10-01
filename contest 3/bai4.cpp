#include <bits/stdc++.h>
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100001;

keqing(){
    int t;std::cin>>t;
    while(t--) {
        int xa,ya,xb,yb,xc,yc;
        std::cin>>xa>>ya>>xb>>yb>>xc>>yc;
        char z;std::cin>>z;
        if(z=='x'){
            std::swap(xa,ya);
            std::swap(xb,yb);
            std::swap(xc,yc);
        }
        int y;std::cin>>y;
        if((y<ya && y<yb && y<yc) || (y>ya && y>yb && y>yc)){
            std::cout<<0;
        }else if(y==ya){
            std::cout<<"A";
        }else if(y==yb){
            std::cout<<"B";
        }else if(y==yc){
            std::cout<<"C";
        }else if((y<yb && y<yc) || (y>yb && y>yc)){
            std::cout<<"A";
        }else if((y<ya && y<yc) || (y>ya && y>yc)){
            std::cout<<"B";
        }else if((y<yb && y<ya) || (y>yb && y>ya)){
            std::cout<<"C";
        }
        std::cout<<std::endl;
    }
    
}