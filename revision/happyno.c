#include<stdio.h>
int main(){

int n,sum=0,r;
printf("Enter a  no\n");
scanf("%d",&n);

while((sum!=1)&&(sum!=4)){

sum=0;
    while(n!=0){

    r=n%10;
    sum=sum+r*r;
    n=n/10;


}
n=sum;
}
if(sum==1){

    printf("Happy no");
}
else{
    printf("not a happy no");
}



}
