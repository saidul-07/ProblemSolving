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
//Calculate ceil value
int ceil(int a,int b)
{
    return (a+b-1)/b;
}

// bool check(string s, int l, int r){
//     for(int i =l; i<=r && i+3<s.size(); i++){
//        if(s[i]=='1' && s[i+1]=='1' && s[i+2]=='0' && s[i+3]=='0'){
//             return true;
//        }
//     }
//     return false;
// }
void solve(){
    
    string str; cin >> str;

    int cnt = 0;
    for(int i = 0; i+3<str.size(); i++){
        if(str[i]=='1' && str[i+1]=='1' && str[i+2]=='0' && str[i+3]=='0'){
            cnt++;
            i+=3;
        }
    }

    int q; cin >> q;
    while(q--){
        int loc; char val; cin >> loc >> val;
        loc--;
        int l = max(0,loc-3), r =loc;
        //if(check(str,l,r)) cnt--;
        for(int i =l; i<=r && i+3<str.size(); i++){
            if(str[i]=='1' && str[i+1]=='1' && str[i+2]=='0' && str[i+3]=='0'){
                    cnt--;
                 }
        }
        str[loc]=val;
        for(int i =l; i<=r && i+3<str.size(); i++){
            if(str[i]=='1' && str[i+1]=='1' && str[i+2]=='0' && str[i+3]=='0'){
                    cnt++;
                }
        }
        //cout<<l<<' '<<r<<nl;
        //if(check(str,l,r))cnt++;
        //cout<<str<<' '<<cnt<<nl;
        if(cnt) yes;
        else no;
    }
 
}
int main() {
    fast();
    
    int t;t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}


