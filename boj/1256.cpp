#include <bits/stdc++.h>

using namespace std;
string n;
bool flag;
int main()
{
    while(cin>>n)
    {
        flag=false;
        if(n=="0") break;
        for(int i=0;i<n.size();i++)
            if(n[i]!=n[n.size()-1-i]) flag = true;
        if(flag) cout << "no" << endl;
        else cout << "yes" << endl;
    }
    
    return 0;
}
