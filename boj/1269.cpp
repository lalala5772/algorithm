#include "bits/stdc++.h"
#define endl '\n'
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n, m, cnt=0;
    set<int> s;
    cin>>n>>m;
    
    for(int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        s.insert(tmp);
    }
    for(int i=0;i<m;i++){
        int tmp;
        cin>>tmp;
        if(s.count(tmp)) cnt++;
    }
    
    cout<<n+m-cnt*2;
    
    return 0;
}
