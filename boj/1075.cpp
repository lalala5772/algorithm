#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, a=0, b=0, c=0, d=0;
    int f;
    scanf("%lld", &n);
    scanf("%d", &f);
    a= n - n%100;
    b= a/f +1;
    c= b*f;

    

    if(a%f==0)
    {
        printf("00");
    }
    else if(c%100<10)
        printf("0%d", c%100);
    else
    {
        if(c%100>f)
        {
            d = (c%100)%f;
            if(d<10)
            {
                printf("0%d", d);
            }
            else
                printf("%d", d);
        }
        else
            printf("%d", c%100);
    }
    
    return 0;
}
