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

        long long n; cin >> n;

        long long ans = 1;
        for(int i = 2; i*i<=n; i++){
            if(n%i==0){
                    ans = n/i;
                    break;
                }
        }

        cout << ans << ' '<< n-ans << endl;
}

int main() {
    fast();
    int t=1;
    cin>>t;
    while(t--)solve();

    return 0;
}



