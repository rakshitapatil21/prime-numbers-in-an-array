#include<stdio.h>
void read(int[],int);
void display(int[],int);
void prime(int [],int);
main()
{
    int m[100],n;
    printf("Enter the number of elements\n");
    scanf("%d",&n);
    read(m,n);
    display(m,n);
    prime(m,n);
}
void read(int m[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&m[i]);
    }
}
void display(int m[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("\n%d ",m[i]);
    }
}
void prime(int m[100],int n)
{
    int i,j,counter=0;
    printf("\nPrime numbers in the given array are: ");
    for(i=0;i<n;i++)
    {
        for(j=2;j<m[i];j++)
        {
            if(m[i]%j==0)
            {
                counter=1;
                break;
            }
            else
                counter=0;
        }
        if(counter==0)
        {
            printf("%d ",m[i]);
        }
    }
}
