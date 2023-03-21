#include "bits/stdc++.h"
#define endl '\n'
using namespace std;
vector<int> v;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int a, b;
    cin>>a>>b;
   
    for(int i=1;i<=1000;i++) {
        for(int j=1;j<=i;j++){
            v.push_back(i);
        }
    }
    int sum=0;
    for(int i=a-1;i<b;i++) sum+=v[i];
    
    cout<<sum;
    return 0;
}

