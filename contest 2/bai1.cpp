#include <bits/stdc++.h>
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100001;

keqing(){
    std::string dap_an_mau;  std::cin>>dap_an_mau;
    std::string cau_tra_loi; std::cin>>cau_tra_loi;
    int n=dap_an_mau.size();
    int dap_an_dung=0;
    for(int i=0;i<n;i++){
        if(cau_tra_loi[i] == dap_an_mau[i]){
            dap_an_dung++;
        }
    }
    std::cout<<dap_an_dung*10.0/n;
}