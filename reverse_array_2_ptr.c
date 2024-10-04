/******************************************************************************

                 REVERSE AN ARRAY USING TWO POINTER TECHNIQUE
overall time complexity of the program is O(n)
*******************************************************************************/

#include <stdio.h>

int main()
{
    int arr[5]={1,2,3,4,5};
    int i,t, len= sizeof(arr)/sizeof(arr[0]);
    int left=0, right= len -1;
    while(left < right)
    {
        t=arr[left];
        arr[left]=arr[right];
        arr[right]=t;
        left++;
        right--;
    }
    
    for(i=0;i<len;i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
