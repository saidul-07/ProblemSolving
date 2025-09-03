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
       string s; cin >> s;
       int white[n+1]={0};

       for(int i =1; i<=n; i++)
            white[i]=white[i-1]+(s[i-1]=='W');
        
        int ans = INT_MAX;
        for(int i = k; i<=n; i++){
            ans = min(ans,white[i]-white[i-k]);
        }
        cout<< ans << endl; 
}
int main() {
    fast();
    int t=1;
    cin>>t;
    while(t--)solve();

    return 0;
}

