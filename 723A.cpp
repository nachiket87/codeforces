#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int a[3];
    for(int i=0; i<3; i++) 
    {
        cin >> a[i];
    }
    sort(a, a+3);
    cout << (a[2] - a[1]) + (a[1]-a[0]);
}