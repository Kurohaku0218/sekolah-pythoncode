#include<stdio.h>
#include<string.h>

int ascii(char text[]){
	
	for(int i = 0; i < strlen(text); i++){
		printf("%i ", text[i]);
	}
}


int main(){
	
	char text[255];
	
	printf("Input String yang ingin di convert\n> ");
	fgets(text, sizeof(text), stdin);

	printf("\nString Awal\n> "); printf("%s", text);
	printf("Hasil ASCII\n> ");
	ascii(text);

	return 0;
}
