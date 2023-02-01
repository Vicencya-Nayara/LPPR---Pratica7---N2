#include<stdio.h>
#include<string.h>

int main()
{
    char c[10];
    char invertida[10];

    scanf("%s", c);
    
    int j = 0;
    for(int i=strlen(c)-1; i>=0;i--) {
        invertida[j] = c[i];
        j += 1;
    }
   
    invertida[j] = '\0';

    printf("%s", invertida); 
    return 0;
}
