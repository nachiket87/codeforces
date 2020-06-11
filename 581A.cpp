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

    int m,n,days=0, days2=0;
    cin >> m >> n;
    if(m==0 || n == 0)
    {
        cout << 0 << 0;
    }
    else
    {
        int more = max(m, n);
        int less = min(m, n);
        days = less;
        if((more-less)%2 == 0)
        {
            days2 = (more-less)/2;
        }
        else
        {
            days2 = ((more-less)-1)/2;
        }
        
    }
    cout << days << " " << days2;

}