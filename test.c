#include<stdio.h>
#include<string.h>
#include <malloc.h>

char * get_pwd(char * str){
    int i=0,len=strlen(str);
    for(i=0;i<len;i++){
        if('A'<=str[i] && str[i]<'Z')str[i]=str[i]+33;
        else if('Z'==str[i])str[i]='a';
        else if('a'<=str[i] && str[i]<='o'){
            str[i]=(str[i]-'a')/3+2+'0';
        }
        else if('o'<str[i] && str[i]<'t')str[i]='0'+7;
        else if('s'<str[i] && str[i]<'w')str[i]='0'+8;
        else if('v'<str[i] && str[i]<='z')str[i]='0'+9;
    }  
    return str;
}

int main()
{
    char pwd[100];
    int i=0,count=0;
    while(scanf("%s",pwd)!=EOF){
        printf("%s\n",get_pwd(pwd));
    } 
    return 0;
}   