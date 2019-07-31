#include<stdio.h>
#include<conio.h>
void main()
{

    int n,m,i,j,a[3],b[3];
    printf("enter the size of first array element");
    scanf("%d",&n);
    printf("enter the size of second array element");
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {

        printf("a[%d]",i);
        scanf("%d",&a[i]);
    }
    for(j=0;j<m;j++)
    {
        printf("b[%d]",j);
        scanf("%d",&b[j]);
    }
     for(i=0;i<n;i++)
     {
       for(j=0;j<m;j++)
       {
       printf("(%d %d)",a[i],b[j]);
       printf(" , ");

       }
       //printf("}");
       getch();
     }


}
