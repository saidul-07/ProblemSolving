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
   string s; cin >> s;

   int cost, ch1 = 0, ch2 = 0;
   if(s[0]=='0') cost = 1;
   else cost = 2;
   for(int i = 1; i<n; i++){
    if(s[i]!=s[i-1]){
        cost+=2;
    }
    else cost++;
   } //cout << cost << endl;

   int last = 0, i;
        for(i = 0; i<n; i++){
            if(s[i]=='1') ch2 = 1;

            if(ch2 && s[i]=='0'){
                break;
             }
        }

        for(i; ch2 && i<=n; i++){
            if(s[i]=='0'){
             ch1 = 1;
            continue;
            }
            else{
            last = i-1;
            break;
            }
        }

        if(ch1 && last==n-1) cout << cost-1<<endl;
        else if(ch1) cout << cost-2 << endl;
        else cout << cost << endl;

}
int main() {
    fast();
    int t=1;
    cin>>t;
    while(t--)solve();

    return 0;
}

