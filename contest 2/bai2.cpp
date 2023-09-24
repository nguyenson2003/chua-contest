#include <bits/stdc++.h>
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100001;

keqing(){
    int a,b,c;std::cin>>a>>b>>c;
    int min = std::min(a,std::min(b,c));
    int max = std::max(a,std::max(b,c));
    std::cout<<max-min-2;
}