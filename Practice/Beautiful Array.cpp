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

        long long n, k, b, s; cin >> n >> k >> b >> s;
         if(k*b>s){
            cout << -1 << endl;
            return;
        }
        vector<long long>v;
        long long x = (k*b)+k-1;
        if(x>s){
            x=k*b;
            v.push_back(x);

        }
        else v.push_back(x);

        x = s-x;
        //cout<<"Debug : "<<x<<endl;
        while(v.size()!=n){
                if(x>=k) {
                    v.push_back((k-1));
                    x = x-(k-1);
                }
                else if(x<0) v.push_back(0);
                else {
                    v.push_back(x);
                    x-=x;
                }
        }
        if(x>0){
         cout <<-1<<endl;
         return;
         }
        for(int i = 0; i<v.size(); i++) cout <<v[i]<<' ';
        cout << endl;
}
int main() {
    fast();
    int t=1;
    cin>>t;
    while(t--)solve();

    return 0;
}

