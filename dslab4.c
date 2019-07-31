#include<stdio.h>
#include<conio.h>
int fibb(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    return(fibb(n-1)+fibb(n-2));
    
}
int main()
{
    int n,c,x;
    printf("enter a number");
    scanf("%d",&n);
    for(c=0;c<n;c++)
    {
        x=fibb(c);
        
    printf("fibb=%d",x);
    }
    return 0;
}
