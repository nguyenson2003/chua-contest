#include <bits/stdc++.h>
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100001;

keqing(){
    int t;std::cin>>t;
    while(t--) {
        int x,n;std::cin>>x>>n;
        int sum1 = 0, sum2=0;
        for(int i=0;i<n;i++){
            sum2+=x+i;
        }
        int so_thanh_vien = 0;
        while (sum1*so_thanh_vien < sum2*(n-so_thanh_vien))
        {
            // nang luc cua nguoi thap nhat thuoc nhóm 2
            int nang_luc= x+so_thanh_vien;
            //chuyen mot ng tu nhom 2 sang nhóm 1
            sum1+=nang_luc;
            sum2-=nang_luc;
            so_thanh_vien++;
        }
        std::cout<<so_thanh_vien<<std::endl;
    }
}