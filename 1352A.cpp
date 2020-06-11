#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<array>
#include<unordered_set>
#include<string>
#include<cmath>

using namespace std;


int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, count=0; 
        vector<int> answer;
        cin >> n;
        while(n>10)
        {
            string s = to_string(n);
            int size1 = s.length();
            int b=s[0] - '0';
            int divisor = b*(pow(10, (size1-1)));
            if(n>10)
            {
                n = n % divisor;
                answer.push_back(divisor);
                count++;
            }
            else
            {
                divisor = divisor / 10;
            }
            
        }
        if(n>0 && n<=10)
        {
            count++;
            answer.push_back(n);
        }
        cout << count << endl;
        for(vector<int>::iterator i=answer.begin(); i!=answer.end();++i)
        {
            cout << *i<<" ";
        }
        cout << endl;



    }


}