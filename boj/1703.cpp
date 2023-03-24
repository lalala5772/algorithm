#include "bits/stdc++.h"
#define endl '\n'
using namespace std;


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int tree, ans=1;
    while(1){
        cin>>tree;
        if(tree==0) break;
        for(int i=0;i<tree;i++){
            int a,b;
            cin>>a>>b;
            ans*=a;
            ans-=b;
        }
        cout<<ans<<endl;
        ans=1;
    }
    
    return 0;
}
