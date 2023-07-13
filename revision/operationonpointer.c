#include<stdio.h>
int main(){

int a=20;
int *p,**q;
p=&a;
q=&p;
printf("%d",*p);
*q=25;
printf("%d",p);

}
