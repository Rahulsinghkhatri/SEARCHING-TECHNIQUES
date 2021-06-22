//BINARY SEARCH
#include<stdio.h>
void binary_search(int [],int ,int );  //FUNCTION DECLARATION

// MAIN FUNCTION
int main()
{
    int n,num;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    int A[n];
    printf("Enter the  elements in the array in sorted way i.e in ascending order\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the element to be searched\n");
    scanf("%d",&num);
    binary_search(A,num,n); //FUNTION CALL
    return 0;
}

void binary_search(int A[],int num,int n)
{
    int mid=0,l=0,r=n-1,flag=0;
    for(int i=0;i<n;i++)
    {
        mid=(l+r)/2;
        if(num==A[i])
        {
            printf("Number is found at index %d:\n",i);
            flag++;
        }
        else if(num>A[i])
        {
            l=mid+1;
        }
        else if(num<A[i])
        {
            r=mid-1;
        }
    }
    if(flag==0)
        printf("Element not found\n");
}