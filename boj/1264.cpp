#include <bits/stdc++.h>

using namespace std;
string a;
char arr[]={'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
int main()
{
    int cnt;
    while(getline(cin, a))
    {
        cnt=0;
        if(a=="#") break;
        for(int i=0;i<a.size();i++)
            for(int j=0;j<10;j++)
                if(a[i]==arr[j]) cnt++;
        cout << cnt << endl;
    }
    return 0;
}
