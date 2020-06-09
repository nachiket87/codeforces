#include<iostream>
#include<algorithm>
#include<iterator>
#include<array>
#include<unordered_set>
#include<string>
#include<cmath>

using namespace std;

int main()
{
   int length;
   cin >> length; 
   char inp;
   unordered_set<char> a = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
   
   if(length < 23)
   {
       cout << "NO";
   }
   else
   {
    for(int i=0; i<length;++i)
    {
        cin >> inp;
        inp = tolower(inp);
        if(a.find(inp)!=a.end())
        {
            a.erase(tolower(inp));
        }
    }
    if(a.size()==0)
    {
        cout << "YES";
    }
    else
    {
       cout << "NO";
    }
   }
   
}
