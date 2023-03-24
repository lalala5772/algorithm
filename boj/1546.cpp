#include <bits/stdc++.h>

using namespace std;
int score[1001];
float fake[1001];
int main()
{
    int n, m=0;
    float sum=0;
    scanf("%d", &n);
    for(int i=0;i<n;i++) scanf(" %d", &score[i]);
    for(int i=0;i<n;i++)
        if(score[i]>m) m = score[i];
    for(int i=0;i<n;i++) {
        fake[i] = (1.0)*score[i]/m*100;
        sum += fake[i];
    }
    printf("%.2f\n", sum/n);
    
    return 0;
}
