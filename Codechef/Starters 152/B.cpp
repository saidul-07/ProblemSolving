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
  
void solve(){

         ll n; cin >> n;
         vll v(n); inv (v);

         sort(all(v));
         if(n==3) {
            out(0);
            return;
         }
         ll ans1 = v[n-1]-v[2];
         
         ll ans2 = v[n-3]-v[0];
         ll ans3 = v[n-2]-v[1];
         cout<<min(ans1, min(ans2,ans3))<<endl;
}
int main() {
    fast();
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    int t;t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}

