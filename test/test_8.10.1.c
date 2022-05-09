#include<stdio.h>
int main()
{
	int a[]={2,3,56,7,4,3,5,6,6,7,8,2};
	int i=0;
	int len =sizeof(a)/sizeof(a[0]);
	
	for(i=0;i<len;i++)
	{
		printf("Input NO.%d\n",i+1);
		scanf("%d",&a[i]);
	}
	
	return 0;
 } 
