// Binary Search
int binary_search(int arr[], int n, int key)
{
    int left = 0;
    int right = n-1;
    int mid;

    while(left <= right)
    {
        int mid = (left+right)/2;

        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid] > key)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}