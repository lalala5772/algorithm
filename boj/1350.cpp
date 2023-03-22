#include "bits/stdc++.h"
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
  
    int n;
    cin>>n;
    long long a[n+1], b;
    for(int i=0;i<n;i++) cin>>a[i];
    cin>>b;
    long long cnt=0;
    for(int i=0;i<n;i++){
        if(a[i]==0) continue;
        if(a[i]/b&&a[i]%b) cnt+=a[i]/b+1;
        else if(a[i]/b) cnt+=a[i]/b;
        else cnt++;
    }
    cout<<cnt*b;
    
    return 0;
}
