#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>

using namespace std;

int conver(char a)
{
    return a - 48;
}

int main()
{
   string a;
   cin >> a;
   a[0] = toupper(a[0]);
   cout << a;

}