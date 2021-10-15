// input - input array
// size - length of input array
// element - value to be searched
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}

int binarySearch(int input[], int size, int element) {
    // Write your code here
	return binarySearch(input, 0, size-1, element);
}
