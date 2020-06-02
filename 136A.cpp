#include<iostream>
#include<cctype>
#include<unordered_set>
#include<vector>
#include<cmath>
#include<algorithm>
#include<string>
#include<map>

using namespace std;

int main()
{
 int n;
 cin >> n;
 map<int, int> placement;
 int answer[n];

 for(int i=0; i<n;++i)
 {
     int c;
     cin >> c;
     placement[c] = i+1; //keys will be number and position will be values
 }
 for(map<int, int>::iterator i=placement.begin(); i!=placement.end(); ++i)
 {
     cout << i->second << " ";
 }
 
}