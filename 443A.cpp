#include<iostream>
#include<algorithm>
#include<array>
#include<unordered_set>
#include<string>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    unordered_set<char> b;
    for(char c : str)
    {
       if(isalpha(c))
       {
            b.insert(c);
       }
    }
    cout << b.size();
}
