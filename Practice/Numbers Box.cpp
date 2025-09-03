///Bismillahhir Rahmanir Rahim
///MD. SAYEDUL ISLAM
///Dhaka University of Engineering & Technology(DUET)
#include<bits/stdc++.h>
#define fast()  ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

using namespace std;


long long gcd(long long a , long long b){
    while(b!=0){
        long long r = a%b;
        a= b;
        b = r;
    }
    return a;
}
void solve(){

        int n, m; cin >> n >> m;
        int ans = 0, ok = 0, cnt = 0, mn = 10000;
        for(int i = 1; i<=n; i++){
            for(int j = 1; j<=m; j++){
                int x; cin >>x;
                ans+=abs(x);
                if(x<0) cnt++;
                mn = min(mn,abs(x));
                if(x==0) ok = 1;
            }
        }
        //cout<<ans<<endl;
        if(ok || cnt%2==0 )cout << ans << endl;
        else cout<<ans-mn*2<<endl;
}

int main() {
    fast();
    int t=1;
    cin>>t;
    while(t--)solve();

    return 0;
}



