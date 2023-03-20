#include <bits/stdc++.h>

using namespace std;
bool flag;
int main()
{
    int n, m1=1, m2=1;
    cin >> n;
    for(int i=1;i<n;i++)
    {
        if(n==1) break;
        if(m1==1&&!flag) {
            m2++;
            flag = true;
        }
        else if(m2==1&&!flag)
        {
            m1--;
            m2++;
            flag=false;
        }
        else if(m1==1&&flag) {
            m1++;
            m2--;
        }
        else if(m2==1&&flag)
        {
            m1++;
            flag = false;
        }
        else if(m1==m2)
        {
            m1--;
            m2++;
        }
        else if(flag) {
            m1++;
            m2--;
        }
        else {
            m1--;
            m2++;
        }
    }
    cout << m1 << '/' << m2 << endl;
    
    return 0;
}
