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















int main()
{





	return 0;
}