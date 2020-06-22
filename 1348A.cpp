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
        int a, sum1=0, sum2=0;
        cin >> a;
        for(int i=1; i<=a/2;i++)
        {
            sum1 += pow(2, i);
        }
        cout << sum1 << endl;
    }
}