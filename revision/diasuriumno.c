#include<stdio.h>
int main(){

int n,i,p=1,r,count,sum;
printf("Enter a no\n");
scanf("%d",&n);
count=0;
int temp=n;
while(temp!=0)
{


    temp=temp/10;
count++;
}
printf("%d\n",count);
sum=0;
while(n!=0){

    r=n%10;
    for(i=count;i>=1;i--){

        p=p*r;
    }
    sum=sum+p;
    n=n/10;
    count--;
    p=1;
}
printf("%d",sum);
}



