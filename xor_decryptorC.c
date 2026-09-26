#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calc(char a[], int l, int b){
	 // Loop through each character of the text to encrypt it
    for (int i = 0; i < l; i++){
        a[i] = a[i] ^ b; // Modify the array directly using XOR operation
    }
}

int main()
{
    char text[100];
    int key;
    
    // Prompt the user to enter a text
    printf("your text : \n");
    scanf("%s", text);
    
    // Calculate the length of the string stored in the 'text' variable
    int l = strlen(text);
    
    // Prompt the user to enter an encryption key
    printf("your key : \n");
    scanf("%d", &key);
    calc(text, l, key);

    // Display the encrypted text
    printf("Text crypted : %s\n", text);

    return 0; 
}
