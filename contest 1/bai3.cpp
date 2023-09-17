#include <bits/stdc++.h>
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100001;

keqing(){
    int nums[7];
    for(int &x:nums)std::cin>>x;
    int a,b,c;
    a=nums[6]-nums[5];
    b=nums[6]-nums[4];
    c=nums[6]-a-b;
    if(a==nums[0] && b==nums[1] && (c==nums[2] || c==nums[3]) && a+b==nums[2]+nums[3]-c){
        std::cout<<a<<" "<<b<<" "<<c;
    }else{
        std::cout<<-1;
    }

    
}