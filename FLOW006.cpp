#include<bits/stdc++.h>
using namespace std;

typedef long long int lli;
typedef long double ld;

#define FOR(a,b) for(auto i=a;i<b;i++)
#define FAIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define test_cases int T;cin>>T;while(T--)


int main(){
    FAIO

    int sum=0,N;

    test_cases{
     // cout<<"-------"<<endl;
      cin>>N;
      while(N!=0){
          sum+=N%10;
          N/=10;
      }
      cout<<sum<<endl;sum=0;
    }

    return 0;
}


/*
You can always say me thanks
Autthor: SONUKUMARSAW
email: sonukumarsaw66@gmail.com
*/