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
   string answer = "Easy";
   cin >> n;
   while(n--) 
   {
       int a;
       cin >> a;
       if(a==1)
       {
           answer = "Hard";
           break;
       }
   }
   cout << answer << endl;
}