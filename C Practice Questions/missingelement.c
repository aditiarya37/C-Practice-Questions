int missingNumber(int A[], int N)
{
    int sum = 0,sumN = 0;
    for(int i=0;i<N-1;i++){
        sum += A[i];
    }//8
    sumN = (N*(N+1))/2;
    int num = sumN - sum;
    return num;
}