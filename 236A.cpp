#include<iostream>
#include<unordered_set>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>

using namespace std;


int main()
{
   string a;
   unordered_set <char> b; 
   cin >> a;
   for(char c : a)
   {
       b.insert(c);
   }
   if(b.size()%2 ==0)
   {
       cout << "CHAT WITH HER!";
   }
   else
   {
       cout << "IGNORE HIM!";
   }
   
}