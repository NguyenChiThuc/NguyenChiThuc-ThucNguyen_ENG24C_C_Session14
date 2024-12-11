#include<stdio.h>
#include<string.h>

int main(){
	char arr[100];
		printf("moi ban nhap chuoi: ");
		scanf("%99s", arr);
	int length = strlen(arr);
	int i;
	for(i = 0; i < length; i++){
		printf("%c\n", arr[i]);
		printf("\n");
	}

	return 0;
}
