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
    vector<int>v(n);
    for(int i = 0; i<n; i++) cin >> v[i];


    
    int ans = 0, lastcnt = 1;
    for(int i = n-2; i>=0; i-- ){
        if(v[i]==v[n-1]) lastcnt++;
        else {
            ans++;
            lastcnt+=lastcnt;
            i = n-lastcnt;
            if(i<0) break;
        }
        //cout<<lastcnt<<' '<<i<<' '<<ans<<endl;
    }
    cout << ans <<endl;
}
int main() {
    fast();
    int t=1;
    cin>>t;
    while(t--)solve();

    return 0;
}

