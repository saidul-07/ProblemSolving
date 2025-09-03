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


long long n, k; cin >> n >> k;
vector<long long>v(n);
long long mx = -1, mn = 1e9+5;
for(int i = 0; i<n; i++){
    cin >> v[i];
    mx = max(mx,v[i]);
    mn = min(mn, v[i]);
}
    long long sum = accumulate(v.begin(),v.end(),0LL);
if((mx-mn)>k+1){
    cout<<"Jerry"<<endl;
}
else if((sum&2)) cout<<"Tom"<<endl;

else cout<<"Jerry"<<endl;



}

int main() {
    fast();
    int t=1;
    cin>>t;
    while(t--)solve();

    return 0;
}




