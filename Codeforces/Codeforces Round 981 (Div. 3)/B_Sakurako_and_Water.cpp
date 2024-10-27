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

// vector input
template<typename T> istream &operator>>(istream&in, vector<T>&v){ for(auto &it : v ) in>> it; return in;}

// vector output
template<typename T>ostream &operator<<(ostream &out,vector<T>&v){for(auto it = v.begin(); it!=v.end(); ++it){ if(it!=v.begin()) out<<' '; out<<*it;} return out<<endl;}

// Big Power Function Modulation
ll Bigmod(ll b, ll p){
    ll res = 1;
    while(p){
        if(p&1) res=(res*b)%mod;
        b = (b*b)%mod;
        p>>=1;
    }
    return res%mod;
}

void solve(){

        int n; cin >> n;
        // int arr[n][n];
        // int ans = 0,mn=0;
        // for(int i =0; i<n; i++){
        //     for(int j =0; j<n; j++){
        //         cin>>arr[i][j];
        //         if(i==j)mn=min(mn,arr[i][j]);
        //     }
        // }
        // ans+=abs(mn);//cout<<ans<<nl;
        // for(int i =n-2; i>=0; i--){
        //     int k = i,mn=0;
        //     for(int j = n-1; j>=0 && k>=0; j--,k--){
        //         mn=min(mn,arr[k][j]);
        //     }//cout<<mn<<' ';
        //     ans+=abs(mn);
        // }
        // //cout<<ans<<nl;

        // for(int i =n-2; i>=0; i--){
        //     int k = i,mn=0;
        //     for(int j = n-1; j>=0 && k>=0; j--,k--){
        //         mn=min(mn,arr[j][k]);
        //     }//cout<<mn<<' ';
        //     ans+=abs(mn);
        // }
        // cout<<ans<<nl;
        vector<vector<int>>v(n,vector<int>(n));
        for(auto &u : v)
            for(auto &u1 : u)
                cin >> u1;
        
        int ans = 0, mn = 0;
        for(int i = 0; i<n; i++){
            mn = 0;
            for(int j = 0; j+i<n; j++)
                mn = min(mn,v[i+j][j]);
            ans-=mn;
            mn = 0;
            if(i)
                for(int j = 0; j+i<n; j++)
                    mn = min(mn,v[j][i+j]);
               ans-=mn;
        }
        out(ans);
 
}
int main() {
    fast();
    
    int t;t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}


