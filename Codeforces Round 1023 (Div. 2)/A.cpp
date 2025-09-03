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

map<int,int>mp;
int ch = 1, even = 1;
for(int i = 0; i<n; i++){
 cin >> v[i];
 if(v[i]%2!=0) even = 0;
 mp[v[i]]++;
 }

if(mp.size()==1){
    cout <<"No"<<endl;
    return;
}
if(even){
    int c = 1;
    cout<<"Yes"<<endl;
    for(int j = 0; j<n; j++){
        if(v[j]!=2 && c ){
                cout<<1<<' ';
                c = 0;
        }
        else cout<<2<<' ';
    }
    cout<<endl;
    return;
}

    cout<<"YES"<<endl;
    for(int i = 0; i<n; i++){
        if(v[i]!=1 && ch){
            cout <<2<<' ';
            ch =0;
        }
        else cout<<1<<' ';
    }
cout<<endl;
}

int main() {
    fast();
    int t=1;
    cin>>t;
    while(t--)solve();

    return 0;
}




