#include <iostream>
#include <numeric>
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
        int n, k;
        cin >> n >> k;
        int a[n];
        int b[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin >> b[i];
        }
        sort(a, a+n);
        sort(b, b+n, greater<int>());
        for(int i=0; i<k;++i)
        {
            if(a[i]<b[i])
            {
                a[i] = b[i];
            }
        }
        int sum=0;
        for(int i=0; i<n; i++)
        {
        //    cout << a[i] << endl;
            sum += a[i];
        }
        cout << sum << endl;

    }
    

}