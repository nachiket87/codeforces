#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
 int x;
 cin >> x;
 while(x!=0)
 {
   x--;
   int l, b, temp;
   cin >> l >> b;
   temp = min(l, b);
   l = max(l, b);
   b = temp; 
   
   if(2*b > l)
   {
     cout << pow(b*2,2) << endl;
   }
   else
   {
     cout << pow(l,2)<<endl;
   }
   
 }
}