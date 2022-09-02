#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//请问该循环要循环多少次
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k= 0; i++, k++)//答案：循环0次，是k=0不是k==0，判断语句处为0为假，所以循环根本不进行
//	{
//		k++;
//		printf("%d", k);
//	}
// 
//	return 0;
//}



//打印数字1--10
//for循环
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d ", i);
//	}
//}




//打印数字1--10
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//			continue;//i==5时，continue后面的代码不执行，所以i不会再加了，i一直等于5，陷入死循环
//		printf("%d ", i);//1 2 3 4 _ 没结束，光标陷入死循环
//		i++;//当打印了1 2 3 4后，i==5，
//	}
//	return 0;
//}




//do while循环
//打印1---10
//
//int main()
//{
//	int i = 1;
//	do
//	{
//		if (i == 5)
//			//continue;//1 2 3 4死循环
//			//break;//1 2 3 4
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//
//	return 0;
//}





//求输入的n的阶乘
//求1！+2！+...+10！的值
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


//顺序查找
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
//			printf("找到了,下标为%d\n", i);
//			break;//找到了就停止了
//		}
//	}
//	if (i = ss)
//		printf("找不到");
//
//
//	return 0;
//}







//折半查找或二分法查找
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10};          //1 2 3 4 5 6 7 8 9 10
//	int k = 19;                                    //0 1 2 3 4 5 6 7 8 9
//	int sz = sizeof(arr) / sizeof(arr[0]);//如果arr为字符串类型，那么sz=stelen(arr)-1，不再是用sizeof()来判断了-
//	int left = 0;//左下标
//	int right = sz - 1;//元素个数减一为右下标
//	while (left <= right)//注意循环的条件
//	{
//		int mid = (left + right) / 2;  //每次中间元素的下标
//		if (arr[mid] > k) //通过中间元素下标找到该值与k比较，大于k，k在左侧，则右下标改变，减一
//			right = mid - 1;
//		else if (arr[mid] < k) //通过中间元素下标找到该值与k比较，小于k，k在右侧，则左下标改变，加一
//			left = mid + 1;
//		else
//		{
//			printf("找到了,下标为:%d\n", mid);
//			break;//找到了就停下
//		}
//
//	}
//		if (left > right) //通过此条件判断找不到
//			printf("找不到");
//
//	return 0;
//}



#include <string.h>
#include <Windows.h>
#include<stdlib.h>
//int main()
//{
//	char arr1[] = "welcome to bit!!!!!!";//we################!!一直到打印出welcome to bit!!!!!!
//	char arr2[] = "####################";
//	int left = 0;
//	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//注意这里不是减1
//	//char arr[]='abc';
//	//[a b c \0]
//	// 0 1 2  3
//	//上面的arr1的最后一个！对应这儿的c，如果减一的话，那c的下标为4-1==3，但实际是2，所以应该是减2
//	int right = strlen(arr1) - 1;//注意strlen到\0就停了，它求的字符串长度不包含\0，如‘a b c'的长度为3而不是4
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		left++;
//		right--;
//		Sleep(1000);//休息一秒,单位是ms
//		system("cls");//执行系统命令的一个函数-cls--清空屏幕
//		printf("%s\n", arr2);
//	}
//	return 0;
//}
//结果如下：
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




//系统三次登录密码
#include <string.h>
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	for (i = 0; i<3; i++)
//	{
//		printf("请输入密码：");
//		scanf("%s", password);
//		//if (password == '1234')// == 不能用来比较两个字符串相等的,应该使用一个库函数strcmp
//		if(strcmp(password,"123456")==0)//strcmp(,)==0即为两字符串相等
//		{
//			printf("登录成功");
//			break;//成功就停止跳出
//		}
//		else
//		{
//			printf("密码错误");
//		}
//		
//	}
//	if (i == 3)
//	{
//		printf("登陆失败，请重新登录\n");
//		
//	}
//	return 0;
//}


//strlen()的用法
//int main()
//{
//	char arr[] = "adsfffd";
//	int a = strlen(arr);
//	printf("%d", a);
//	return 0;
//}





//从大到小输出三个数
//int main()
//{
//	/*int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;*/
//	int a, b, c, temp;
//	printf("请输入三个数：");
//	scanf("%d %d %d", &a, &b, &c);//如果输入为%d,%d,%d，那么输入数字时也要1,2,3用逗号隔开
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




//打印1--100之间为3的倍数
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




//求两个数的最大公约数
// //辗转相除法求最大公约数
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
//	while (a%b)//a%b值为0为非，不执行；值为非零，执行
//	{
//		r = a % b;
//		a = b;
//		b = r;
//	}
//	printf("%d", b);
//	return 0;
//}





//打印1000-2000年间的闰年
//判断是否为闰年
//1.能被4整除并且不能被100整除
//2.能被400整除为闰年
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//		{
//			printf("%d是闰年\n",i);
//			count++;
//		}
//		else if (i % 400 == 0)
//		{
//			printf("%d是闰年\n",i);
//			count++;
//		}
//		
//	}
//	printf("总共有%d个闰年\n", count);
//	return 0;
//}


//算法简化：一句话判断
//打印1000-2000年间的闰年
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)//用一个if语句直接判断
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("count=%d\n", count);
//	return 0;
//}




#include<math.h>
 //打印100--200之间的素数
 // 试除法求素数，用i除以2到i-1之间的数取余，若为零，则不是
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		//for (j = 2; j < i; j++)
//		for(j=2;j<=sqrt(i);j++)//16-2*8=4*4其中一个数肯定小于开平方16
//		{
//			if (i % j == 0)
//				break;
//		}
//
//		//if (j == i)
//		if(j>sqrt(i))//sqrt()左侧没有整除16的数，则sqrt()右侧也没有，所以j>sqrt(i)就说明没有整除16的数了，该数为素数
//		{
//			printf("%d\n", i);
//			count++;
//		}
//		
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
//《素数求解的n种境界》



//求1--100中带9的数
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



//求1/1-1/2+1/3-1/4+...+1/99-1/100
//法一：分组求和
//int main()
//{
//	int i = 0;
//	int j = 0;
//	double sum1 = 0;
//	double sum2 = 0;   //结果为浮点数，不是整数
//	double sum3 = 0;
//	double sum = 0;
//	for (i = 1; i <= 100; i=i + 2)
//	{
//		sum1 += 1.0 / i;      //为保证为浮点数用1.0来除
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
//	printf("sum=%lf\n", sum);//sum=0.688172         //注意是%lf,不是%d了 
//	printf("sum3=%lf\n", sum3);//sum3=5.187378
//
//	return 0;
//}


//法二：一起求和
//求1/1-1/2+1/3-1/4+...+1/99-1/100
//int main()
//{
//	int i = 0;
//	int flag = 1;
//	double sum = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum =sum+flag*( 1.0 / i);
//		flag = -flag; //用flag来实现偶数次时为负
//
//	}
//	printf("sum=%lf", sum);//sum=0.688172
//	return 0;
//}




//求10个数里的最大值
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,20,7,8,30,10 };//{-1,-2,-3,-4,-5,-6,-7,-8,-9,-10}
//	int max = arr[0];//不要默认max=0,用数组里的元素更合适
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



//九九乘法表
//int main()
//{
//	int i, j;
//	//横排打印，然后换行 ,//1*3=3;2*3=6;3*3=9
//	for (i = 1; i < 10; i ++ )//i是行
//	{
//		for (j = 1; j <=i; j++)//j是列
//		{
//			printf("%d * %d =%-2d ",i ,j , i*j);   //%2d---右对齐，%-2d----左对齐
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
//153%10==3  //个位
//153/10%10==5 //十位
//153/100==1  //百位
//求出所有的水仙花数（三位数，其值等于个位、十位、百位的立方和）
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
	




//输入一行字符，分别统计英文字母、数字、空格和其他字符个数
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
//	printf("字母=%d,数字=%d,空格=%d,其他=%d", letter, number, space, other);
//	return 0;
//}




//
