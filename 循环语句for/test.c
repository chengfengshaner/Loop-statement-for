//循环语句for
//语法：
//		初始化   判断    调整
//for（表达式1；表达式2；表达式3）
//		循环语句；

#include <stdio.h>

int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d ", i);
	}
	return 0;
}

int main()
{
	int i = 0;

	for (i = 1; i <= 10; i++)
	{
		/*if (5 == i)
			break;*/   //结果为1 - 4

		if (5 == i)
			continue;  //结果为除去5的1 - 10，与循环语句while相比，不会出现死循环

		printf("%d ", i);
	}

	return 0;
}

//for语句的循坏控制变量
//不可在for循环内修改循环变量，防止for循环失去控制。
//建议for语句的循环控制变量的取值采用“前闭后开区间”写法。

int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d ", i);
		i = 5;		//此处会导致代码出现死循环 - 无限打印6 - 可以将i++移动到此句后来确保正常运行
					//但不能两处都含有i++ - 得不出想要的结果 - for的嵌套若i使用重复也会发生这种现象
	}
	return 0;
}

int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)//左闭右开
	{
		printf("%d ", arr[1]);
	}
	return 0;
}