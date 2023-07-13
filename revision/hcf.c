#include<stdio.h>
int main(){

int a,b,h,i;
printf("Enter a no\n");
scanf("%d %d",&a,&b);

h=a<b?a:b;
for(i=h;i>=1;i--){
    if((a%i==0)&&(b%i==0)){
        break;
    }
}

    printf("%d",i);

}
