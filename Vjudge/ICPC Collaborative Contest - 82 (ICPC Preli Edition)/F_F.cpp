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
ll Bigmod(ll b, ll p){
    ll res = 1;
    while(p){
        if(p&1) res=(res*b)%mod;
        b = (b*b)%mod;
        p>>=1;
    }
    return res%mod;
}
bool is_leapyaer(int y){
    if((y%4==0 && (y%100!=0)) || (y%400==0)) return true;
    else return false;
}
int first_day(int year){
    int day = 3;
    for(int i = 1970; i<year; i++){
        if(is_leapyaer(i)) day=(day+2)%7;
        else day = (day+1)%7;
    }
    return day;
}

void solve(){
    int month[]={31,28,31,30,31,30,31,31,30,31,30,31};
    int year ;cin >> year;

    if(is_leapyaer(year)) month[1]=29;

    int std= first_day(year);
    //cout<<std<<nl;
    int week = 0;
    for(int i = 0; i<12; i++){
        week+=(month[i]+std+6)/7;
        std = (month[i]+std)%7;
    //cout<<std<<' '<<week<<nl;
    }

    cout<<week<<nl;
 
}
int main() {
    fast();
    
    int t;t=1;
    //cin>>t;
    while(t--)solve();
    return 0;
}


