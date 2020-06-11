#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main ()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m, n;
        cin >> m >> n;
        int answer=0;
        if(m < 1 || n < 1 )
        {
            answer = 0;
        }
        else
        {
            int sum1 = m + n;
            answer = floor(sum1 / 3);
            int smallest = min(m,n);
            if(answer > smallest)
            {
                answer = smallest;
            }
        }
       cout << answer << endl;
    }

}