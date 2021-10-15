void mergeTwoSortedArrays(int input[], int left, int mid, int right) {
    int arr1Size = mid-left+1;
    int arr2Size = right-mid;

    // temp arrays
    int * leftArray = new int[arr1Size];
    int * rightArray = new int[arr2Size];

    // copy data
    for(int i=0; i<arr1Size; i++) {
        leftArray[i] = input[left+i];
    }
    for(int i=0; i<arr2Size; i++) {
        rightArray[i] = input[mid+i+1];
    }

    int i=0, j=0, k=left;
    while(i<arr1Size and j<arr2Size) {
        if(leftArray[i]<rightArray[j]) {
            input[k] = leftArray[i];
            k++; i++;
        }
        else {
            input[k] = rightArray[j];
            j++; k++;
        }
    }

    while(i<arr1Size) {
        input[k] = leftArray[i];
        i++; k++;
    }

    while(j<arr2Size) {
        input[k] = rightArray[j];
        j++; k++;
    }
    return;
}

void merge_sort(int input[], int s, int e) {
    if(s>=e) {
        return;
    }
    int mid = (s+e)/2;

    merge_sort(input, s, mid);
    merge_sort(input, mid+1, e);
    mergeTwoSortedArrays(input, s, mid, e);
    return;
}

void mergeSort(int input[], int size){
	// Write your code here
    if(size==0 or size==1) {
        return;
    }
    merge_sort(input, 0, size-1);
}