#include<iostream>
#include<cctype>
#include<unordered_set>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>

using namespace std;


int main()
{
    int n, a, b, count=0;
    cin >> n;
    while(n--)
    {
        cin >> a >> b; 
        if(b-a>=2)
        {
            count++;
        }
    }
    cout << count;
}