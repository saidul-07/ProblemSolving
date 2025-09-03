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

       string s; cin  >> s;
       string temp  = s;
       s+=s;
       int cnt = 0, n = s.size();
       vector<long long>v(n,0);
       for(int i = 0; i<n; i++){
            if(s[i]=='1') cnt++;
            else cnt = 0;
            v[i] = cnt;
       }
       //for(int i = 0; i<n; i++)cout<<v[i]<<"";
       long long res = -1;
       cnt = 0;
       for(int i =n-1; i>=0; i--){
          if(v[i]) cnt++;
          else cnt = 0;
          res = max(res,cnt*v[i]);
       }
       //if(n!=1 && s[0]=='1' && s[n-1]=='1' && res<2) res = 2;
       sort(temp.begin(),temp.end());
       if(temp[0] && temp[temp.size()-1] && temp[0]=='1') cout<<1LL*temp.size()*temp.size()<<endl;
       else cout<<res<<endl;
}
int main() {
    fast();
    int t=1;
    cin>>t;
    while(t--)solve();

    return 0;
}

