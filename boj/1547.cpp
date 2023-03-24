#include "bits/stdc++.h"
#define endl '\n'
using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int cup[4] = {0, 1, 0, 0};
    int n, a, b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        swap(cup[a], cup[b]);
    }
    for(int i=1;i<4;i++)
        if(cup[i]==1) cout<<i;
    
    return 0;
}
