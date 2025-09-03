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

    int ans=INT_MAX;
    for(int i =0; i<n; i++){
        if(i!=v[i]) ans =ans&v[i];
    }
    cout<<ans<<endl;

}

int main() {
    fast();
    int t=1;
    cin>>t;
    while(t--)solve();

    return 0;
}



