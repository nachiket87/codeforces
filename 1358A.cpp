#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main()
{
    int x;
    cin >> x;
    vector<int> answer;

    while(x--)
    {
        int m, n;
        cin >> m >> n;
        int area = m * n;
        int even_lights = area / 2;
        int remaining = area % 2;
        answer.push_back(even_lights + remaining);
    }
    for(vector<int>::iterator i=answer.begin(); i<answer.end(); ++i)
    {
        cout << *i << endl;
    }
 
}