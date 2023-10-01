#include <bits/stdc++.h>
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100001;

keqing(){
    int n,k;std::cin>>n>>k;
    int a[n];for(int &x:a)std::cin>>x;
    std::sort(a,a+n);
    int res = 0;
    for(int i=0,l=0,r=0;i<n;i++){
        //cach 1
        // while(r<n && a[i]-a[r]+1 >= -k)r++;
        // while(l<n && a[i]-a[l]+1 > k)l++;
        // res+=r-l;
        // if(l<=i && i<r) res--;

        //cach 2
        res += std::upper_bound(a,a+n,k+a[i]-1)-std::lower_bound(a,a+n,-k+a[i]-1);
        if(k>0)res--;
    }
    std::cout<<res;
}