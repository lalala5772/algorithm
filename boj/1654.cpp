#include <bits/stdc++.h>

using namespace std;

long long arr[10001];
int main()
{
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cout.tie(0);
   int k, n;
   cin >> k >> n;
   for(int i=0;i<k;i++) cin >> arr[i];
   sort(arr, arr+k);
   long long start = 1, end = arr[k-1], result = 0;
   while(start <= end)
   {
      long long sum=0,  mid = (start + end)/2;
      for(int i=0;i<k;i++) sum += (arr[i]/mid);
      if(sum>=n) {
         result = mid;
         start = mid + 1;
      }
      else end = mid - 1;
   }
   cout << result;
   return 0;
}
