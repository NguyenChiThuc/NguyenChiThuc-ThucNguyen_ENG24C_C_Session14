#include<stdio.h>
#include<string.h>

int main(){
    char arr[100];
    	printf("Moi ban nhap gia tri cho chuoi: ");
    	scanf("%[^\n]", arr);
    int count = 0;
    int i = 0;
    while (arr[i] != '\0' && (chuoi[i] == ' ' || arr[i] == '\t')) {
        i++;
    }
    while (arr[i] != '\0') {
        if (arr[i] != ' ' && chuoi[i] != '\t') {
            count++;
            while (arr[i] != '\0' && arr[i] != ' ' && arr[i] != '\t') {
                i++;
            }
        } else {
            i++; 
        }
    }
    printf("So luong tu trong chuoi: %d\n", count);

    return 0;
}

