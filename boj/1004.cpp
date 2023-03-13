#include "bits/stdc++.h"
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    
    int t, cnt=0;
    cin>>t;
    for(int i=0;i<t;i++) {
        int n, x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        cin>>n;
        for(int j=0;j<n;j++){
            int a, b, r;
            cin>>a>>b>>r;
            if(pow((x1-a), 2)+pow((y1-b), 2)<r*r&&pow((x2-a), 2)+pow((y2-b), 2)>r*r) cnt++;
            if(pow((x1-a), 2)+pow((y1-b), 2)>r*r&&pow((x2-a), 2)+pow((y2-b), 2)<r*r) cnt++;
        }
        cout<<cnt<<endl;
        cnt=0;
    }
 
    return 0;
}
