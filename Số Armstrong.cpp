#include<bits/stdc++.h>
#define ll long long
using namespace std;
int Count(int n){
    int cnt=0;
    while(n!=0){
        cnt++;
        n/=10;
    }
    return cnt;
}
ll SUM(ll n){
    ll sum = 0;
    ll m = n;
    while(n!=0){
        sum += pow(n%10,Count(m));
        n/=10;
    }
    return sum;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >>n;
        if(SUM(n) == n) cout <<1;
        else cout <<0;
        cout<<'\n';
    }
    return 0;
}