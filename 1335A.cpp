#include<iostream>
#include<cmath>

using namespace std;

int main()
{
   int t;
   cin >> t;
   while(t--) 
   {
       int count=0;
       int n;
       cin >> n;
       if(n%2 ==0)
       {
           for(int i=(n/2)+1; i<n; ++i) 
           {
               count += 1;
           }
       }
       else
       {
           int i = ceil(1+(1.0*(n/2)));
           while(i<n)
           {
             count += 1;
             i++;
           }
       }
       cout << count << endl;
   }
}