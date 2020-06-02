#include<iostream>
#include<unordered_set>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    while(k--)
    {
        if(n%10>0)
        {
            n -= 1;
        }
        else
        {
            n = n/10;
        }
    }
    cout << n;
}