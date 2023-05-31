#include<stdio.h>
int Binarysrch(int n,int s,int e,int m,int len,int a[]);
int main()
{
	int a[]={1,2,3,4,5,6,7,8,9};
	int len=sizeof(a)/sizeof(int);
	int n,s,e,m,r;
	scanf("%d",&n);
	r=Binarysrch(n,s,e,m,len,a);
	printf("Element index is :%d\n",r);

}
  int Binarysrch( int n,int s,int e,int m,int len,int a[])
{
	s=0;
	e=len-1;
	while(s<=e)
	{
		m=(s+e)/2;
		if(a[m]==n)
		  return m;
		   
		if(a[m]>n)
		 e=m-1;
		else
		 s=m+1;
	}
}
