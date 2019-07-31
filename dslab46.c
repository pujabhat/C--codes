#include<stdio.h>
#include<conio.h>
int search(int a[],int i,int j,int x)
{
    if(i>=x)
    return 0;
    else if(a[i]==j)
    return i-1;
    else
    return(search(a,i-1,j,x));
}
int main()
{
    int i,n,a[20],x,j,s;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the element of array:");
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	printf("enter the number for search:");
	scanf("%d",&x);
    printf("%d is found at location:",search(a,i+1,j,x));
    return 0;
    
}


 
  
