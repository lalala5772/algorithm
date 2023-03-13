#include "bits/stdc++.h"
#define endl '\n'
using namespace std;
int dp[31][31];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t; cin>>t;
    for(int a=0;a<t;a++) {
        int n, m;
        cin>>n>>m;
        for(int i=1;i<=m;i++)
            dp[1][i]=i;
        
        for(int i=2;i<=n;i++){
            for(int j=i;j<=m;j++){
                for(int k=j-1;k>=i-1;k--)
                    dp[i][j]+=dp[i-1][k];
            }
        }
        cout<<dp[n][m]<<endl;
        memset(dp, 0, sizeof(dp));
    }
 
    return 0;
}
