#include<stdio.h>
 
void array(int a[],int n){
 	int i,sum=0;
	 for(i=0; i<n; i++)
	{
		sum = sum + a[i];
	}
	printf("sum of all array element = %d",sum);
	
 }

main()
{
	int n,i;
	printf("How many elements enter in array = ");
	scanf("%d",&n);
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	array(a,n);
}