#include "stdio.h"
/*
*编写一个递归函数，实现按照如下公式计算的功能。
*	f(n)=1/(2!*3!)+2/(3!*4!)+3/(4!+5!)+···+n/((n+1)!*(n+2)!);其中n为自然数。
*/

int main(int argc, char const *argv[])
{
	// int fac(int n);
	// fac(5);
	double f(int n);
	
	printf("%f\n",f(1) );
	return 0;
}

int fac(int n){
	int sum=1;
	int i;
	for(i=1;i<=n;i++){
	    sum = sum*i;
	}
	//printf("%d\n",sum );
	return n;
}

double f(int n){
	if(n==0){
		return 0;
	}
	return f(n-1)+1.0*n/(fac(n+1)*fac(n+2));
	
}
