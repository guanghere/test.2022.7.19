#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>		//	strcpy ��ͷ�ļ�

//	�����Ľ���	�⺯��	�Զ��庯��	��������   ��������   ������Ƕ�׺���ʽ����   �����������Ͷ���   �����ݹ�

//int main()
//{
//	char arr1[20] = { 0 };
//
//	char arr2[] = "hello world!";
//
//	strcpy(arr1, arr2);		//	��������		�Ѻ���Ŀ�����ǰ���
//
//		 Ŀ�ĵ� , Դͷ
// 
//	printf("%s ", arr1);	//	�ַ�����ӡ��	%s
//
//	return 0;
//}


//int main()
//{
//	char arr[] = "hello world!";
//
//	memset(arr, 'x', 5);		//�� ��һ�� �� ǰ��� ���ó� X
//
//	printf("%s", arr);
//
//	return 0;
//}




//	дһ���Զ��庯���ҳ������������ֵ

//�����Ķ���
//��������Զ��庯��

//int get_max(int x, int y)
//{							//��������Ľ���������
//	int z = 0;
//
//	if (x > y)
//		z = x;
//	else
//		z = y;
//
//	return z;		//	���ؽϴ�ֵ ---  z 
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
//	//	�����ĵ���
//
//	int max = get_max(num1,num2);
//
//	//	�Զ��庯��  get_max ���ҵ��Ľϴ�ֵ��   max   ����
//
//	printf("max=%d\n ", max );
//
//	return 0;
//}



//			дһ���Զ��庯�����Խ������α���������
//		����������  void  ��ʱ�� ��ʾ�������κ�ֵ

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
//	//����һ�����Խ������α����ĺ���
//
//	printf("\n����ǰ�� num1=%d  num2=%d\n", num1, num2);
//
//	 swap1(num1, num2);
//
//	printf("\n������ num1=%d  num2=%d\n", num1, num2);
//
//	return 0;
//}				//����������  �Զ��庯������� x , y  ��num1 , num2 �ĵ�ַ��ͬ  �����������ã�����  



//int main()
//{
//	int a = 10;	//4���ֽ�
//	int b = 20;
//
//	//scanf("%d%d", &a, &b);
//
//	int* pa = &a;	//pa����һ��ָ�����
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
//		��������
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
//	printf("\n����ǰ�� num1=%d  num2=%d\n", num1, num2);
//	
//	swap2(&num1, &num2);
//	printf("\n������ num1=%d  num2=%d\n", num1, num2);
//
//	return 0;
//}


///			��������

//void swap1(int x, int y)		��������Ľ�	��ʽ���������β�
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//				�βε���������ֻ�ں��������

///			��������
//						��ַ����

//void swap2(int* pa, int* pb)		��������Ľ�	��ʽ���������β�
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//				�βε���������ֻ�ں��������



//		��������

//											swap1�ڱ����õ�ʱ��ʵ�δ����βΣ���ʵ�βξ���ʵ�ε�һ����ʱ����
//											�ı��βΣ���Ӱ��ʵ��
//				��ֵ����

//	swap1(num1, num2);		ʵ�ʲ�������ʵ��
// 
//	printf("\n����ǰ�� num1=%d  num2=%d\n", num1, num2);
//	
//	swap2(&num1, &num2);	ʵ�ʲ�������ʵ��
//
//	printf("\n������ num1=%d  num2=%d\n", num1, num2);


//	�����ĵ���
//	��ֵ����   swap1   ��ֵ����ȥ
//	��ַ����   swap2   ��ַ����ȥ


//		дһ������ �ж�һ�����ǲ�������

//int is_prime(int x)
//{
//	//		�ı�num1����Ҫ&  �жϲ���Ҫ
//	int j = 0;
//	for (j = 2; j < x; j++)
//	{
//		if (x % j == 0)
//			return 0;
//		//������������Ͳ�������  һֱ++  ֱ����������ȥ
//	}
//	return 1;
//	//�����������������
//}
//
//
//int main()
//{
//	int num1 = 0;
//	
//	for (num1 = 100; num1 <= 200; num1++)
//	{
//		//�ж��Ƿ�Ϊ����
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



	//		�Ż�
	//		ֱ�ӿ�ƽ��	sqrt(x)


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



//		���Զ��庯�����ж�һ���ǲ�������

//		�����귵��1 ��Ȼ����0

//		����ܱ�4���������ܱ�100���� ���� �ܱ�400���� ����������������һ����Ϊ����

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

//			�Զ��庯���Ż�  
//			ֱ��return  

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



//		дһ���Զ��庯��  ʵ��������������Ķ��ֲ���
// 
//		�Զ��庯�����治����Ԫ�صĸ���	Ҫ����������� �ٴ�		��̫��⣡
// 
//					����		 ֵ	   �����С
int binary_search(int x[] , int y, int z)
{

	int left = 0;
	int right = z - 1;
	

	//		һ��ҪС�ڵ���

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

	return -1;	//�Ҳ���
}



int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	int key = 6;

	int sz = sizeof(arr) / sizeof(arr[0]);
	//			�����ܴ�С         һ������Ĵ�С

	//�ҵ��ͷ���ֵ  �Ҳ�������һ��-1

	int ret = binary_search(arr, key, sz);

	if (-1 == ret)
	{
		printf("�Ҳ�����\n");
	}
	else
	{
		printf("�ҵ���:\n  key=%d\n ", key);
	}

	return 0;
}