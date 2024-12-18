#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i,a,b) for(int i=a; i<=b; ++i)
#define fn(i,a,b) for(int i=a; i>=b; --i)
const int MOD=1e9+7;
using namespace std;

ll n, fib[100005];
map<int,int>cnt;
int t;
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    fib[1]=1, fib[2]=1;
    cnt[1]=1;
    for(int i=3; i<=1005; ++i){
        fib[i]=fib[i-1]+fib[i-2];
        cnt[fib[i]]=1;
        if(fib[i]>1000000005) break;
    }
    cin >> t;
    while(t--){
        cin >> n;
        int x=n+1;
        while(cnt[x]==1) x++;
        cout<<x<<'\n';
    }
    return 0;
}