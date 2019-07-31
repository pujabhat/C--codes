#include<stdio.h>
#include<conio.h>
int main()
{
    int count,i,j;
    printf("prime number from 1 to 100 are:");
 for(i=1;i<=100;i++)
 {
    count=0; 
     
 
 for(j=2;j<=i/2;j++)
 {
     if(i%j==0)
     count++;
 }
 if(count==0&&i!=1)
 {
     printf("%d\t",i);
     
 }
 }
 return 0;
}
