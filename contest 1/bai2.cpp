#include <bits/stdc++.h>
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100001;

//tìm hiểu string regex
keqing(){
    // std::string str;
    // std::getline(std::cin,str);
    char c;
    while(scanf("%c",&c) && c!='\n'){
        if(c<'a' || c>'z'){
            std::cout<<"NO";
            return 0;
        }
    }
    std::cout<<"YES";
}
