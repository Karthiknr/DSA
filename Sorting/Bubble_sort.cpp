/* BUBBLE SORT*/

/* Algo is Push the max value to the last and repeat the same process till the whole data is sorted.
  MAIN POINT: Here leave the max values in last part of array(sorted MAX values) for condition checking.

  TIME COMPLEXITY: Best Case O(n), Worst case O(n2).
  SPACE COMPLEXITY: O(1)
*/

#include <iostream>
using namespace std;

int main()
{
    int i,j,min;
    int arr[] = {10, 1, 70, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(i=n-1;i>=1;i--)
    {
        for(j=0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                arr[j] = arr[j] ^ arr[j+1];
                arr[j+1] = arr[j] ^ arr[j+1];
                arr[j] = arr[j] ^ arr[j+1];
            }
        }
        
    }
    
    for(i=0;i < n;i++)
    {
        cout<< arr[i]<<"\n";
    }

    return 0;
}
