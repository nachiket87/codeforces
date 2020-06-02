#include<iostream>
#include<unordered_set>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
   int limak, bob; 
   cin >> limak >> bob;
   int count = 0;
   while(limak <= bob)
   {
       limak = limak * 3;
       bob = bob * 2;
       count += 1;
   }
   cout << count;
}