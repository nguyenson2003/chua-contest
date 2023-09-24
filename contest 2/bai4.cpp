#include <bits/stdc++.h>
#define int long
#define long long long
#define keqing main
const int mod = 1000000007;
const int limit = 100001;

keqing(){
    std::string str;std::cin>>str;
    int n = str.size();
    int q;std::cin>>q;
    char convert_char[26];
    for(int i=0;i<26;i++){
        convert_char[i]='a'+i;
    }

    while(q-->0){
        char type;std::cin>>type;
        if(type=='R'){
            char x,y;std::cin>>x>>y;
            for(int i=0;i<26;i++){
                if(convert_char[i]==x)
                    convert_char[i]=y;
            }
        }
        if(type=='D'){
            char x;std::cin>>x;
            for(int i=0;i<26;i++){
                if(convert_char[i]==x)
                    convert_char[i]='!';
            }
        }
    }
    for(int i=0;i<n;i++){
        if(convert_char[str[i]-'a']!='!')
            std::cout<<convert_char[str[i]-'a'];
    }
}