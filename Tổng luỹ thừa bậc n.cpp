#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define f(i,a,b) for(int i=a; i<=b; ++i)
#define fn(i,a,b) for(int i=a; i>=b; --i)
const int MOD=1e9+7;
using namespace std;

int t, m, n, x[15][105], sl[15], dp[15][35][1005];
int mu(int a, int b){
int ans=1;
f(i,1,b) ans*=a;
return ans;
}
int main() {
  ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  cin >> t;
  f(i,2,10){
    f(j,1,100){
      if(mu(j,i)>1000) {sl[i]=j-1; break;}
      else x[i][j]=mu(j,i);
    }
  }
  f(u,2,10) dp[u][1][x[u][1]]=1;
  f(u,2,10){
    f(i,1,sl[u]) dp[u][i][0]=1;
  }
  f(u,2,10){
    f(i,2,sl[u]){
      f(j,1,1000){
        if(j>=x[u][i]) dp[u][i][j]=dp[u][i-1][j]+dp[u][i-1][j-x[u][i]];
        else dp[u][i][j]=dp[u][i-1][j];
      }
    }
  }
  while(t--){
    cin >> m >> n;
    cout<<dp[n][sl[n]][m]<<'\n';
  }
return 0;
}