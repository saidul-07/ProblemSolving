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

    long long n, m, k; cin >> n >> m >> k;
    vector<long long>a(n), b(m);

    for(int i = 0; i<n; i++) cin >> a[i];
    for(int i = 0; i<m; i++) cin >> b[i];
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());

    int ans = 0, left = 0;
    for(int i = 0; i<n; i++){

        while(left<m){
            if(abs(a[i]-b[left])<=k){
                ans++;
                left++;
                break;
            }
            if(a[i]<b[left]) break;
            left++;
        }
    }
    cout << ans << endl;


}

int main() {
    fast();
    int t=1;
    //cin>>t;
    while(t--)solve();

    return 0;
}




