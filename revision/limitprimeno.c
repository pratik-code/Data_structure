#include<stdio.h>
int main(){

int limit,i,j,count;

printf("Enter a no\n");
scanf("%d",&limit);

for(i=1;i<=limit;i++){

count=0;
    for(j=1;j<=i;j++){

        if(i%j==0){
            count++;
        }
    }
    if(count==2){
        printf("%d\n",i);
    }
}


}
