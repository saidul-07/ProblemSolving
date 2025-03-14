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

//Comparator function sorting
bool com(pair<int,int>a, pair<int,int>b){
    // if(a.first!=b.first){  // sort increasing order base fast element
    //     if(a.fi>b.fi) return false;
    //     else return true;
    // }
        if(a.sc<b.sc) return false; // sort decreasing order base second element
        else return true;
}

//Calculate ceil value
int ceil(int a,int b)
{
    return (a+b-1)/b;
}

void solve(){

        int n, m; cin >> n >> m;
        vector<vector<int>>v(n+2,vector<int>(m+2,0));

        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=m; j++){
                cin >> v[i][j];
            }
        }

        // for(auto u :v ){
        //     for(auto m : u){
        //         cout << m <<' ';
        //     }
        //     cout << nl;
        // }
        map<int,int>mp;
        for(int i = 1; i<=n; i++){
            for(int j =1; j<=m; j++){
                if(v[i][j]==v[i-1][j]) v[i][j]*=-1, mp[v[i][j]]++;
                else if(v[i][j]==v[i][j-1]) v[i][j]*=-1, mp[v[i][j]]++;
                else if(v[i][j]==v[i][j+1]) v[i][j]*=-1, mp[v[i][j]]++;
                else if(v[i][j]==v[i+1][j]) v[i][j]*=-1, mp[v[i][j]]++;
                else mp[v[i][j]]++;
            }
        }
        vector<int>nw;
        for(auto u: mp){
            int x, y; x = u.first, y = u.second;
            //cout <<x<<' '<<y<<nl;
            nw.pb(x);
        }
        int ans = 0;
        for(int i = 0; i<nw.size(); i++){
            if(i==0 && nw[i]<0) continue;
            //else if(nw[i]<0) ans+=mp[nw[i]];
            else ans++;
        }
        out(--ans);
 
}
int main() {
    fast();
    
    int t;t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}


