int lastIndex(int input[], int size, int x)
{
    if (size == 0)
    {
        return -1;
    }
    int ans = lastIndex(input + 1, size - 1, x);
    if (input[0] == x and ans==-1)
    {
        return 0;
    }
    return (ans == -1) ? ans : ans + 1;
}