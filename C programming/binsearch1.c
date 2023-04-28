#include <stdio.h>
int binsearch(int arr[], int target, int n)
{
    int low = 0, high = n - 1;
    if (target == arr[low])
    {
        return low;
    }
    else if (target == arr[high])
    {
        return high;
    }
    else
    {
        while (low <= high)
        {
            int mid = (low + high) / 2;
            if (target == arr[mid])
            {
                return mid;
            }
            else if (arr[mid] > target)
            {
                high = mid - 1;
                continue;
            }
            else
            {
                low = mid + 1;
                continue;
            }
        }
        return -1;
    }
}
int main()
{
    int arr[] = {1, 22, 45, 54, 65, 90};
    int length = sizeof(arr) / sizeof(int);
    printf("%d", binsearch(arr, 1, length));
}