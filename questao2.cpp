#include <stdio.h>
#include <stdlib.h>

int main(){
	
	char frase[500];
	char letra;
	int t = 0;
	
	printf("Digite sua frase: ");
	gets(frase);
	
	printf("Digite uma letra: ");
	scanf("%c", &letra);
	
	for(int i = 0; i < 500; i++){
		if(frase[i] == letra){
			t++;
		}
		if(frase[i] == '\0'){
			break;
		}
	}
	
	printf("A vogal %c aparece %d vezes",letra, t);
	
	return 0;
}
