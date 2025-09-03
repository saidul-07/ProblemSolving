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
   int n; cin >> n;
   vector<int> a(n), b(n);
   for(int i = 0; i<n; i++) cin >> a[i];
   for(int i = 0; i<n; i++) cin >> b[i];

   map<int,int>ma,mb;
   int cnt = 1;
   for(int i = 1; i<n; i++){
        if(a[i]==a[i-1]) {
            cnt++;
        }
        else{
            ma[a[i-1]] = max(cnt, ma[a[i-1]]);
            cnt = 1;
        }
   }
   ma[a[n-1]] = max(cnt,ma[a[n-1]]);

   cnt = 1;
   for(int i = 1; i<n; i++){
        if(b[i]==b[i-1]) {
            cnt++;
        }
        else{
            mb[b[i-1]] = max(cnt, mb[b[i-1]]);
            cnt = 1;
        }
   }
   mb[b[n-1]] = max(cnt,mb[b[n-1]]);

   int ans = 0;
   for(int i = 1; i<=n+n; i++){
        ans = max(ans,ma[i]+mb[i]);
      //  cout <<ma[i]<<' '<<mb[i]<<endl;
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


