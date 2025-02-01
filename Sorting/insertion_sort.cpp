/* INSERTION SORT */

#include <iostream>
using namespace std;

int main()
{
    int i,j,min;
    int arr[] = {10, 1, 70, 3, 2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(i=0;i<=n-1;i++)
    {
        j=i;
        while((j>0) && (arr[j-1] > arr[j]))
        {
                arr[j] = arr[j] ^ arr[j-1];
                arr[j-1] = arr[j] ^ arr[j-1];
                arr[j] = arr[j] ^ arr[j-1];
                
                j--;
        }
        
    }
    
    for(i=0;i < n;i++)
    {
        cout<< arr[i]<<"\n";
    }

    return 0;
}
