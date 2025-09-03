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

       int n,t = 0, m = 0; cin >> n;
       string s; cin >> s;
       for(int i = 0; i<n; i++){
        if(s[i]=='T') t++;
        if(s[i]=='M') m++;

        if(s[i]=='M'){
            if(t<m){
                cout<<"NO"<<endl;
                return;
            }
            
        }
       }
       if((t/2)!=m){
        cout<<"NO"<<endl;
        return;
       }
       t = 0, m = 0;
       for(int i = n-1; i>=0; i--){
        if(s[i]=='T') t++;
        if(s[i]=='M') m++;

        if(s[i]=='M'){
            if(t<m){
                cout<<"NO"<<endl;
                return;
            }

       }
    }
    cout<<"YES"<<endl;
}
int main() {
    fast();
    int t=1;
    cin>>t;
    while(t--)solve();

    return 0;
}

