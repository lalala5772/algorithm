#include "bits/stdc++.h"
#define endl '\n'
using namespace std;

map <int, string> mp1;
map <string, int> mp2;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
   
    int n, m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        string a;
        cin>>a;
        mp1[i]=a;
        mp2[a]=i;
    }
    
    for(int i=0;i<m;i++){
        string tmp; cin>>tmp;
        if(tmp[0]<65){
            int k=stoi(tmp);
            cout<<mp1[k]<<endl;
        }
        else cout<<mp2[tmp]<<endl;
        
    }
    
    return 0;
}
