#include<stdio.h>
#include<string.h>
int main(){
    int n=0,i=0,j=0;
    scanf("%d",&n);
    char table[n][100];
    char temp[100];
    for(i=0;i<n;i++)
    {
        scanf("%s",table[i]);
    }    
    for(i=0;i<n;i++)
    for(j=0;j<n-i-1;j++)
    {
        if(strcmp(table[j],table[j+1])>0)
        {
            temp=table[j];
            table[j]=table[j+1];
            table[j+1]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%s\n",table[i]);
    }
}

