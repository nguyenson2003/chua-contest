#include <bits/stdc++.h>
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100001;

int pow_mod(int a,int b){   // a^b
    if(b==0)return 1;       //a^0 = 1
    if(b==1)return a%mod;   //a^1 = a
    int temp = pow_mod(a,b/2);  //tính a^(b/2)
    return temp*temp%mod *pow_mod(a,b%2)%mod;
}
int div_mod(int a,int b){   // a/b
    return a * pow_mod(b,mod-2) %mod;
}
keqing(){
    /*
    // cach 1
    int x,n; std::cin>>x>>n;
    int res = 1;
    for(int i=1;i<=n;i++){
        res=res*(x+i)%mod;  // (x+1)*(x+2)...(x+n)
        res/=i;             // 1*2*3*...*n = n!
    }
    std::cout<<res%mod;
    */
   //cach 2
    int x,n; std::cin>>x>>n;
    x=(x+mod*mod)%mod;
    int res = 1;
    for(int i=1;i<=n;i++){
        res=res*((x)%mod+i)%mod;    // (x+1)*(x+2)...(x+n)
        res=div_mod(res,i);         // 1*2*3*...*n = n!
    }
    std::cout<<res%mod;
}