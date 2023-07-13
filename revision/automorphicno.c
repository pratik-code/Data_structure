#include<stdio.h>
int main(){

int n,sq,t,r,equal=0;

printf("Enter a no\n");
scanf("%d",&n);

int temp=n;
sq=n*n;
t=10;
while(n!=0){

    r=sq%t;
    if(temp==r){

        equal=1;
        break;
    }
    n=n/10;
    t=t*10;

}
if(equal==1){

    printf("automorphic no");
}
else{
    printf("not aautomorphiic no");
}



}
