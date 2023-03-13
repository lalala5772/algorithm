#include "bits/stdc++.h"
#define endl '\n'
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int x1, x2, r1, y1, y2, r2;
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        
                int a = (r1+r2)*(r1+r2);
                int b = (r1-r2)*(r1-r2);
                if((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)==0){
                    if(b==0) cout << "-1" <<endl;
                    else cout <<"0"<<endl;
                   }
                else if((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)==a||(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)==b) cout << "1" << endl;
                else if(b<(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)&&(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)<a) cout << "2" << endl;
                else cout << "0" << endl;
            }
    
    return 0;
}
