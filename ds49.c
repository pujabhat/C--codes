/*LAB-4 (i) Check for prime number.
*/
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,c=0,i;
	printf("Enter a number= ");
	scanf("%d",&n);
	if(n==1)
	printf("1 is neither prime nor composite.");
	for(i=1;i<=n;i++)
	{
	if(n%i==0)
	c++;
	}
	if(c==2)
	printf("%d is prime.",n);
	else
	printf("%d is composite",n);
	
	return 0;
}
