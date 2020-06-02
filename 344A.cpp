#include<iostream>

using namespace std;

int main()
{
  int t;
  cin >> t;
  int prev=0;
  int groups = 0;
  while(t--)
  {
    int a;
    cin >> a;
    if(a!=prev)
    {
      groups++;
    }
    prev = a;
  }
  cout << groups;

}