#include<iostream>
#include<algorithm>
#include<array>
#include<unordered_map>
#include<string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    unordered_map<string, int> toys;
    toys["Tetrahedron"] = 4;
    toys["Cube"] = 6;
    toys["Octahedron"] = 8;
    toys["Dodecahedron"] = 12;
    toys["Icosahedron"] = 20;
    int answer = 0;
    while(n--)
    {
        string a;
        cin >> a;
        answer += toys[a];
    }
    cout << answer << endl;




}
