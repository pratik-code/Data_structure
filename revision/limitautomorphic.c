#include<stdio.h>
int main(){

int limit,num,i,sq,t,r,equal,cn;

printf("Enter a no\n");
scanf("%d",&limit);

for(i=1;i<=limit;i++){
cn=i;
   num=i;
    sq=i*i;
    t=10;
equal=0;
    while(cn!=0){

 r=sq%t;

 if(r==num){

    equal=1;
    break;
 }
        cn=cn/10;
        t=t*10;
    }
    if(equal==1){

        printf("%d",i);
    }
}

}
