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

