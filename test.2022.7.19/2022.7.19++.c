#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>		//	strcpy 的头文件

//	函数的讲解	库函数	自定义函数	函数参数   函数调用   函数的嵌套和链式访问   函数的声明和定义   函数递归

//int main()
//{
//	char arr1[20] = { 0 };
//
//	char arr2[] = "hello world!";
//
//	strcpy(arr1, arr2);		//	拷贝函数		把后面的拷贝到前面的
//
//		 目的地 , 源头
// 
//	printf("%s ", arr1);	//	字符串打印用	%s
//
//	return 0;
//}


//int main()
//{
//	char arr[] = "hello world!";
//
//	memset(arr, 'x', 5);		//把 第一个 的 前五个 设置成 X
//
//	printf("%s", arr);
//
//	return 0;
//}




//	写一个自定义函数找出两个数的最大值

//函数的定义
//设置这个自定义函数

//int get_max(int x, int y)
//{							//括号里面的叫做函数体
//	int z = 0;
//
//	if (x > y)
//		z = x;
//	else
//		z = y;
//
//	return z;		//	返回较大值 ---  z 
//}
//
//
//int main()
//{
//
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//
//	//	函数的调用
//
//	int max = get_max(num1,num2);
//
//	//	自定义函数  get_max 把找到的较大值放   max   里面
//
//	printf("max=%d\n ", max );
//
//	return 0;
//}



//			写一个自定义函数可以交换整形变量的内容
//		返回类型是  void  的时候 表示不返回任何值

//void swap1(int x, int y)
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//
//	//return 0;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
//
//	//调用一个可以交换整形变量的函数
//
//	printf("\n交换前： num1=%d  num2=%d\n", num1, num2);
//
//	 swap1(num1, num2);
//
//	printf("\n交换后： num1=%d  num2=%d\n", num1, num2);
//
//	return 0;
//}				//代码有问题  自定义函数里面的 x , y  和num1 , num2 的地址不同  交换不起作用！！！  



//int main()
//{
//	int a = 10;	//4个字节
//	int b = 20;
//
//	//scanf("%d%d", &a, &b);
//
//	int* pa = &a;	//pa就是一个指针变量
//	int* pb = &b;
//
//	*pa = 20;
//	*pb = 10;
//
//	printf("%d %d \n", a , b);
//
//	return 0;
//}




//
//		函数定义
// 
//void swap2(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d", &num1, &num2);
// 
//	printf("\n交换前： num1=%d  num2=%d\n", num1, num2);
//	
//	swap2(&num1, &num2);
//	printf("\n交换后： num1=%d  num2=%d\n", num1, num2);
//
//	return 0;
//}


///			函数定义

//void swap1(int x, int y)		（）里面的叫	形式参数——形参
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//				形参的生命周期只在函数内完成

///			函数定义
//						传址调用

//void swap2(int* pa, int* pb)		（）里面的叫	形式参数——形参
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//				形参的生命周期只在函数内完成



//		函数调用

//											swap1在被调用的时候，实参传给形参，其实形参就是实参的一份临时拷贝
//											改变形参，不影响实参
//				传值调用

//	swap1(num1, num2);		实际参数——实参
// 
//	printf("\n交换前： num1=%d  num2=%d\n", num1, num2);
//	
//	swap2(&num1, &num2);	实际参数——实参
//
//	printf("\n交换后： num1=%d  num2=%d\n", num1, num2);


//	函数的调用
//	传值调用   swap1   把值传过去
//	传址调用   swap2   把址传过去


//		写一个函数 判断一个数是不是素数

//int is_prime(int x)
//{
//	//		改变num1才需要&  判断不需要
//	int j = 0;
//	for (j = 2; j < x; j++)
//	{
//		if (x % j == 0)
//			return 0;
//		//满足这个条件就不是素数  一直++  直到满足跳出去
//	}
//	return 1;
//	//满足这个条件是素数
//}
//
//
//int main()
//{
//	int num1 = 0;
//	
//	for (num1 = 100; num1 <= 200; num1++)
//	{
//		//判断是否为素数
//		if (is_prime(num1) == 1)
//		{
//			printf("%d  ", num1);
//		}
//		else
//		{
//			;
//		}
//	}
//	return 0;
//}



	//		优化
	//		直接开平方	sqrt(x)


//#include<math.h>
//
//int is_prime(int x)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(x); j++)
//	{
//		if (x % j == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int num1 = 0;
//	for (num1 = 100; num1 <= 200; num1++)
//	{
//		if (is_prime(num1) == 1)
//		{
//			printf("%d  ", num1);
//		}
//	}
//	return 0;
//}



//		用自定义函数来判断一年是不是闰年

//		是闰年返回1 不然返回0

//		如果能被4整除但不能被100整除 或者 能被400整除 两个条件满足其中一个则为闰年

//int is_leap_year(int x)
//{
//	if ((x % 4 == 0) &&  (x % 100 != 0) || (x % 400 == 0))
//	{
//		return 1;
//	}
//	else
//	{
//		;
//	}
//}

//			自定义函数优化  
//			直接return  

//int is_leap_year(int x)
//{
//	return ((x % 4 == 0) && (x % 100 != 0) || (x % 400 == 0));
//}
//
//int main()
//{
//	int num1 = 0;
//	int conut = 0;
//	for (num1 = 1000; num1 <= 2000; num1++)
//	{
//		if (is_leap_year(num1) == 1)
//		{
//			printf("%d ", num1);
//			conut++;
//		}
//	}
//	printf("\ncount=%d\n ", conut);
//	return 0;
//}



//		写一个自定义函数  实现整形有序数组的二分查找
// 
//		自定义函数里面不能求元素的个数	要在外面求好了 再传		不太理解！
// 
//					数组		 值	   数组大小
int binary_search(int x[] , int y, int z)
{

	int left = 0;
	int right = z - 1;
	

	//		一定要小于等于

	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (x[mid] > y)
		{
			right = mid - 1;
		}
		else if (x[mid] < y)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}

	return -1;	//找不到
}



int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int key = 6;

	int sz = sizeof(arr) / sizeof(arr[0]);
	//			数组总大小         一个数组的大小

	//找到就返回值  找不到返回一个-1

	int ret = binary_search(arr, key, sz);

	if (-1 == ret)
	{
		printf("找不到！\n");
	}
	else
	{
		printf("找到了:\n  key=%d\n ", key);
	}

	return 0;
}