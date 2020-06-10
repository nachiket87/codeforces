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
    int n, m;
    cin >> n >> m;
    char a[n][m];
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<m; ++j)
        {
            if(i%2!=0)
            {
                a[i][j] = '.';
            }
            else
            {
                a[i][j] = '#';
            }
        }
    }
    int j=m-1;
    for(int i=1; i<n;i=i+2)
    {
        
        a[i][j] = '#';
        if(j==m-1)
        {
            j=0;
        }
        else
        {
            j=m-1;
        }
    }
    for(int i=0; i<n; ++i)
    {
        for(int j=0; j<m; ++j)
        {
           cout << a[i][j];
        }
        cout << endl;
    }





}
