//LINEAR SEARCH
#include<stdio.h>
void linear_search(int [],int ,int );  //FUNCTION DECLARATION

// MAIN FUNCTION
int main()
{
    int n,num;
    printf("Enter the number of elements in the array\n");
    scanf("%d",&n);
    int A[n];
    printf("Enter the  elements in the array\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the element to be searched\n");
    scanf("%d",&num);
    linear_search(A,n,num); //FUNTION CALL
    return 0;
}

// FUNCTION FOR LINEAR SEARCH
void linear_search(int A[],int n,int num) //FUNCTION DEFINITION
{
    int flag=0;
    for(int i=0;i<n;i++)
    {
        if(A[i]==num)
        {
            flag++;
            printf("Element found at index %d:\n",i);
        }
    }
    if(flag==0)
    {
        printf("Element not found\n");
    }
}