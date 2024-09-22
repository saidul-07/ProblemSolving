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
  
void solve(){
    int n; cin >> n;
    string s; cin >> s;
    vi v(n);  
    int res[]={1,3,20,7};

    int ans = INT_MAX;
    int a, b, c, d;
    for(int i =0; i<n-3; i++){
            a = abs(s[i]-'A');
            b = abs(s[i+1]-'C');
            c = abs(s[i+2]-'T');
            d = abs(s[i+3]-'G');

            if(a>=14) a = 26-a;
            if(b>=14) b = 26-b;
            if(c>=14) c = 26-c;
            if(d>=14) d = 26-d;
            int temp = a+b+c+d;
            ans = min(ans,temp);
         }

    out(ans);
    
}
int main() {
    fast();
   
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    int t;t=1;
    //cin>>t;
    while(t--)solve();
    return 0;
}

