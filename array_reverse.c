#include <stdio.h>

int main()
{
    int arr[5] =  {1,2,3,4,5};
    int t, i, j=0, len = sizeof(arr)/sizeof(arr[0]);
    for(i=len-1; i>(len/2);i--)
    {
        t=arr[i];
        arr[i] = arr[j];
        arr[j] = t;
        j++;
    }
    for(i=0;i<len;i++)
        printf("%d ", arr[i]);
    return 0;
}
