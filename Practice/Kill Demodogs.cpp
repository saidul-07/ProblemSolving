///Bismillahhir Rahmanir Rahim
///MD. SAYEDUL ISLAM
///Dhaka University of Engineering & Technology(DUET)
#include<bits/stdc++.h>
#define fast()  ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define mod 1000000007
using namespace std;


bool com(pair<int,int>a, pair<int,int>b){
     if (a.first != b.first) return a.first > b.first; // first ↓
     else return a.second < b.second;
}

void solve(){

       long long n ; cin >> n;

       long long res = 1LL*337*((n*(n+1)%mod)*(4*n-1)%mod)%mod;
       cout<<res<<endl;
}
int main() {
    fast();
    int t=1;
    cin>>t;
    while(t--)solve();

    return 0;
}

