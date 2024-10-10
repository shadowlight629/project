//while loop
#include<stdio.h>
int main(){
	int i=50, sum=0, square=pow(i,2);
while(i>0){
	printf("%d\n",i);
	i--;
	sum = sum +i;
	
}	
printf("the sum is %d",sum);
printf("%d square is equal to %d\n",i,square);	
	return 0;

}