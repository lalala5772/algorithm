#include <bits/stdc++.h>

using namespace std;

int main()
{
    int e, e1=0, s, s1=0, m, m1=0, year=0;

    scanf(" %d %d %d", &e, &s, &m);
    while(1)
    {
        year++;
        if(e1 == 15)
            e1 = 1;
        else
            e1++;
        if(s1 == 28)
            s1 = 1;
        else
            s1++;

        if(m1 == 19)
            m1 = 1;
        else
            m1++;
        if(e1==e && s1==s && m1==m)
            break;
    }
    printf("%d", year);
    
    return 0;
}
