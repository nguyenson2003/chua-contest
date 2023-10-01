#include <bits/stdc++.h>
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100001;

bool tamgiacvg(int a,int b,int c){
    return a*a+b*b==c*c || a*a==b*b+c*c || a*a+c*c==b*b;
}


keqing(){
    int a,b,c;std::cin>>a>>b>>c;
    int res = limit;
    for(int i=1;i<limit;i++){
        if(tamgiacvg(i,b,c)) res=std::min(res,std::abs(a-i));
        if(tamgiacvg(a,i,c)) res=std::min(res,std::abs(b-i));
        if(tamgiacvg(a,b,i)) res=std::min(res,std::abs(c-i));
    }
    if(res==limit)std::cout<<-1;
    else std::cout<<res;
}