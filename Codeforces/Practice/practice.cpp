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
      
      ll sum = 0, sum1 = 0, sum2 = 0;
      vi a(n), b(n-1), c(n-2);
      fo(0,n){
          cin >> a[i];
          sum += a[i];
      }
      fo(0,n-1){
        cin >> b[i];
        sum1 += b[i];
      }
      fo(0, n-2){
        cin >> c[i];
        sum2 =+ c[i];
      }

      cout << sum << sum1 << sum2 << endl;
      cout << sum-sum1 << endl;
      cout << sum1-sum2 << endl;
          
}      
int main() {
    fast();

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    //seive();
    int t,i;t=1;
    //cin>>t;
    while(t--)solve();
    return 0;
}

