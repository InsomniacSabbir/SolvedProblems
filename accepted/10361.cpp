#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;

string s1,s2,s3,s4,s5,s6;

int main(){
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
               getline(cin,s1,'<');
               getline(cin,s2,'>');
               getline(cin,s3,'<');
               getline(cin,s4,'>');
               getline(cin,s5);
               getline(cin,s6);
               cout<<s1<<s2<<s3<<s4<<s5<<endl;
               s6.erase(s6.end()-3,s6.end());
               cout<<s6<<s4<<s3<<s2<<s5<<endl;
               }
    return 0;
    }
