//Quick sort in C language
#include <stdio.h>
/*Define the swap function*/
#define SWAP(x,y){int tmp=x;x=y;y=tmp;}

int partition(int arr[],int l,int r)
{
    int pivot = arr[r];
    int i=l-1;
    for(int j=l; j<r; j++)
    {
        if(arr[j] < pivot)
        {
            i++;
            SWAP(arr[i],arr[j]);
        }
    }
    SWAP(arr[i+1],arr[r]);
    return (i+1);
}
void quick(int arr[],int l,int r)
{
    if(l<r)
    {
        int pivot = partition(arr,l,r);
        quick(arr,l,pivot-1);
        quick(arr,pivot+1,r);
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

    quick(arr,0,n-1);
    Printarray(arr,n);
    return 0;
}