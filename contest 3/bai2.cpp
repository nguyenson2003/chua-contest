#include <bits/stdc++.h>
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100001;

keqing(){
    std::string str; std::cin>>str;
    for(char c='a';c<='z';c++){
        bool c_in_str = false;
        for(char c2:str){
            if(c==c2)c_in_str=true;
        }
        if(c_in_str==false)std::cout<<c;
    }
}