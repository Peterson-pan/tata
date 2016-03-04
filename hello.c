#include <stdio.h> 
int main(){
	printf("hello word\n");
	int arr[10]={0};
	int i;
	for(i=0;i<10;i++){

		arr[i] =i+10;
		printf("%d\n",arr[i] );
	}
	return 0;
}