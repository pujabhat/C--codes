/*Recursive algorithm for computing gcd(a,b)
Procedure:
gcd(a,b:non negative integer with a<b)
if(a==o)
gcd(a,b)= b;
else
gcd(a,b)=gcd(b mod a,a);
*/

#include<stdio.h>
#include<conio.h>
int gcd(int a,int b)
{
    if(a==0)
    return  b;
    else 
    return (gcd(b%a,a));
}
int main()
{
    int a,b;
    printf("enter two number:");
    scanf("%d",&a);
    scanf("%d",&b);
   
   printf("gcd of given input is:%d",gcd(a,b));
    
    return 0;
}

 
  
