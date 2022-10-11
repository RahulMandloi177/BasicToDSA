#include <iostream>
using namespace std;

int main()
{
    int i, size;
    cout << "Enter the size of array";
    cin >> size;

    int arr[size+ 1];
    arr[size] = -1;

    cout << "Enter the elemets of array";
    for (i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    if (size == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    int ans = 0;
    int mx = -1;

    for (i = 0; i < size; i++)
    {
        if (arr[i] > mx && arr[i] > arr[i + 1])
        {
            ans++;
        }
        mx = max(mx, arr[i]);
    }
    cout << ans << endl;
}
