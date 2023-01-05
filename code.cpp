#include<bits/stdc++.h>
using namespace std ;
#define ll long long int
int main()
{
   int  n ;
   cin >> n ;
   int mx = 0;
   long long ans = 0;
   for (int i = 0; i < n; ++i)
   {
      int x ;
      cin >> x ;
      cout << "cur ele " << x << endl;
      mx = max(x, mx);
      cout << "Max ele : " << mx << endl;
      ans += (mx - x);
      cout << "Ans after:" << mx << "-" << x << " : " << ans << endl;
   }


   cout << "Ans is : " << ans << endl;

   return 0 ;
}