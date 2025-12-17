#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {23, 13, 4, 1, 5};
    // int arr[70] = {34, -12, 89, 45, 0, 67, -90, 23, 56, 12,99, -45, 18, 76, 3, -1, 54, 38, 91, 6,-33, 47, 82, 14, 5, 63, -70, 28, 39, 10,77, -8, 21, 60, 4, 88, -19, 31, 52, 7,95, -100, 26, 49, 11, 68, 2, -55, 80, 9,150, 200, -300, 400, 500, -600, 700, 800, 900, -1000,42, 73, -64, 85, 16, 27, 58, -91, 66, 19};

    int a = INT_MAX;

    int b = INT_MIN;
    int min;
    int max;

    for (int i = 0; i < 5; i++)
    {
        int num = arr[i];

        if (num < a)
        {
            a = arr[i];
            min = num;
        }
        if (num > b)
        {
            b = arr[i];
            max = num;
        }
    }

    cout << "minimum num is : " << min << endl;
    cout << "maximum num is : " << max << endl;
}