#include<stdio.h>
#include<string.h>

int main(){
	char arr[100];
		printf("moi ban nhap ki tu: ");
		scanf("%99s", arr);
	int length = strlen(arr);
	int i;

	for(i = length; i >= 0; i--){
		printf("%c\n", arr[i]);
	}

	return 0;
}
