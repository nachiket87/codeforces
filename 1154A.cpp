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
    int a[4];
    int x, y, z;
    for(int i=0; i<4; i++)
    {
        cin >> a[i];
    }
    sort(a, a+4);
    x = a[3] - a[0];
    y = a[3] - a[1];
    z = a[3] - a[2];
    cout <<x<<" "<<y<< " "<<z;


}