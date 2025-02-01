#include <iostream>
using namespace std;

int main()
{
    int i,j,min;
    int arr[] = {10, 1, 70, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(i=0;i < n-1;i++)
    {
        min = i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])
            {
                min = j;
            }
        }
        arr[i] = arr[i] ^ arr[min];
        arr[min] = arr[i] ^ arr[min];
        arr[i] = arr[i] ^ arr[min];
    }
    
    for(i=0;i < n;i++)
    {
        cout<< arr[i]<<"\n";
    }

    return 0;
}
