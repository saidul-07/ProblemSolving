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

       int n, m; cin >> n >> m;
       vector<string>s(m);
       for(int i = 0; i<m; i++) cin >>s[i];
       
       ll ans = 0;
       for(int i =0; i<n; i++){
        int one = 0, zero = 0, q = 0;
        for(int j = 0; j<m; j++){
            if(s[j][i]=='0') zero++;
            else if(s[j][i]=='1') one++;
            else q++;
        }
       // cout<<zero<<' '<<one<<' '<<q<<endl;
        if(q>0){
        int dif = abs(one-zero);
        if(dif>q){
            if(one<zero) one+=q;
            else zero+=q;
        }
        else{
            q-=dif;
            one = max(one,zero);
            zero = one;
            if(q%2){
                one+=q/2;
                zero+=(q/2)+1;
            }
            else{
                one+=q/2;
                zero+=q/2;
                 }
            }
        }
        ans+=(zero*one);
    }
    out(ans);
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

