#include<stdio.h>
int main(){

int a=0,b=1,c,n,i;
printf("Enter a no\n");
scanf("%d",&n);

for(i=0;i<n;i++){

    printf("%d\t",a);
    c=a+b;
    a=b;
    b=c;

}

}
