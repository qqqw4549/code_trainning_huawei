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