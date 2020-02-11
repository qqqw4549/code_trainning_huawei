#include<stdio.h>
#include<string.h>
#include <malloc.h>

char * target(char * str)
{
	int bitmap[256]={0};
	int temp[100];
	int i=0,len=strlen(str),min=1;
	for(i=0;i<len;i++){
		if(bitmap[str[i]]){
			bitmap[str[i]]++;
		}
		else bitmap[str[i]]=1;
	}
	for(i='a';i<='z';i++){
		if(bitmap[i]){
			if(bitmap[i]<min){
				min=bitmap[i];
			}
		}
	}
	for(i=0;i<len;i++){
		if(bitmap[str[i]]!=min){
			printf("%c",str[i]);
		}
	}
	printf("\n");
}
int main()
{
    char * string[100];

    while(scanf("%s",&string)!=EOF){
       target(string);
    } 
    return 0;
}   