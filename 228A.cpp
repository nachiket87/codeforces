#include<iostream>
#include<algorithm>
#include<array>
#include<unordered_set>

using namespace std;

int main()
{
   unordered_set<int> shoes; 
   int shoes_required = 0;
   for(int i=0; i<4; i++)
   {
       int a;
       cin >> a;
       shoes.insert(a);
   }
   cout << 4 - shoes.size() << endl;


   


}
