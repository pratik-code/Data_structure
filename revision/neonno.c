#include<stdio.h>
int main(){

int n,sq,sum=0,r;
printf("Enter a no\n");
scanf("%d",&n);
int temp=n;
sq=n*n;
while(sq!=0){

    r=sq%10;
    sum=sum+r;
    sq=sq/10;

}
n=temp;
if(sum==n){

    printf("neon no");
}
else{
    printf("not a neon no");
}
}
