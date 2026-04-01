#include <iostream>;
using namespace std;

int main ()
{
	//先生成所有三位数100~999
	//在三位数里面找水仙花数 
	int num = 100;
	
	//初始个十百位变量 
	int a = 1;
	int b = 0;
	int c = 0;
	
	do{
	
	a = num % 10;
	b = ( num / 10 ) % 10;
	c = num / 100; 
	
	if( a*a*a + b*b*b + c*c*c == num ) //如果满足条件就打印 
	{
		cout << "三位数中水仙花数有" << num << endl;
	}
	num++;
}while( num < 1000 );
	
	return 0;
} 
