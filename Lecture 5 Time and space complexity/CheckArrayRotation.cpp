int arrayRotateCheck(int *input, int size)
{
    //Write your code here
    int min = 0;
    for(int i=1; i<size; i++) {
        if(input[min]>input[i]) {
            min=i;
        }
    }
    return min;
}