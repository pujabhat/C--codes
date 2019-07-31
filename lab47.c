#include<stdio.h>
#include<conio.h>
int search(int a[],int i, int j, int x)
{
if (a[i]==x)
return (i);
else if (i==j)
return (0);
else
return search (a,i+1,j,x);
}
int main ()
{
int i=0,k,j,a[10],x,result;
printf ("enter the stopping point:");
    scanf("%d", &j);
    printf ("enter the elements:");
    for(k=0; k<j; k++)
    {
        scanf ("%d", &a[k]);
    }
    printf ("enter the number to search:");
    scanf ("%d", &x);
result= search (a,i+1,j,x);
    printf ("search location is= %d", result);
    return 0;
}
