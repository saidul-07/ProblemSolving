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
     vi v(n); ivi (v);

     int l=0, r=0;
     for(int i = 0; i<n; i++){
        if(v[i]>0){
            l = i;
            break;
        }
     }
     for(int i = n-1; i>=l; i--){
        if(v[i]>0){
            r = i+1;
            break;
        }
     }
     //cout << l << ' '<< r << endl;
     int ans = 0;
     for(int i = l; i<r; i++){
        if(v[i]<0) ans ++;
     }   
     cout << ans << endl;
}

int main() {
    fast();

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    //seive();
    int t,i;t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}

