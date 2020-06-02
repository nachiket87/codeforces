#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    int max = 0, max_pos=0;
    int min = 0, min_pos=0;
    for(int i=0; i<n; i++)
    {
       cin >> arr[i];
    }
    max = arr[0];
    min = arr[0];

    for(int i=0; i<n; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
            max_pos = i;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(arr[i]<=min)
        {
            min = arr[i];
            min_pos = i;
        }
    }
    int max_steps = max_pos;
    if(max_pos > min_pos)
    {
       min_pos++; 
    }
    int min_steps = n - min_pos-1;
    cout << min_steps + max_steps;

}