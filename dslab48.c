/* Recursive binary search algorithm */
#include<stdio.h>
#include<conio.h>
int binarysearch (int a[],int i,int j,int x)

{
    int m;
    m=i+j/2;
    if(x==a[m])
    return(m);
    else if(x<a[m]&&i<m)
    return binarysearch(a,i,m-1,x);
    else if(x>a[m]&&j>m)
    return binarysearch(a,m+1,j,x);
    else
    return 0;
    
}
void main()
{
    int a[4],i=0,j,x,c,d;
    printf("enter the stopping point:");
    scanf("%d",&j);
    printf("enter the elements:");
    for(c=0;c<j;c++)
    {
        scanf("%d",&a[c]);
    }
    printf("enter the element for search:");
    scanf("%d",&x);
    d=binarysearch(a,i, j, x);
   printf("the search number is found at location:%d",d);
   getch();
}
    
   
  
