#include<bits/stdc++.h>
using namespace std;
#define      fast()        ios_base::sync_with_stdio(0); cin.tie(0);cout.tie(0);
#define      ll            long long int
#define      ull           unsigned long long int
#define      vi            vector<int>
#define      vll           vector<ll>
#define      vs            vector<string>
#define      inv(v)        for(auto & i:v)cin>>i
#define      outv(v)       for(auto & i:v)cout<<i<<' '; cout<<nl;
#define      fo(x,n)       for(int i=0; i<n; i++)
#define      fo1(x,n)      for(int i=x; i<=n; i++)
#define      all(v)        v.begin(),v.end()
#define      gcd(a,b)      __gcd(a,b)
#define      lcm(a,b)      (a*b)/gcd(a,b)
#define      digit(x)      log10(x)+1
#define      mod           1000000007
#define      pb            push_back
#define      pob           pop_back
#define      fi            first
#define      sc            second
#define      yes           cout<<"YES"<<nl
#define      no            cout<<"NO"<<nl
#define      out(x)        cout<<x<<nl
#define      nl            '\n'
#define      precision(n)  fixed<<setprecision(n)  //example cout<<precision(3)<<n<<endl;
template<typename T> // vector input
istream &operator>>(istream&in, vector<T>&v){
    for(auto &it : v )
        in>> it;
    return in;
}
template<typename T> // vector output
ostream &operator<<(ostream &out,vector<T>&v){
    for(auto it = v.begin(); it!=v.end(); ++it){
        if(it!=v.begin()) out<<' ';
        out<<*it;
    }
    return out<<endl;
}

int fibo(int n){
    if(n==0) return n;
    if(n==1) return n;
    return fibo(n-1)+fibo(n-2);
}
void solve(){
    int n; cin >> n;
    for(int i=0; i<=n; i++)
        cout<<fibo(i)<<' ';
 
}
int main() {
    fast();
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    int t;t=1;
   // cin>>t;
    while(t--)solve();
    return 0;
}

