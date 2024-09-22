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
   int n; cin >> n;
   vi v(n); inv (v);

   int mx = -1,cnt = 0;
   set<int>s; vi p;
   for(int i = 0; i<n; i++){
        s.insert(v[i]); cnt++;
        mx = max(mx,v[i]);
        if(cnt==mx && s.size()==cnt)
                p.pb(mx);
   }

   cnt = 0, mx = -1; s.clear();
   bool hold[200000] = {0};
   for(int i = n-1; i>=0; i--){
            s.insert(v[i]); cnt++;
            mx = max(mx, v[i]);
            if(mx == cnt && s.size()==cnt)
                    hold[mx] = true;
         }
    vector<pair<int,int>>ans;
    for(int i = 0; i<p.size(); i++){
        if(hold[n-p[i]]){
            ans.pb(make_pair(p[i],n-p[i]));
        }
    }

    if(ans.empty()) out(0);
    else{
        out(ans.size());
        for(auto u : ans )
            cout<<u.first<<' '<<u.second<<nl;
    }
    
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

