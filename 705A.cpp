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
 int n;
 cin >> n;
 for(int i=0; i<n-1; ++i)
 {
     if(i%2==0)
     {
         cout << "I hate that ";
     }
     else
     {
         cout << "I love that" << " ";
     }
 }
 if(n%2==0)
 {
     cout << "I love it";
 }
 else
 {
     cout << "I hate it";
 }
}