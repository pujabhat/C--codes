#include<stdio.h>
#include<conio.h>

int power(int a,int n)
{
    if(n==0)
    return 1;
    
    
    else
    return(a*power(a,(n-1)));
    
}
int main()
{
    int a,n,x;
    printf("enter two number");
    scanf("%d",&a);
    scanf("%d",&n);
    
    
        x=power(a,n);
        
    printf("power=%d",x);
    
    return 0;
}
