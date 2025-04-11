#include<bits/stdc++.h>
using namespace std;
int g(int a, int b){
    while(a!=0){
        int r= b%a;
        b = a;
        a = r;
    }
    return b;
}
int main(){
    int a, b; cin >> a >> b;
    cout << g(a,b)<<endl;
    return 0;
}