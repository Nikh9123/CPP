#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}
int LastOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }

        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int arr[8] = {1, 2, 5, 5, 5, 6, 6, 6};

    int key;
    cin >> key;

    int f = firstOcc(arr, 8, key);

    int l = LastOcc(arr, 8, key);

    cout << f << " " << l << endl;
    
    int totalOccur = (l - f) + 1;
    cout << totalOccur;
}