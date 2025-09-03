///Bismillahhir Rahmanir Rahim
///MD. SAYEDUL ISLAM
///Dhaka University of Engineering & Technology(DUET)
#include<bits/stdc++.h>
#define fast()  ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);

using namespace std;


long long gcd(long long a , long long b){
    while(b!=0){
        long long r = a%b;
        a= b;
        b = r;
    }
    return a;
}
void solve(){
        
    int n; cin >> n;
    vector<int>v(n);
    for(int i = 0; i<n; i++) cin >> v[i];

    int incr = 0;
    for(int i =1; i<n; i++){
        if(v[i]+incr<=v[i-1]){
            int x = (v[i-1]-(incr+v[i]))+1;
            v[i] = v[i]+x;
            incr+=x;
        }
    }
    cout << incr<<endl;
}

int main() {
    fast();
    int t=1;
    cin>>t;
    while(t--)solve();

    return 0;
}



