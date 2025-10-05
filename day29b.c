//Q58: Find the maximum and minimum element in an array.
int main()
{
    int A[] = {11,20,22,35,34,-2,1};
    int max, min, i, n=6;
    max = min = A[0];
    // assume A[0] as max and min element
    for(i=1; i<n; i++)
{
    if(A[i] > max)
        max = A[i];
        if(A[i] < min)
            min = A[i];
}
printf("Maximum element is %d\n", max);
printf("Minimum element is %d\n", min);
}

