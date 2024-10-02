int main()
{
    int arr[5] = {1,2,3,4,5};
    int target, i,j, sum;
    scanf("%d", &target);
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<5;j++)
        {
            sum = arr[i]+arr[j];
            if(sum == target)
            {
                printf("%d %d ", i,j);
            }
        }
    }

    return 0;
}
