#include "bits/stdc++.h"
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
   
    int n, m;
    cin>>n>>m;
    
    int p[m+1];
    for(int i=1;i<=m;i++) cin>>p[i];
    
    sort(p+1, p+m+1);
    pair<int, int> value[m+1];
    for(int i=1;i<=m;i++){
        if(m-i+1>n) continue;
        value[i].first=(m-i+1)*p[i];
        value[i].second=p[i];
    }
    sort(value+1, value+m+1);
    cout<<value[m].second<<" "<<value[m].first;
    
    return 0;
}

