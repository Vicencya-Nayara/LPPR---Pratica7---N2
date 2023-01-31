#include <stdio.h>
#include <stdlib.h>

int main(){
	int t = 0;
	char frase[500],  letra[1];
	
	gets(frase);
	gets(letra);
	
	for(int i = 0; i < 500; i++){
		if(frase[i] == letra[0]){
			t++;
		}
		if(frase[i] == '\0'){
			break;
		}
	}
	printf("A vogal %s aparece %d vezes", letra, t);
	return 0;
}
