#define _CRT_SECURE_NO_WARNINGS 1
#include<windows.h>
//常见动态内存错误
//常见问题:
//1.对空指针进行解引用操作（如开辟失败后，p=NULL,进行19—20行的操作）。解决方法:p进行相关判断
//2.对动态开辟内存的越界访问（如开辟10个字节，却访问11个字节内容）
//3.对非动态开辟内存的释放
#include<stdio.h>

//void GetMemory(char*p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);  //str以值传递传给p,p是GetMemory函数的形参，函数结束后，未释放内存，且退出函数后无法找到p;
//	strcpy(str, "hello");
//	printf(str);
//}
//void GetMemory(char* *p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);  
//	strcpy(str, "hello");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main(void)
//{
//	//1.对空指针进行解引用操作（如开辟失败后，p = NULL, 进行19—20行的操作）。解决方法:p进行相关判断
//	//int* p = malloc(40);
//	//*p = 10;//有可能对空指针进行解引用操作，如开辟失败后，p = NULL,
//
//	//2.对动态开辟内存的越界访问（如开辟10个字节，却访问11个字节内容）
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	//for (i = 0; i <= 10; i++)//此处i=10后，非法访问
//	//{
//	//	*(p + i) = i;
//	//}
//	//free(p);
//	//p = NULL;
//
//	//3.对非动态开辟内存的释放
//	//int a = 10;
//	//int* p = &a;
//	//free(p);
//	//p = NULL;
//
//	//4.使用free释放动态开辟内存的一部分
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*p++ = i;
//	//}
//	//free(p);//此时p已经改变了，指向不再是所开辟空间的起始位置，free只能从所开辟空间的起始位置释放
//	//p = NULL;
//
//	//5.对同一块动态内存的多次释放,解决方法:释放后添加p=NULL
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////使用
//	////释放
//	//free(p);
//	////p=NULL
//	////......
//	//free(p);
//
//	//6.动态开辟内存忘记释放（内存泄漏）,开辟后要记得释放
//	/*while (1)
//	{
//		malloc(1);
//	
//	}*/
//
//
//	Test();//运行代码，程序奔溃，存在内存泄露的问题
//	return 0;
//}

char *GetMemory(void)
{
	//char p[] = "hello world";//栈区
	static char p[] = "hello world";//静态区。若加上static就会加长p的周期，就可以正常使用
	return p;
}
void Test2(void)
{
	char *str=NULL;
	str = GetMemory();
	printf(str);//非法访问
}
int main(void)
{
	Test2();//返回栈空间的地址的问题
	return 0;
}