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

        long long n; cin >> n;

        vector<long long >v(n),sum(n), maxi(n);
        for(int i = 0; i<n; i++){
         cin >> v[i];
         if(i==0) maxi[0] = v[0];
         else maxi[i]= max(maxi[i-1],v[i]);
         }

        for(int i =n-1; i>=0; i--){
            if(i==n-1) sum[i] = v[i];
            else sum[i] = sum[i+1]+v[i];
        }
        //for(int i = 0; i<n; i++) cout << sum[i]<<' '; cout << endl;

        for(int i = n-1; i>=0; i--){
            if(i==n-1) cout <<maxi[i]<<' ';
            else if(i==0) cout <<sum[0]<<' ';
            else cout <<maxi[i]+sum[i+1]<<' ';
        }
        cout << endl;
}
int main() {
    fast();
    int t=1;
    cin>>t;
    while(t--)solve();

    return 0;
}

