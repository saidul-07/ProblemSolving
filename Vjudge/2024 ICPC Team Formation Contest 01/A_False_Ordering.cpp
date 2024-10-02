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

int divisor(int n){ // count number of divisor
    set<int>d;
    for(int i =1; i*i<=n; i++){
        if(n%i==0){
            d.insert(i);
            d.insert(n/i);
        }
    }
    return d.size();
}
bool com(pair<int,int>a, pair<int,int>b){
    if(a.first!=b.first){  // sort increasing order base fast element
        if(a.fi>b.fi) return false;
        else return true;
    }
    else {
        if(a.sc<b.sc) return false; // sort decreasing order base second element
        else return true;
    }
}
void solve(){
        vector<pair<int,int>>v;
        for(int i = 1; i<=1000; i++)
                v.pb(make_pair(divisor(i),i));
        
        sort(all(v),com);
        int ts; cin >> ts;
        fo1(1,ts){
            cout<<"Case "<<i<<": ";
            int n; cin >> n;
            cout<<v[n-1].second<<nl;

        }
 
}
int main() {
    fast();
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r",stdin);
    //freopen("output.txt","w",stdout);
   // #endif
    
    int t;t=1;
    //cin>>t;
    while(t--)solve();
    return 0;
}


