//Insertion sort in C language
#include <stdio.h>
/*Define the swap function*/
#define SWAP(x,y){int tmp=x;x=y;y=tmp;}
void Insertion(int arr[], int n)
{
    int key,j;
    for(int i=1;i<n;i++)
    {
        key = arr[i]; 
        j = i - 1; 
  
        while (j >= 0 && arr[j] > key) { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
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
    Insertion(arr,n);
    Printarray(arr,n);
    return 0;
}