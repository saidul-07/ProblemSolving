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
  int m,n;
  string s1,s2;
  
  cin>>n>>m>>s1>>s2;

  int i=-1;
  for (int j = 0; j < n; j++)
  {
    if(s1[j]=='*'){
        i=j;
        break;
    }
  }

  if(i==-1){
    if(s1==s2)cout<<"YES\n";
    else cout<<"NO\n";

  }else{

    if(n-1>m){

        cout<<"NO\n";
        return;
    }
    bool a=1;
    for (int j = 0;a& j < i; j++)
    {
        if(s1[j]!=s2[j]){
            a=0;
            
        }
    }
    for (int j = m-1,k=n-1;a& k >i; j--,k--)
    {
        if(s1[k]!=s2[j]){
            a=0;
        }
    }


    if(a)cout<<"YES\n";
    else cout<<"NO\n";
    



  }
  




 
}
int main() {
    fast();
    
    int t;t=1;
    //cin>>t;
    while(t--)solve();
    return 0;
}


