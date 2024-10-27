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
    
    string s; cin >> s;

    if(s.size()&1){
        cout<<"No"<<nl;
        return;
    }
    stack<char>st;
    for(int i =0; i<s.size(); i++){
        if(s[i]=='(') st.push(s[i]);
        else{
            if(st.empty()){
                cout<<"No"<<nl;
                return;
            }
            else if(st.top()=='('){
                st.pop();
            }else{
                cout<<"No"<<nl;
                return ;
            }
        }
    }
    if(st.empty())cout<<"Yes"<<nl;
    else cout<<"No"<<nl;

}
int main() {
    fast();
    
    int t;t=1;
    //cin>>t;
    while(t--)solve();
    return 0;
}


