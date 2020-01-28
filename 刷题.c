/*
题目描述1
计算字符串最后一个单词的长度，单词以空格隔开。
输入描述:
一行字符串，非空，长度小于5000。

输出描述:
整数N，最后一个单词的长度。

示例1
输入
复制
hello world
输出
复制
5
*/
#include <stdio.h>
 int main()
 {
     char str[5000];
     int i,j=0,N=0;
     while(scanf("%c", &str[j])!=EOF)
     {
         if(str[j]==' ')
             N=0;
         else
             N++;
         if(j<4999)
             j++;
     }
     if(N!=0)
         N=N-1;
     printf("%d",N);
     return 0;
 }

/*
题目描述2
大小写转换,字母匹配
写出一个程序，接受一个由字母和数字组成的字符串，和一个字符，然后输出输入字符串中含有该字符的个数。不区分大小写。
输入描述:
第一行输入一个有字母和数字以及空格组成的字符串，第二行输入一个字符。

输出描述:
输出输入字符串中含有该字符的个数。

示例1
输入
复制
ABCDEF
A
输出
复制
1
*/
#include <stdio.h>
#include <string.h>
main()
{
    char a[5000];
    char b;
    int b1 = 0;
    gets(a);
    scanf("%c", &b);
    int num = strlen(a);
    int str = 0;
    if (b <= 'z'&&b >= 'a')
        b1 = -32;
    else if (b <= 'Z'&&b >= 'A')
        b1 = 32;
  
    for (int i =0;i<num;i++)
    {
        if (a[i] == b || a[i] == b + b1)
            str++;
    }
    printf("%d", str);
}
/*
题目描述3
位图
明明想在学校中请一些同学一起做一项问卷调查，为了实验的客观性，他先用计算机生成了N个1到1000之间的随机整数（N≤1000），对于其中重复的数字，只保留一个，把其余相同的数去掉，不同的数对应着不同的学生的学号。然后再把这些数从小到大排序，按照排好的顺序去找同学做调查。请你协助明明完成“去重”与“排序”的工作(同一个测试用例里可能会有多组数据，希望大家能正确处理)。
Input Param
n               输入随机数的个数
inputArray      n个随机整数组成的数组
Return Value
OutputArray    输出处理后的随机整数
用位图的思想
*/
#include<stdio.h>
int main()
{
    int n,ary[1001],temp;
    while(scanf("%d",&n)!=EOF){
        for(int i=0;i<1001;++i)ary[i]=0;
        for(int i=0;i<n;++i)
        {
            scanf("%d",&temp);
            ary[temp]=1;
        }
        for(int i=0;i<1001;++i)
        {
            if(ary[i])printf("%d\n",i);
        }   
    }
	return 0;
}

/*
题目描述4

gets 应用   putchar的应用

•连续输入字符串，请按长度为8拆分每个字符串后输出到新的字符串数组；
•长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。
输入描述:
连续输入字符串(输入2次,每个字符串长度小于100)

输出描述:
输出到长度为8的新字符串数组

*/
#include<stdio.h>
#include<string.h>

void print(char * str) 
{
    int len = strlen(str);
    int m=len/8,n=len%8;
    int i=0,j=0,index=0;

     for(i=0;i<m;i++)
     {
        for(j=0;j<8;j++){
            putchar(*(str+index));
            index++;
        }
        printf("\n");
     }
	 
    if(n)
    {
        for(i=0;i<n;i++){
            putchar(*(str+index));
            index++;
        }
        for(i=0;i<8-n;i++){
            putchar('0');
        }
		printf("\n");
    }
}

int main()
{
    char a[100];
	char b[100];
       gets(a);
       gets(b);
       print(a);
       print(b);
}

/**********/
/*
题目描述5

写出一个程序，接受一个十六进制的数，输出该数值的十进制表示。（多组同时输入 ）

输入描述:
输入一个十六进制的数值字符串。

输出描述:
输出该数值的十进制字符串。
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int sqrt(int x)
{
    int y=1;
    while(--x)
    {
        y=y*16;
    }
    return y;
}
int main()
{
    char a[100];
    int len=0,i=0,sum=0;
    while(gets(a)){
    sum=0;
    len = strlen(a);
    for(i=2;i<len;i++)
    {
        if(a[i] >= '0' && a[i] <= '9')
            sum=sum+(a[i]-48)*sqrt(len-i);
        else if(a[i] >= 'A' && a[i] <= 'F')
            sum=sum+(a[i]-55)*sqrt(len-i);
    }
    printf("%d\n",sum);
    }
    return 0;
}
/*
题目描述6
功能:输入一个正整数，按照从小到大的顺序输出它的所有质数的因子（如180的质数因子为2 2 3 3 5 ）

最后一个数后面也要有空格

详细描述：


函数接口说明：

public String getResult(long ulDataInput)

输入参数：

long ulDataInput：输入的正整数

返回值：

String



输入描述:
输入一个long型整数

输出描述:
按照从小到大的顺序输出它的所有质数的因子，以空格隔开。最后一个数后面也要有空格。
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{

    int i=0,n=0;
    
    scanf("%d",&n);
    
    for(i=2;i<=n;i++)
    {
        while(n%i==0)
        {
            n=n/i;
            printf("%d ",i);
        }
    }

    return 0;
}

/*
题目描述7
写出一个程序，接受一个正浮点数值，输出该数值的近似整数值。如果小数点后数值大于等于5,向上取整；小于5，则向下取整。

输入描述:
输入一个正浮点数值

输出描述:
输出该数值的近似整数值
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    float x=0;
    int sum=0;
    scanf("%f",&x);
    sum=(int)(x*10);
    if(sum%10>=5){
        printf("%d\n",(int)(sum/10)+1);
    }else printf("%d\n",(int)(sum/10));
}
/*
题目描述8
数据表记录包含表索引和数值（int范围的整数），请对表索引相同的记录进行合并，即将相同索引的数值进行求和运算，输出按照key值升序进行输出。

输入描述:
先输入键值对的个数
然后输入成对的index和value值，以空格隔开

输出描述:
输出合并后的键值对（多行）
*/
#include<stdio.h>

int main(){
    int i=0,num=0,index_=0,value_=0;
    scanf("%d",&num);
    int * value=malloc(sizeof(int)*num);
	memset(value,NULL,sizeof(int)*num);
    for(i=0;i<num;i++){
        scanf("%d %d",&index_,&value_);
        value[index_]+=value_;
    }
    for(i=0;i<num;i++){
		if(value[i])
        printf("%d %d\n",i,value[i]);
    }
    return 0;
}
/*
题目描述9
输入一个int型整数，按照从右向左的阅读顺序，返回一个不含重复数字的新的整数。

输入描述:
输入一个int型整数

输出描述:
按照从右向左的阅读顺序，返回一个不含重复数字的新的整数
*/
#include<stdio.h>

int main(){
    int num=0,x=0,count=0,i=0;
    int table[10]={0};
	int index[10]={0};
    int temp=10,sum=0;
    int result=0;
    scanf("%d",&num);
    sum=num;
    if(num>10){
        while(sum>0)
        {
            x=sum%10;
            if(table[x]){
                sum=(sum-x)/10; 
            }
            else{
				table[x]=1;
				index[count]=x;
                count++;
				sum=(sum-x)/10;
            }
        }
        sum=0;
        for(i=0;i<count;i++)
        {
            sum=sum*10+index[i];
        }
        printf("%d\n",sum);
    }else printf("sum %d",num);
    
    return 0;
}
/*
题目描述10
编写一个函数，计算字符串中含有的不同字符的个数。字符在ACSII码范围内(0~127)，换行表示结束符，不算在字符里。不在范围内的不作统计。

输入描述:
输入N个字符，字符在ACSII码范围内。

输出描述:
输出范围在(0~127)字符的个数。
*/








