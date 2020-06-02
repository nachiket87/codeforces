#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, i=0; 
    double answer = 0.00000000;
    cin >> n;
    int b = n;
    int arr[n];
    while(n--)
    {
       int a;
       cin >> a;
       answer += double(a)/double(b);
    }

cout << answer << endl;

}