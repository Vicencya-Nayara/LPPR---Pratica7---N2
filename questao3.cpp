#include <stdio.h>
#include<string.h>

int main(){
	
	char palavra[100];
	char palavra_invertida[100];
	int t = 0;
	
	printf("Digite a palavra: ");
	scanf("%s\n", &palavra);
	
	for(int i = strlen(palavra)-1; i >= 0; i--){
		palavra_invertida[t] = palavra[i];
		t += 1;
	}
	
	palavra_invertida [t] = '\0';
	printf("%s\n", palavra_invertida);
	
	return 0;
}
