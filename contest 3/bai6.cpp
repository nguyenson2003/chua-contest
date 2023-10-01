#include <bits/stdc++.h>
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100001;

int a[limit][20]={};
keqing(){
    int n =0;
    int x;
    int res = 0;
    while(std::cin>>x){
        if(x==-1)break;
        for(int i=19;i>=0;i--){//000...00000123 - 20 chữ số
            a[n][i]=x%10;
            x/=10;
        }
        if(n>0){
            for(int i=0;i<20;i++){
                if(a[n][i]>a[n-1][i])a[n][i]=0;
                if(a[n][i]<a[n-1][i])break;
            }
        }
        for(int i=0;i<20;i++){
            x*=10;
            x+=a[n][i];
        }
        res+=x;
        n++;
    }
    std::cout<<res;
}