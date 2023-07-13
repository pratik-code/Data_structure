#include<stdio.h>
#include <math.h>
int main(){

int n,i,sum=0,r;
printf("Enter a no");
scanf("%d",&n);
i=0;
while(n!=0){

    r=n%10;
    sum=sum+r*pow(2,i);
    n=n/10;

}
printf("%d",sum);
}
