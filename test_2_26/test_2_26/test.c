#define _CRT_SECURE_NO_WARNINGS 1
#include<windows.h>
//������̬�ڴ����
//��������:
//1.�Կ�ָ����н����ò������翪��ʧ�ܺ�p=NULL,����19��20�еĲ��������������:p��������ж�
//2.�Զ�̬�����ڴ��Խ����ʣ��翪��10���ֽڣ�ȴ����11���ֽ����ݣ�
//3.�ԷǶ�̬�����ڴ���ͷ�
#include<stdio.h>

//void GetMemory(char*p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);  //str��ֵ���ݴ���p,p��GetMemory�������βΣ�����������δ�ͷ��ڴ棬���˳��������޷��ҵ�p;
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
//	//1.�Կ�ָ����н����ò������翪��ʧ�ܺ�p = NULL, ����19��20�еĲ��������������:p��������ж�
//	//int* p = malloc(40);
//	//*p = 10;//�п��ܶԿ�ָ����н����ò������翪��ʧ�ܺ�p = NULL,
//
//	//2.�Զ�̬�����ڴ��Խ����ʣ��翪��10���ֽڣ�ȴ����11���ֽ����ݣ�
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	//for (i = 0; i <= 10; i++)//�˴�i=10�󣬷Ƿ�����
//	//{
//	//	*(p + i) = i;
//	//}
//	//free(p);
//	//p = NULL;
//
//	//3.�ԷǶ�̬�����ڴ���ͷ�
//	//int a = 10;
//	//int* p = &a;
//	//free(p);
//	//p = NULL;
//
//	//4.ʹ��free�ͷŶ�̬�����ڴ��һ����
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
//	//free(p);//��ʱp�Ѿ��ı��ˣ�ָ�����������ٿռ����ʼλ�ã�freeֻ�ܴ������ٿռ����ʼλ���ͷ�
//	//p = NULL;
//
//	//5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�,�������:�ͷź����p=NULL
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////ʹ��
//	////�ͷ�
//	//free(p);
//	////p=NULL
//	////......
//	//free(p);
//
//	//6.��̬�����ڴ������ͷţ��ڴ�й©��,���ٺ�Ҫ�ǵ��ͷ�
//	/*while (1)
//	{
//		malloc(1);
//	
//	}*/
//
//
//	Test();//���д��룬�������������ڴ�й¶������
//	return 0;
//}

char *GetMemory(void)
{
	//char p[] = "hello world";//ջ��
	static char p[] = "hello world";//��̬����������static�ͻ�ӳ�p�����ڣ��Ϳ�������ʹ��
	return p;
}
void Test2(void)
{
	char *str=NULL;
	str = GetMemory();
	printf(str);//�Ƿ�����
}
int main(void)
{
	Test2();//����ջ�ռ�ĵ�ַ������
	return 0;
}