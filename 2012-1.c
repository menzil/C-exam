#include "stdio.h"
/*
编写函数，输出任意正整数n的二进制表示中1对应的所在位数（最右边的尾数为0）。例如：正整数13，其二进制表示为1101，则输出0 2 3（表示右起第0位、第2位、第3位为1）。
*/


int main(int argc, char const *argv[])
{
	void bynary(int a);
	
	bynary(50);
	return 0;
}

void bynary(int a){
	int n = a;
	int k=0;
	while(n!=0) {
		if(n%2==1){// 1 所在的位置
			 printf("%d ",k ); // 格式
		}
		n/=2;// n=n/2
		n--;
		k++;
	}
}


