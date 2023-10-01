#include <bits/stdc++.h>
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100001;

keqing(){
    int n;std::cin>>n;
    while(n>=10){std::cout<<"X";n-=10;}
    while(n>=5){std::cout<<"V";n-=5;}
    while(n>=1){std::cout<<"I";n-=1;}
}