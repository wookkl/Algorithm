//Selection sort in C language
#include <stdio.h>
/* define the swap function*/
#define SWAP(x,y){int tmp=x;x=y;y=tmp;}

void Selection(int arr[], int n)
{
    for(int i=0; i<n-1;i++)
    {
        int min=i;
        // Find the minimum element in unsorted array 
        for(int j=i+1;j<n;j++)
        { 
            if(arr[min]>arr[j])
                min=j;
        }
        // Swap the found minimum element with the first element 
        SWAP(arr[min],arr[i]);
    }
}
void Printarray(int arr[],int size)
{
    for(int i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
int main(void)
{
    int arr[]={64, 34, 25, 12, 22, 11, 90};
    int n=sizeof(arr)/sizeof(int);
    Selection(arr,n);
    Printarray(arr,n);
    return 0;
}