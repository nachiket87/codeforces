#include<iostream>
#include<cctype>
#include<unordered_set>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>
#include<map>

using namespace std;

int main()
{
 int n, k;
 int count=0;
 cin >> n >> k;
 while(n--)
 {
   int person;
   cin >> person;
   if(person > k) 
   {
       count += 2;
   }
   else
   {
       count++;
   }
 }
 cout << count;
}