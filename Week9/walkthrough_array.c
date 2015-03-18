#include<stdio.h>

void foo(int alpha, char array[]){
	int i;
	for (i=0;i<4;i++){
		array[i]= array[i]+ alpha;
	}
}
void print(char array[],int sz){
	int i;
	for(i=0;i<sz;i++){
		printf("%c ",array[i]);
	}
	printf("\n");
}
int main(void){
	char data[4]={'a','b','c','d'};  
	int i;
	print(data,4);
	for (i=1;i<4;i++){
		foo(i,data);
		print(data,4);
	}
	return 0;
}
