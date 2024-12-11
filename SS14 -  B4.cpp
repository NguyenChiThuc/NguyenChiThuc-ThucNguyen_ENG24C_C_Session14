#include<stdio.h>
#include<string.h>

int main(){
	char arr[100];
		printf("moi ban nhap vao chuoi: ");
		scanf("%99s", arr);
	int length = strlen(arr);

	int index;
		printf("moi ban nhap ki tu can tim: \n");
		getchar();
		scanf("%c", &index);
	
	int i;
	int number = 0;
	for(i = 0; i < length; i++){
		if(arr[i] == index){
			number ++;
		}
	}
		printf("so lan phan tu %c xuat hien trong chuoi la: %d\n", index, number);

	return 0;
}
