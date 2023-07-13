#include<stdio.h>
int main(){

int i=10,j=20,k;

/*i=i^j;
j=i^j;
i=i^j;

printf("%d %d",i,j);
*/
k=i&j;
printf("%d\n",k);
k=i|j;
printf("%d\n",k);
k=i^j;
printf("%d\n",k);


}
