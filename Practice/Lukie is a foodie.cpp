///Bismillahhir Rahmanir Rahim
///MD. SAYEDUL ISLAM
///Dhaka University of Engineering & Technology(DUET)
#include<bits/stdc++.h>
#define fast()  ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

using namespace std;


bool com(pair<int,int>a, pair<int,int>b){
     if (a.first != b.first) return a.first > b.first; // first ↓
     else return a.second < b.second;
}
void solve(){

   long long n, x; cin >> n >> x;
   vector<long long>v(n);
   for(int i = 0; i<n; i++) cin >> v[i];

   long long mn = 1e9, mx = -1, ans = 0;
   for(int i = 0; i<n; i++){
    mn = min(mn,v[i]); mx = max(mx, v[i]);

    if(abs(mn-mx)>2*x){
        mn = mx = v[i];
        ans++;
        } cout <<v[i]<<' '<<ans<<endl;
   }
        cout << ans << endl;
}

int main() {
    fast();
    int t=1;
    cin>>t;
    while(t--)solve();

    return 0;
}



