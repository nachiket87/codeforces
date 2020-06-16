#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m, n, sum_array=0;
        cin >> m >> n;
        int arr[m];
        int largest_array_reversing=m, largest_array=m;
        int answer, temp_sum_array;

        for(int i=0; i<m; i++)
        {
            cin >> arr[i];
            sum_array += arr[i];
        }
        temp_sum_array = sum_array;
        for(int j=m-1; j>=0; j--)
        {
            if(sum_array % n == 0)
            {
                sum_array -= arr[j];
                largest_array_reversing--;
            }
        }
        sum_array = temp_sum_array;
        for(int i=0; i<m; i++)
        {
            if(sum_array % n == 0)
            {
                sum_array -= arr[i];
                largest_array=largest_array - 1;
            }
        }
        answer = max(largest_array, largest_array_reversing);
        if(answer==0)
        {
            answer = -1;
        }
        cout << answer << endl;
    }
}