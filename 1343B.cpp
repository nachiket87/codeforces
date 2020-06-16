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
    vector<int> a;
    for(int i=0; i<t;++i)
    {
        int n, first_sum=0, second_sum=0;
        cin >> n;
        if(n%2 == 0  && n/2 % 2 == 0)
        {
            cout << "YES" << endl;
            for(int j=1; j<=n/2; j++)
            {
                first_sum += j*2;
                cout << j * 2 << " ";
            }
            for(int z=1; z<n-2; z+=2)
            {
                cout << z << " ";
                second_sum += z;
            }
            cout << first_sum - second_sum << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

    }

}