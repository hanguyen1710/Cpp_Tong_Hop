#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i,a,b) for(int i=a; i<=b; ++i)
#define fn(i,a,b) for(int i=a; i>=b; --i)
const int MOD=1e9+7;
using namespace std;

int t, f[10005], n;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    f[1]=0, f[2]=1;
    f(i,3,32) f[i]=f[i-1]+f[i-2];
    cin >>t;
    while(t--){
        cin >> n;
        int z=0;
        f(i,1,32){
            f(j,i+1,32){
                if(f[i]+f[j]==n){cout<<f[i]<<" "<<f[j]<<'\n'; z=1; break;}
            }
            if(z==1) break;
        }
        if(z==0) cout<<-1<<'\n';
    }
    return 0;
}