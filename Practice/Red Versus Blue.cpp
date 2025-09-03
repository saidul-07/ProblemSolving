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

    int n, r, b; cin >> n >> r >> b;
    int x = r/(b+1), y = r%(b+1);

    int l = x;
    while(l--)cout<<'R';
    if(y) cout<<'R',y--;

    for(int i = 1; i<=b; i++){
        cout<<"B";
        l = x;
        while(l--)cout<<"R";
        if(y) cout<<"R",y--;
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



