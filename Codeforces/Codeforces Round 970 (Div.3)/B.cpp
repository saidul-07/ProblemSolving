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
      string s; cin >> s;

      int c1 = 0, c0 = 0;
      for(int i = 0; i<n; i++){
        if(s[i]=='0') c0++;
      }
      int root =sqrt(n);
      int one=root*2+(root-2)*2;

      if(root*root==n){
        if((n-one)==c0) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
      }
      else cout<<"No"<<endl;
            
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

