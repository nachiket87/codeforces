#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int m,n,count=1;
    cin >> m >> n;
    while(m*count%10!=n)
    {
        if((m*count)%10 == 0)
        {
            break;
        }
        count++;
    }
    cout << count;

    

}