#include <bits/stdc++.h>

using namespace std;
char s[14];
int main()
{
    scanf(" %s", s);
    sort(s, s+strlen(s));
    reverse(s, s+strlen(s));
    for(int i=0;i<strlen(s);i++)
    {
        printf("%c", s[i]);
    }


    return 0;
}
