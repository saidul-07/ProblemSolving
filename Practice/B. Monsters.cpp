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
    int n, k; cin >> n >> k;
    vector<pair<int,int>>v;

    for(int i =1; i<=n; i++){
        int x; cin >> x;
        if(x%k==0){
            v.push_back({k,i});
            }
        else {
            v.push_back({x%k, i});
        }
    }
    sort(v.begin(), v.end(), com);

    for(int i = 0; i<n; i++) cout<<v[i].second<<' ';
    cout << endl;
}
int main() {
    fast();
    int t=1;
    cin>>t;
    while(t--)solve();

    return 0;
}




