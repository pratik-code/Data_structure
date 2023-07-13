#include<stdio.h>
int main(){

int n,sum,mul,r;
printf("Enter a no\n");
scanf("%d",&n);

sum=0;
mul=1;

while(n!=0){

    r=n%10;
    sum=sum+r;
    mul=mul*r;
    n=n/10;
}
if(sum==mul){
    printf("spy no");

}
else{

    printf("not a spy no");
}

}
