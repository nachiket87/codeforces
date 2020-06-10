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
    long long n;
    cin >> n;
    int count=0;
    int notes[5] = {100, 20, 10, 5, 1};
    int i=0;
    while(n!=0)
    {
        if(i==4)
        {
            n = n - notes[i];
            count++;
        }
        else
        {
            if(n>=notes[i])
            {
                n = n - notes[i];
                count++;
            }
            else
            {
                i++;
            }
        }
    }
    cout << count;

}