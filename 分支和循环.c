#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//���ʸ�ѭ��Ҫѭ�����ٴ�
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k= 0; i++, k++)//�𰸣�ѭ��0�Σ���k=0����k==0���ж���䴦Ϊ0Ϊ�٣�����ѭ������������
//	{
//		k++;
//		printf("%d", k);
//	}
// 
//	return 0;
//}



//��ӡ����1--10
//forѭ��
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//}




//��ӡ����1--10
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//i==5ʱ��continue����Ĵ��벻ִ�У�����i�����ټ��ˣ�iһֱ����5��������ѭ��
//		printf("%d ", i);//1 2 3 4 _ û���������������ѭ��
//		i++;//����ӡ��1 2 3 4��i==5��
//	}
//	return 0;
//}




//do whileѭ��
//��ӡ1---10
//
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			//continue;//1 2 3 4��ѭ��
//			//break;//1 2 3 4
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//
//	return 0;
//}





//�������n�Ľ׳�
//��1��+2��+...+10����ֵ
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	scanf("%d:", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//		sum = sum +ret;
//	}
//	printf("ret=%d\n", ret);
//	printf("sum=%d\n", sum);
//
//	return 0;
//}


//˳�����
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int i = 0;
//	int ss = sizeof(arr) / sizeof(arr[0]);//  40/4==10;
//	//printf("sizeof(arr)=%d\n",sizeof(arr));//40
//	for (i = 0; i < ss; i++)
//	{
//		if (arr[i] == k)
//		{
//			printf("�ҵ���,�±�Ϊ%d\n", i);
//			break;//�ҵ��˾�ֹͣ��
//		}
//	}
//	if (i = ss)
//		printf("�Ҳ���");
//
//
//	return 0;
//}







//�۰���һ���ַ�����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};          //1 2 3 4 5 6 7 8 9 10
//	int k = 19;                                    //0 1 2 3 4 5 6 7 8 9
//	int sz = sizeof(arr) / sizeof(arr[0]);//���arrΪ�ַ������ͣ���ôsz=stelen(arr)-1����������sizeof()���ж���-
//	int left = 0;//���±�
//	int right = sz - 1;//Ԫ�ظ�����һΪ���±�
//	while (left <= right)//ע��ѭ��������
//	{
//		int mid = (left + right) / 2;  //ÿ���м�Ԫ�ص��±�
//		if (arr[mid] > k) //ͨ���м�Ԫ���±��ҵ���ֵ��k�Ƚϣ�����k��k����࣬�����±�ı䣬��һ
//			right = mid - 1;
//		else if (arr[mid] < k) //ͨ���м�Ԫ���±��ҵ���ֵ��k�Ƚϣ�С��k��k���Ҳ࣬�����±�ı䣬��һ
//			left = mid + 1;
//		else
//		{
//			printf("�ҵ���,�±�Ϊ:%d\n", mid);
//			break;//�ҵ��˾�ͣ��
//		}
//
//	}
//		if (left > right) //ͨ���������ж��Ҳ���
//			printf("�Ҳ���");
//
//	return 0;
//}



#include <string.h>
#include <Windows.h>
#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";//we################!!һֱ����ӡ��welcome to bit!!!!!!
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//ע�����ﲻ�Ǽ�1
//	//char arr[]='abc';
//	//[a b c \0]
//	// 0 1 2  3
//	//�����arr1�����һ������Ӧ�����c�������һ�Ļ�����c���±�Ϊ4-1==3����ʵ����2������Ӧ���Ǽ�2
//	int right = strlen(arr1) - 1;//ע��strlen��\0��ͣ�ˣ�������ַ������Ȳ�����\0���确a b c'�ĳ���Ϊ3������4
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		Sleep(1000);//��Ϣһ��,��λ��ms
//		system("cls");//ִ��ϵͳ�����һ������-cls--�����Ļ
//		printf("%s\n", arr2);
//	}
//	return 0;
//}
//������£�
//w##################!
//we################!!
//wel##############!!!
//welc############!!!!
//welco##########!!!!!
//welcom########!!!!!!
//welcome######t!!!!!!
//welcome ####it!!!!!!
//welcome t##bit!!!!!!
//welcome to bit!!!!!!




//ϵͳ���ε�¼����
#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i<3; i++)
//	{
//		printf("���������룺");
//		scanf("%s", password);
//		//if (password == '1234')// == ���������Ƚ������ַ�����ȵ�,Ӧ��ʹ��һ���⺯��strcmp
//		if(strcmp(password,"123456")==0)//strcmp(,)==0��Ϊ���ַ������
//		{
//			printf("��¼�ɹ�");
//			break;//�ɹ���ֹͣ����
//		}
//		else
//		{
//			printf("�������");
//		}
//		
//	}
//	if (i == 3)
//	{
//		printf("��½ʧ�ܣ������µ�¼\n");
//		
//	}
//	return 0;
//}


//strlen()���÷�
//int main()
//{
//	char arr[] = "adsfffd";
//	int a = strlen(arr);
//	printf("%d", a);
//	return 0;
//}





//�Ӵ�С���������
//int main()
//{
//	/*int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;*/
//	int a, b, c, temp;
//	printf("��������������");
//	scanf("%d %d %d", &a, &b, &c);//�������Ϊ%d,%d,%d����ô��������ʱҲҪ1,2,3�ö��Ÿ���
//	if (a < b)
//	{
//		temp = a;
//		a = b;
//		b = temp;
//	}
//	if (a < c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b < c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}




//��ӡ1--100֮��Ϊ3�ı���
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if(i%3==0)
//			printf("%d ", i);
//	}
//	return 0;
//}




//�������������Լ��
// //շת����������Լ��
//int main()
//{
//	int a =1;
//	int b =1;
//	int r=0 ;
//	
//	scanf("%d%d", &a, &b);
//	if (a < b)
//	{
//		int tem = a;
//		a = b;
//		b = tem;
//	}
//
//	while (a%b)//a%bֵΪ0Ϊ�ǣ���ִ�У�ֵΪ���㣬ִ��
//	{
//		r = a % b;
//		a = b;
//		b = r;
//	}
//	printf("%d", b);
//	return 0;
//}





//��ӡ1000-2000��������
//�ж��Ƿ�Ϊ����
//1.�ܱ�4�������Ҳ��ܱ�100����
//2.�ܱ�400����Ϊ����
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d������\n",i);
//			count++;
//		}
//		else if (i % 400 == 0)
//		{
//			printf("%d������\n",i);
//			count++;
//		}
//		
//	}
//	printf("�ܹ���%d������\n", count);
//	return 0;
//}


//�㷨�򻯣�һ�仰�ж�
//��ӡ1000-2000��������
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)//��һ��if���ֱ���ж�
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}




#include<math.h>
 //��ӡ100--200֮�������
 // �Գ�������������i����2��i-1֮�����ȡ�࣬��Ϊ�㣬����
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		//for (j = 2; j < i; j++)
//		for(j=2;j<=sqrt(i);j++)//16-2*8=4*4����һ�����϶�С�ڿ�ƽ��16
//		{
//			if (i % j == 0)
//				break;
//		}
//
//		//if (j == i)
//		if(j>sqrt(i))//sqrt()���û������16��������sqrt()�Ҳ�Ҳû�У�����j>sqrt(i)��˵��û������16�����ˣ�����Ϊ����
//		{
//			printf("%d\n", i);
//			count++;
//		}
//		
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
//����������n�־��硷



//��1--100�д�9����
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if(i%10==9 || i / 10==9)
//			{
//			printf("%d\n", i);
//			count++;
//			}
//	}
//	printf("count=%d", count);
//	return 0;
//}



//��1/1-1/2+1/3-1/4+...+1/99-1/100
//��һ���������
//int main()
//{
//	int i = 0;
//	int j = 0;
//	double sum1 = 0;
//	double sum2 = 0;   //���Ϊ����������������
//	double sum3 = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i=i + 2)
//	{
//		sum1 += 1.0 / i;      //Ϊ��֤Ϊ��������1.0����
//		//printf("sum1=%lf\n", sum1);
//
//	}
//	for (j = 2; j <= 100; j=j + 2)
//	{
//		sum2 += 1.0 / j;
//		//printf("sum2=%lf\n", sum2);
//
//	}
//	sum = sum1 - sum2;
//	sum3 = sum1 + sum2;
//	printf("sum=%lf\n", sum);//sum=0.688172         //ע����%lf,����%d�� 
//	printf("sum3=%lf\n", sum3);//sum3=5.187378
//
//	return 0;
//}


//������һ�����
//��1/1-1/2+1/3-1/4+...+1/99-1/100
//int main()
//{
//	int i = 0;
//	int flag = 1;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum =sum+flag*( 1.0 / i);
//		flag = -flag; //��flag��ʵ��ż����ʱΪ��
//
//	}
//	printf("sum=%lf", sum);//sum=0.688172
//	return 0;
//}




//��10����������ֵ
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,20,7,8,30,10 };//{-1,-2,-3,-4,-5,-6,-7,-8,-9,-10}
//	int max = arr[0];//��ҪĬ��max=0,���������Ԫ�ظ�����
//
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d", max);
//	return 0;
//}
//



//�žų˷���
//int main()
//{
//	int i, j;
//	//���Ŵ�ӡ��Ȼ���� ,//1*3=3;2*3=6;3*3=9
//	for (i = 1; i < 10; i ++ )//i����
//	{
//		for (j = 1; j <=i; j++)//j����
//		{
//			printf("%d * %d =%-2d ",i ,j , i*j);   //%2d---�Ҷ��룬%-2d----�����
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
//1 * 1 = 1
//2 * 1 = 2  2 * 2 = 4
//3 * 1 = 3  3 * 2 = 6  3 * 3 = 9
//4 * 1 = 4  4 * 2 = 8  4 * 3 = 12 4 * 4 = 16
//5 * 1 = 5  5 * 2 = 10 5 * 3 = 15 5 * 4 = 20 5 * 5 = 25
//6 * 1 = 6  6 * 2 = 12 6 * 3 = 18 6 * 4 = 24 6 * 5 = 30 6 * 6 = 36
//7 * 1 = 7  7 * 2 = 14 7 * 3 = 21 7 * 4 = 28 7 * 5 = 35 7 * 6 = 42 7 * 7 = 49
//8 * 1 = 8  8 * 2 = 16 8 * 3 = 24 8 * 4 = 32 8 * 5 = 40 8 * 6 = 48 8 * 7 = 56 8 * 8 = 64
//9 * 1 = 9  9 * 2 = 18 9 * 3 = 27 9 * 4 = 36 9 * 5 = 45 9 * 6 = 54 9 * 7 = 63 9 * 8 = 72 9 * 9 = 81
//






//153
//153%10==3  //��λ
//153/10%10==5 //ʮλ
//153/100==1  //��λ
//������е�ˮ�ɻ�������λ������ֵ���ڸ�λ��ʮλ����λ�������ͣ�
//int main()
//{
//	int i;
//	int x, y, z;
//	for (i = 100; i <= 999; i++)
//	{
//		x = i % 10;
//		y = i / 10 % 10;
//		z = i / 100;
//		if (i == x * x * x + y * y * y + z * z * z)
//			printf("%d ", i);
//		//153 370 371 407
//
//	}
//	return 0;
//}
	




//����һ���ַ����ֱ�ͳ��Ӣ����ĸ�����֡��ո�������ַ�����
//int main()
//{
//	char c;
//	int letter = 0;
//	int number = 0;
//	int space = 0;
//	int other = 0;
//	c=getchar();
//	while (c != '\n')
//	{
//		if ((c > 'a' && c < 'z') || (c>'A' && c < 'Z'))
//			letter++;
//		else if (c >= '0' && c <= '9') 
//			number++;
//		else if (c == ' ')
//			space++;
//		else
//			other++;
//		c = getchar();
//
//	}
//	printf("��ĸ=%d,����=%d,�ո�=%d,����=%d", letter, number, space, other);
//	return 0;
//}




//
