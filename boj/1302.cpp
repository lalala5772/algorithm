#include "bits/stdc++.h"
#define endl '\n'
using namespace std;
bool check[1001];
pair<string, int> p[1001];
bool cmp(pair<string, int> &a, pair<string, int> &b){
    if(a.second!=b.second) return a.second>b.second;
    return a.first<b.first;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++) cin>>p[i].first;
    sort(p, p+n);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(check[j]) continue;
            if(p[i].first==p[j].first){
                check[j]=true;
                p[i].second++;
            }
        }
    }
    sort(p, p+n, cmp);
    cout<<p[0].first;
    return 0;
}

