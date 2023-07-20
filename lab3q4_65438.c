#include <stdio.h>
int main(){
	int num = 0;
	int sumNum = 0;
	double count = 0;
	while(1){ 
		printf("enter a number : ");
		scanf("%d" ,&num);
		if(num <= 0) 
			break;
		sumNum += num;
		count++;
	}
	printf("summation = %d\n",sumNum);
        printf("average = %f\n" , sumNum/count);
	return 0;
}


