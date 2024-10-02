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

const int N =1e7+3;
bool primeseive[N];
vector<int>prime;

void seive(){
    primeseive[0]=primeseive[1]=true;
    for(int i = 2; i*i<=N; i++){
        if(primeseive[i]==false){
            for(int j = i*i; j<=N; j+=i)
                primeseive[j] = true;
        }
    }
    for(int i =2; i<=N; i++){ // store prime number
        if(!primeseive[i]) prime.pb(i);
    }
}

void solve(){
    int ts; cin >> ts;

    fo1(1,ts){
        cout<<"Case "<<i<<": ";
        int n,cnt = 0; cin >> n;

        for(int i = 0; i<prime.size(); i++){
            if(prime[i]>n) break;
            int dif = n-prime[i];
            if(!primeseive[dif] && (dif>=prime[i])) cnt++;
        }
        cout<<cnt<<nl;
  }
 
}
int main() {
    fast();
    seive();
    //#ifndef ONLINE_JUDGE
    //freopen("input.txt", "r",stdin);
    //freopen("output.txt","w",stdout);
   // #endif
    
    int t;t=1;
    //cin>>t;
    while(t--)solve();
    return 0;
}


