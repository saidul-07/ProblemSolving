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
    int n; string s;
    cin >> n >> s;
   
    for(int i =1; i<s.size(); i++){
        if(s[i]<s[i-1]){
            cout<<"YES"<<endl;
            cout<<i<<' '<<i+1<<endl;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main() {
    fast();
    int t=1;
    //cin>>t;
    while(t--)solve();

    return 0;
}



