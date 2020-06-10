#include<iostream>
#include<algorithm>
#include<iterator>
#include<array>
#include<unordered_set>
#include<string>
#include<cmath>

using namespace std;

bool is_composite(int a)
{
    if(a%2==0 && a>2)
    {
        return 1;
    }
    else
    {
        for(int i=3; i<a; i++)
        {
            if(a%i==0 && a>3)
            {
                return 1;
            }
        }
    }
    return 0;
}

int main()
{
    int n, x=0, y=0;
    cin >> n;
    for(int i=3; i<n; i++)
    {
        if(is_composite(i))
        {
            if(is_composite(n-i))
            {
                x = i;
                y = n - i;
                break;
            }
        }
    }
    cout << x << " " << y << endl;


}