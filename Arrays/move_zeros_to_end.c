#include <stdio.h>

int main()
{
    int arr[] = {4,0,2,8,2,0,9},i,j=0;
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d\n",n);
    
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            if(i!=j)
            {
                arr[i] = arr[i] ^ arr[j];
                arr[j] = arr[i] ^ arr[j];
                arr[i] = arr[i] ^ arr[j];
            }
            j++;
        }
    }
    
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);

    return 0;
}
