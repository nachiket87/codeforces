#include<iostream>
#include<cctype>
#include<unordered_set>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>

using namespace std;

bool check_i(string b)
{
    unordered_set<int> a;
    for(char c : b)
    {
        a.insert(c);
    }
    if(a.size()<4)
    {
        return 0;
    }
    return 1;
}



int main()
{
    int n;
    cin >> n;
    n++;
    int x = 1;
    while(x==1)
    {
        string b = to_string(n);
        if(check_i(b))
        {
            cout << n;
            break;
        }
        else
        {
            n++;
        }
        
    }
}