#include <bits/stdc++.h>
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100001;

int power_team(int a,int b){ //(1+2+3+...)*thanh vien
    return (a+b)*(b-a+1)/2 * (b-a+1);
}

keqing(){
    int t;std::cin>>t;
    while(t--) {
        int x,n;std::cin>>x>>n;
        int be_nhat = x,lon_nhat=x+n-1;
        int l=be_nhat,r = lon_nhat;
        while(l<r){
            int mid=(l+r)/2;
            if(power_team(be_nhat,mid)<power_team(mid+1,lon_nhat)) l=mid+1;
            else r=mid;
        }
        std::cout<<l<<std::endl;
    }
}
/*
Từ điển tiếng Việt 
1000 trang 
lật trang 500 -> H < S
500 - 1000 lật 750 -> T >S
500 - 750 lật ... -> ... >, <, = S
*/