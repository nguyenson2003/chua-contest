#include <bits/stdc++.h>
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100001;

keqing(){
    int n;std::cin>>n;
    int a[n]; for(int &x:a)std::cin>>x;
    int b[n]; for(int &x:b)std::cin>>x;
    int sum = 0;
    for(int i=0;i<n;i++)sum+=abs(a[i]-b[i]);
    std::cout<<sum;
}