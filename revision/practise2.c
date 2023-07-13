#include<stdio.h>
int main(){

int i,j,k;

for(i=5;i>=1;i--){
k=i;
    for(j=1;j<=5;j++){

     printf("%d",k);
     k=k+5;
    }
    printf("\n");
}

}
