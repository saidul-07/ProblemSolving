#include<bits/stdc++.h>
using namespace std;
#define      fast()        ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define      ll            long long int
#define      ull           unsigned long long int
#define      mod           1000000007
#define      vi            vector<ll>
#define      ivi(v)        for(auto & i:v)cin>>i
#define      outvi(v)      for(auto & i:v)cout<<i<<' '
#define      pb            push_back
#define      fo(x,n)       for(int i=0; i<n; i++)
#define      fo1(x,n)       for(int i=x; i<=n; i++)
#define      endl          '\n'
#define      yes           cout<<"YES"<<endl
#define      no            cout<<"NO"<<endl
#define      precision(n)  fixed<<setprecision(n)  //example cout<<precision(3)<<n<<endl;

void solve(){
      
      int n; cin >> n;
      vi v(n+1), visit(n+1,0), res(n+1,0);
      fo1(1,n) cin >> v[i];
      string s; cin >> s;

      for(int i = 1; i<=n; i++){
        if(!visit[i]){
            int x = i;
            vi cyc;
            while(!visit[x]){
                visit[x]=1;
                cyc.pb(x);
                x=v[x];
            }
            
            int k = 0;
            for(auto u : cyc)
                if(s[u-1]=='0') k++;
            
            for(auto u : cyc)
                res[u] = k;
        }
      }
      
      fo1(1,n) cout<< res[i]<<' ';
      cout << endl;
}

int main() {
    fast();
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    int t,i;t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}

