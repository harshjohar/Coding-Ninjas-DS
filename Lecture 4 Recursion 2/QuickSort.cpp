void swap(int* a, int* b) 
{ 
    int t = *a; 
    *a = *b; 
    *b = t; 
} 
  

int partition (int arr[], int low, int high) 
{ 
    int pivot = arr[high];
    int i = (low - 1); 
  
    for (int j = low; j <= high - 1; j++) 
    { 
        if (arr[j] < pivot) 
        { 
            i++;
            swap(&arr[i], &arr[j]); 
        } 
    } 
    swap(&arr[i + 1], &arr[high]); 
    return (i + 1); 
} 


// int partition(int input[], int s, int e) {
//     int pivot = input[s];
//     int smaller_elements = 0;
//     for(int i=s; i<e; i++) {
//         if(input[i]<pivot) smaller_elements++;
//     }
//     int p_index = s+smaller_elements;
//     int tmp = input[p_index];
//     input[p_index] = pivot;
//     input[s] = tmp;

//     int i=s, j=e;
//     while(i<p_index and j>p_index) {
//         if(input[i]>pivot) {
//             if(input[j]<pivot) {
//                 tmp = input[j];
//                 input[j] = input[i];
//                 input[i] = tmp;
//                 j--;
//                 i++;
//             }
//             else {
//                 j--;
//             }
//         }
//         else {
//             i++;
//         }
//     }
//     return p_index;
// }

void quick_sort(int input[], int start, int end) {
    if(start>=end) {
        return;
    }
    // cout<<1<<" ";
    int p=partition(input, start, end);
    // cout<<p<<endl;
    quick_sort(input, start, p-1);
    quick_sort(input, p+1, end);
}

void quickSort(int input[], int size) {
    if(size==0 and size==1) {
        return; 
    }
    quick_sort(input, 0, size-1);
}