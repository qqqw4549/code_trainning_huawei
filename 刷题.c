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
#include<stdio.h>
#include<string.h>
int main(){
    int n=0,i=0,j=0;
    scanf("%d",&n);
    char table[n][100];
    char temp[100];
    for(i=0;i<n;i++)
    {
        scanf("%s",&table[i]);
    }    
    for(i=0;i<n;i++)
    for(j=0;j<n-i-1;j++)
    {
        if(strcmp(table[j],table[j+1])>0)
        {
            strcpy(temp,table[j]);
            strcpy(table[j],table[j+1]);
            strcpy(table[j+1],temp);
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s\n",table[i]);
    }
}

/*
题目描述11
输入一个int型的正整数，计算出该int型数据在内存中存储时1的个数。
输入描述:
 输入一个整数（int类型）
输出描述:
 这个数转换成2进制后，输出1的个数*/
#include<stdio.h>
#include<string.h>
int main(){
   int num=0,temp=0,count=0;
   scanf("%d",&num);
   do{
       temp=num%2;
       if(temp)count++;
       num=num/2;
   }while(num);
printf("%d\n",count);
}
/*
题目描述12
王强今天很开心，公司发给N元的年终奖。王强决定把年终奖用于购物，他把想买的物品分为两类：主件与附件，附件是从属于某个主件的，下表就是一些主件与附件的例子：
主件	附件
电脑	打印机，扫描仪
书柜	图书
书桌	台灯，文具
工作椅	无
如果要买归类为附件的物品，必须先买该附件所属的主件。每个主件可以有 0 个、 1 个或 2 个附件。附件不再有从属于自己的附件。王强想买的东西很多，为了不超出预算，他把每件物品规定了一个重要度，分为 5 等：用整数 1 ~ 5 表示，第 5 等最重要。他还从因特网上查到了每件物品的价格（都是 10 元的整数倍）。他希望在不超过 N 元（可以等于 N 元）的前提下，使每件物品的价格与重要度的乘积的总和最大。
    设第 j 件物品的价格为 v[j] ，重要度为 w[j] ，共选中了 k 件物品，编号依次为 j 1 ， j 2 ，……， j k ，则所求的总和为：
v[j 1 ]*w[j 1 ]+v[j 2 ]*w[j 2 ]+ … +v[j k ]*w[j k ] 。（其中 * 为乘号）
    请你帮助王强设计一个满足要求的购物单。
*/
#include<stdio.h>
#include<string.h>
int main(){
    int i=0,N=0,m=0,max=0;
    scanf("%d %d",&N,&m);
    int *v=malloc(sizeof(int)*m);
    int *p=malloc(sizeof(int)*m);
    int *q=malloc(sizeof(int)*m);
    for(i=0;i<m;i++){
        scanf("%d %d %d",&v[i],&p[i],&q[i]);
    }
    
}
/*
题目描述13
开发一个坐标计算工具， A表示向左移动，D表示向右移动，W表示向上移动，S表示向下移动。从（0,0）点开始移动，
从输入字符串里面读取一些坐标，并将最终输入结果输出到输出文件里面。
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int getops(char * str,int len){
    if(*str=='W' || *str=='A' ||*str=='S' || *str=='D'){
        if(len==2){
            if(isdigit(*(str+1)))
            return *(str+1)-'0';
        }else if(len==3){
            if(isdigit(*(str+1)) && isdigit(*(str+2)))
            return (*(str+1)-'0')*10+*(str+2)-'0';
        }//else return 0;
    }
    return 0;
}
int main(){
    char * string[1000];
    while(gets(string)){
        char * s1=string;
        char * s2=string;
        int left=0,right=0,i=0,len=0;
        while(*s2!='\0'){
            if(*s2 == ';'){
                len=s2-s1;
                if(len==2 || len==3){
                    int num=0;
                    num=getops(s1,len);
                    if(num)
                    {
                        switch(*(s1)){
                            case 'W':{right+=num;break;}
                            case 'A':{left-=num;break;}
                            case 'S':{right-=num;break;}
                            case 'D':{left+=num;break;}
                        }
                    }    
                }
                s1=s2+1;
            }
            s2++;
        }
        printf("%d,%d\n",left,right);
    }
}
/*
请解析IP地址和对应的掩码，进行分类识别。要求按照A/B/C/D/E类地址归类，不合法的地址和掩码单独归类。
所有的IP地址划分为 A,B,C,D,E五类
A类地址1.0.0.0~126.255.255.255;
B类地址128.0.0.0~191.255.255.255;
C类地址192.0.0.0~223.255.255.255;
D类地址224.0.0.0~239.255.255.255；
E类地址240.0.0.0~255.255.255.255
私网IP范围是：
10.0.0.0～10.255.255.255
172.16.0.0～172.31.255.255
192.168.0.0～192.168.255.255
子网掩码为二进制下前面是连续的1，然后全是0。（例如：255.255.255.32就是一个非法的掩码）

解题思路：
IP地址有效性好判断，4个整数，范围0-255
合法的子网掩码是前面全是1后面全是0组成  
1子网掩码是32bit，由四个整数组成，每个整数为8位，范围0-255之间。
2全0全1的掩码是非法的
3最后一个1必须在第一个0的前面

主机号 = IP地址 & 子网掩码
*/
#include<stdio.h>
#include<string.h>
int err=0,i=0,A=0,B=0,C=0,D=0,E=0,p_IP=0,p=0;

int check_ip_mask_range(int * ip){
    int cnt=0;
    for(i=0;i<8;i++){
        if(ip[i]>=0 && ip[i]<=255)cnt++;
    }
    if(cnt<8){err++;return 0;}
    return 1;
}
int check_mask(int * mask){
    if(mask[4]==0 || mask[7]==255)
        err++;
    else{
        for(i=4;i<8;i++)
        {
            if(mask[i]==255)
                continue;
            int sum=0,j=0;
            for(j=i+1;j<8;j++)
            {
                sum+=mask[j];
            }
            if(sum==0 && (mask[i]==254 || mask[i]==252 || mask[i]==248 || mask[i]==240 || mask[i]==192 || mask[i]==128 || mask[i]==128 | mask[i]==0))
            {
                p=1;
                return 1;
            }
            else {err++;return 0;}
        }
    }return 0;
}
int count(int * ip)
{
    if (ip[0] >= 1 && ip[0] <= 126) A++;
    else if (ip[0] >= 128 && ip[0] <= 191) B++;
    else if (ip[0] >= 192 && ip[0] <= 223) C++;
    else if (ip[0] >= 224 && ip[0] <= 239) D++;
    else if (ip[0] >= 240 && ip[0] <= 255) E++;
    if (ip[0] == 10 || (ip[0] == 172 && ip[1] >= 16 && ip[1] <= 31) || (ip[0] == 192 && ip[1] == 168)) p_IP++;
}

int main(){
   int temp[8];
   while(scanf("%d.%d.%d.%d~%d.%d.%d.%d",&temp[0],&temp[1],&temp[2],&temp[3],&temp[4],&temp[5],&temp[6],&temp[7])!=EOF){
       if(check_ip_mask_range(temp))
       check_mask(temp);
       if(p)
       count(temp);
       p=0;
   }
    printf("%d %d %d %d %d %d %d\n", A, B, C, D, E, err, p_IP);
    return 0;   
}

/*
题目描述
开发一个简单错误记录功能小模块，能够记录出错的代码所在的文件名称和行号。
处理： 
1、 记录最多8条错误记录，循环记录，对相同的错误记录（净文件名称和行号完全匹配）只记录一条，错误计数增加；

2、 超过16个字符的文件名称，只记录文件的最后有效16个字符；

3、 输入的文件可能带路径，记录文件名称不能带路径。
*/
#include<stdio.h>
#include<string.h>
#include <malloc.h>
typedef struct Node{
    char file[100];
    int line;
    int err;
}node;

int main()
{
    char * index;
    int length=0,count=0,i=0,j=0;
    node *log,*log_array[1000];
    log = (node *)malloc(sizeof(node));
    while ((scanf("%s %d", log->file,&log->line)) != EOF){   
        index=strrchr(log->file,'\\');
        
        index++;
        length=strlen(index);
        if(length>16)
        index+=(length-16);
        
        for (i = 0;i < count;++i) {
            if (strcmp(log_array[i]->file, index) == 0) {
                if (log_array[i]->line == log->line) {
                    log_array[i]->err++; 
                    break;
                }
            }
        }

        if(count==i){
            log_array[i]=(node *)malloc(sizeof(node));
            strcpy(log_array[i]->file,index);
            log_array[i]->line=log->line;
            log_array[i]->err=1;
            count++;
        }
    }
    if(count > 8){
        j = count-8;
    }
    for(;j<count;j++){
        printf("%s %d %d\n",log_array[j]->file,log_array[j]->line,log_array[j]->err);
    }return 0;
}   
/*
题目描述
密码要求:
1.长度超过8位
2.包括大小写字母.数字.其它符号,以上四种至少三种
3.不能有相同长度超2的子串重复
说明:长度超过2的子串
*/
#include<stdio.h>
#include<string.h>
#include <malloc.h>

int repeat_check(char *str)
{
    char temp[4];
    temp[3] = '\0';
    for(;*(str+2) != '\0'; str++)
    {
        memcpy(temp, str, 3);
        if (strstr(str+3, temp)!=NULL)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    char pwd[100];

    int i=0,count=0;
    while(scanf("%s",pwd)!=EOF){
        int N=0,H=0,L=0,S=0,F=0;
        F=repeat_check(pwd);
        for(i=0;i<strlen(pwd);i++){
        if( 'a' <=pwd[i] && pwd[i]<= 'z')L=1;
            if( 'A' <=pwd[i] && pwd[i]<= 'Z')H=1;
            if( '0' <=pwd[i] && pwd[i]<= '9')N=1;
            else S=1;
        }

        //printf("%d",N+H+L+S);
        if((N+H+L+S)<3 || F==0 || strlen(pwd)<=8 )
        printf("%s\n","NG");
        else printf("%s\n","OK");
        count++;
    } 

    return 0;
}   

/*

*/



