#include <iostream>
using namespace std;

int main()
{
    int num;
    int min, max;
    cout << "Enter the number of elements: ";
    cin >> num;
    int arr[num];
    cout << "Enter the elements: ";

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    min = arr[0];
    max = arr[0];
    for (int i = 1; i < num; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;
    return 0;
}
