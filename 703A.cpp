#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int mishka_score=0, chris_score=0;
    while(n--)
    {
        int a, b;
        cin >> a >> b;
        if(a!=b)
        {
           if(a > b) 
           {
               mishka_score++;
           }
           else
           {
               chris_score++;
           }
        }
    }
    if(chris_score == mishka_score)
    {
        cout << "Friendship is magic!^^" << endl;
    }
    else if(chris_score > mishka_score)
    {
        cout << "Chris" << endl;
    }
    else if(mishka_score > chris_score)
    {
        cout << "Mishka" << endl;
    }
}