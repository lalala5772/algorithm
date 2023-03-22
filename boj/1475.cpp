#include "bits/stdc++.h"
#define endl '\n'
using namespace std;
int num[10];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
   
    string n;
    cin>>n;
    
    for(int i=0;i<n.size();i++) num[n[i]-'0']++;
    
    int mx=-1;
    num[6]=((num[6]+num[9])%2?(num[6]+num[9])/2+1:(num[6]+num[9])/2);
    
    for(int i=0;i<9;i++){
        if(mx<num[i]) {
            mx=num[i];
        }
    }
    cout<<mx<<endl;
    return 0;
}
