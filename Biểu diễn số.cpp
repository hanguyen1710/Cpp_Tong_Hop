#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i,a,b) for(int i=a; i<=b; ++i)
#define fn(i,a,b) for(int i=a; i>=b; --i)
const int MOD=1e9+7;
using namespace std;

int t, n, m, mx;
int dem(int n, int m, int mx){
  if(n==0 || mx==0) return 1;
  if(n>=pow(m,mx)) return dem(n-pow(m,mx),m,mx)+dem(n,m,mx-1);
  else return dem(n,m,mx-1);
}
int main()
{
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  cin >> t;
  while(t--){
    cin >> n >> m;
    int tmp=1, mx=-1;
    while(tmp<=n) tmp*=m, mx++;
    cout<<dem(n,m,mx)<<'\n';
  }
return 0;
}