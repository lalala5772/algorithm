#include "bits/stdc++.h"
#define endl '\n'
using namespace std;
pair<string, int> str[1001];

bool cmp(pair<string, int> &a, pair<string, int> &b){
    if(a.first.size()!=b.first.size()) return a.first.size()<b.first.size();
    if(a.second!=b.second) return a.second<b.second;
    return a.first<b.first;
}


int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
   
    int n; cin>>n;
    for(int i=0;i<n;i++){
        cin>>str[i].first;
        int cnt=0;
        for(int j=0;j<str[i].first.size();j++){
           for(int k=1;k<10;k++) if(str[i].first[j]-'0'==k) cnt+=k;
        }
        str[i].second=cnt;
    }
    
    sort(str, str+n, cmp);

    for(int i=0;i<n;i++) cout<<str[i].first<<endl;
    
    return 0;
}

