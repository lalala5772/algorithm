#include "bits/stdc++.h"
#define endl '\n'
using namespace std;
bool flag;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int n, m;
    cin>>n>>m;
    string a[n+1];
    for(int i=0;i<n;i++) cin>>a[i];
    
    int xcnt=0, ycnt=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]=='X') {
                flag=true;
            }
        }
        if(!flag) ycnt++;
        flag=false;
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[j][i]=='X') {
                flag=true;
            }
        }
        if(!flag) xcnt++;
        flag=false;
    }
    cout<<max(xcnt, ycnt);
    return 0;
}

