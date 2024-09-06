#include<stdio.h>
int main()
{
	int n,i,j,temp=0;
	long long a[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",a[i]);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j]){
			temp=a[i];
			a[i]=a[j];
		}
	}
}
 printf("%d",a[0]);
}
