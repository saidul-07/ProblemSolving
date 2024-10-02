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

void solve(){
    
    
    ll n, k;cin >> n >> k;
 
    ll x;
    if(k==1 || k>n){
        cout<<n<<nl;
        return;
    }
    if(k==n){
        cout<<1<<nl;
        return;
    }
    for(int i = 0; i<32; i++){
        if((ll)pow(k,i)<=n)
                x = i;
        else break;
    }//cout<<x<<nl;
    
    int cnt = 0;
    if(x==1){
        cnt = n/k;
        n=n-(cnt*k);
    }
    while(n!=0){
        if(k>n){
            cnt+=n;
            break;
        }
        if(pow(k,x)<=n){
            n-=pow(k,x);
            cnt++;
        }
        if(pow(k,x)>n) x--;
    }
    out(cnt);
    
 
}
int main() {
    fast();
    
    int t;t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}


