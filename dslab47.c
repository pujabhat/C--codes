#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],i,j,n,c,m,s;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the element:");
    for(c=0;c<n;c++)
    {
        scanf("%d",&a[c]);
    }
    
    
	
    printf("enter the value to find:");
    scanf("%d",&s);

    i=1;
    j=n-1;
   
    while(i<j)
    {
    m=i+j/2;
    if(s>a[m])
    i=m+1;
    else
    j=m;
    }
    if(s==a[i])
    printf("  location found at: %d",i,s);
    else
    printf("location not found %d",s);
    getch();
}
    

