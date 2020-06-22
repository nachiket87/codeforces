#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int arr[n];
    int teams = 0, members = 0;
    for(int i=0; i<n; ++i)
    {
        cin >> arr[i];
        if((5 - arr[i])>=k) 
        {
            members += 1;
        }
        if(members == 3)
        {
            teams += 1;
            members = 0;
        }
    }
    cout << teams << endl;


}