#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i,a,b) for(int i=a; i<=b; ++i)
#define fn(i,a,b) for(int i=a; i>=b; --i)
const int MOD=1e9+7;
using namespace std;

ll t, n, f[100005];
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> t;
    f[1]=1, f[2]=1;
    for(int i=3; i<=10005; ++i){
        f[i]=f[i-1]+f[i-2];
        if(f[i]>1000000005) break;
    }
    while(t--){
        cin >> n;
        ll ans=0;
        for(int i=1; i<=10005; ++i){
            if(f[i]>n) break;
            if(f[i]%2==0) ans+=f[i];
        }
        cout<<ans<<'\n';
    }
    return 0;
}