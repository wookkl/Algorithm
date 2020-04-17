#include <stdio.h>
int sorted[7];
void merge(int arr[],int l,int m,int r)
{
    int i,j,k; 
    int l_n=m-l+1;
    int r_n=r-m;

    /* create temp arrays */
    int l_arr[l_n],r_arr[r_n]; 
    for(int i=0;i<l_n;i++)
        l_arr[i]=arr[i+l];
    for(int i=0;i<r_n;i++)
        r_arr[i]=arr[i+m+1];
    i=0;
    j=0;
    k=l;
    while(i<l_n && j<r_n)
    {
        if(l_arr[i] <= r_arr[j])
            arr[k++]=l_arr[i++];
        else
            arr[k++]=r_arr[j++];
    }

    /* Copy the remaining elements */
    while(i<l_n)
        arr[k++]=l_arr[i++];
    while(j<r_n)
        arr[k++]=r_arr[j++];

}
void mergesort(int arr[], int l,int r)
{
    int mid=l+(r-l)/2;
    if(l<r)
    {
        mergesort(arr,l,mid);
        mergesort(arr,mid+1,r);
        merge(arr,l,mid,r);
        
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
    mergesort(arr,0,n-1);
    Printarray(arr,n);
    return 0;
}