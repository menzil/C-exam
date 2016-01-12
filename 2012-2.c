#include "stdio.h"
/*
*编写函数，对给定的有序整形数组进行整理，是的所有证书只保留一次出现。
*例如：原数组为 -2、-1、-1、0、0、1、4、4、4，则处理后的结构为：-2、-1、0、1、4。
*/
int main(int argc, char const *argv[])
{
	int a[]={-2,-1,-1,0,0,1,4,4,4};
	int myarray(int a[],int n);//函数声明
	
	int x =  myarray(a,9);

	
	printf("\n %d \n",x );
	
	return 0;
}

int myarray(int a[],int n){
   	int i,j;
   	for( i = 0; i < n-1; i++)
   	{
   		if(a[i]==a[i+1])
   		{
   			for(j=i+1;j<n-1;j++){
   				a[j]=a[j+1];
   			}

   			i--;
   			n--;
   		}

   	}
   	for(i=0;i<n;i++)
   	{
   		printf("%d,",a[i] );
   	}
   	return n;  
}
