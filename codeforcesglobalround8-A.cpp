#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int a,b,n, count=1;
        cin >> a >> b >> n;
        while(a+b<= n)
        {
            count ++;
            if(a>=b)
            {
                b = a+b;
            }
            else
            {
                a = b+a;
            }
        }
        cout << count << endl;
    }

}