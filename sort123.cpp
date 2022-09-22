#include <iostream>
using namespace std;
int main()
{
    int arr[100], j = 0, n;
    cout << "enter size" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    for (int i = 0; i < n; i++)
        {
            if (arr[i] == 1)
            {
                swap(arr[i], arr[j]);
                j++;
            }
        }
        for (int i = 0; i < n; i++)
    {
         cout<< arr[i];
    }
    }