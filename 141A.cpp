#include<iostream>
#include<algorithm>
#include<iterator>
#include<array>
#include<unordered_set>
#include<string>
#include<map>
#include<cmath>
#include<vector>

using namespace std;

int main()
{
    string first_name;
    string last_name;
    string chars;
    cin >> first_name;
    cin >> last_name;
    cin >> chars;
    string answer;
    string combined_str = first_name + last_name;
    int bb[combined_str.length()];
    for(int i=0; i<combined_str.length(); i++)
    {
        bb[i] = 1;
    }
    map<char, int> a;
    for(char c : chars)
    {
        a[c]+=1;
    }
    for(int i=0; i<combined_str.length(); i++)
    {
        if(a[combined_str[i]] > 0)
        {
            bb[i]--;
            a[combined_str[i]]--;
        }
    }
    if(*max_element(bb, bb+combined_str.length())==1)
    {
        answer = "NO"; 
    }
    else
    {
        answer = "YES"; 
    }
    for(char c: chars)
    {
        if(a[c] > 0)
        {
            answer = "NO";
        }
    }
    cout << answer << endl;

}
