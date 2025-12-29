#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int counter = 0;
    int new_arr[1000]{0};
    int arr[1000]{0};
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }

    while (true)
    {
        int size = sizeof(arr) / sizeof(arr[0]);
        int max_value = arr[0];

        for (int i = 0; i < x; i++)
        {
            if (arr[i] > max_value)
            {
                max_value = arr[i];
            }
        }
        new_arr[counter++] = max_value;

        for (int i = 1; i < size; i++)
        {
            arr[i - 1] = arr[i];
        }

        if (size<=2)
        {
            break;
        }
    }

    for (int i = 0; i < counter; i++)
    {
        cout << new_arr[i];
    }
    return 0;
}