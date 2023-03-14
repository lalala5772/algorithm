#include "bits/stdc++.h"
#define endl '\n'
using namespace std;
int a[51], b[51];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, m;
    cin>>n>>m;
    
    for(int i=0;i<m;i++) cin>>a[i]>>b[i];
    
    sort(a, a+m); sort(b, b+m);
    
    int tmp = min(a[0]*(n/6)+b[0]*(n%6), b[0]*n);
    cout<<min(tmp, a[0]*(n/6+1));
    
    return 0;
}
