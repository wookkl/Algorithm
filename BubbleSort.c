//Bubble sort in C language
#include <stdio.h>
/*Define the swap function*/
#define SWAP(x,y){int tmp=x;x=y;y=tmp;}
void Bubble(int arr[], int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0; j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                SWAP(arr[j],arr[j+1]);
        }
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
    Bubble(arr,n);
    Printarray(arr,n);
    return 0;
}