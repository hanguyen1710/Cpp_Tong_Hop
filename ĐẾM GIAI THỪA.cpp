/*Make it count*/
#include <bits/stdc++.h>
#define ll long long
#define fi first
#define se second
#define pb push_back
#define all(v) v.begin(),v.end()
#define f(i,a,b) for(int i=a; i<=b; ++i)
#define fn(i,a,b) for(int i=a; i>=b; --i)
#define faster() ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
const int MOD=1e9+7;

using namespace std;

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--){
        float n;
        cin >>n;
        float cnt=0;
        float i = 1;
        queue<int>q;
        while(cnt < n){
            cnt += log10(i);
            //            cout <<cnt <<'\n';
            if(cnt > n-1 && cnt < n) q.push(i);
            i++;
        }
        if(q.size() == 0) cout <<"NO";
        else{
            cout <<q.size() <<' ';
            while(q.size()){
                cout <<q.front() <<' '; q.pop();
            }
        }
        cout <<'\n';

    }
    return 0;
}