#include<stdio.h>
int main(){

int i,limit,j,fact;
printf("Enter a no\n");
scanf("%d",&limit);

for(i=0;i<=limit;i++){

fact=1;
    for(j=1;j<=i;j++){

        fact=fact*j;
    }
    printf("i=%d fact=%d\n",i,fact);
}

}
