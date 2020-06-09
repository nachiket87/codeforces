#include<iostream>
#include<algorithm>
#include<iterator>
#include<array>
#include<unordered_set>
#include<string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    array<int, 1000> l;
    array<int, 1000> s;
    long long a,b;
    array<int, 1000> answer;
    int count=0;
    for(int i=0; i<n; i++)
    {
        cin >> a >> b;
        long long larger = max(a,b);
        long long smaller = min(a,b);
        a = larger;
        b = smaller;
        if(a>b && a%b==0)
        {
            for(int j=8; j>=2; j=j/2)
            {
                if(a/b > j)
                {
                    count++;
                    a = a/j;
                    j = j*2;
                }
                if(a%b ==0 && a/b<j)
                {
                    count++;
                    break;
                }
            }
            answer[i] = count;
            count = 0;

        }
        else if(a%b!=0)
        {
             answer[i] = -1;
        }
        else if(a==b)
        {
            answer[i] = 0;
        }
        
    }

    for(int i=0; i<n; i++)
    {
        cout << answer[i] << endl;
    }
}
