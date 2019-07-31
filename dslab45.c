#include<stdio.h>
#include<conio.h>
void main()
{
    int a[30],i,n,s;
    printf("enter size of array:");
    scanf("%d",&n);
    printf("enter the element of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number of search");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        printf("%d is present at location %d",s,i+1);
    }
    for(i=0;i<n;i++)
    {
        if(i==n)
    printf("%d is not present in array",s);
    }
    getch();
}

 
  
