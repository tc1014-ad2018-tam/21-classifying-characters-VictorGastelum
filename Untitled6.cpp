/*
   This program will classifies the characters of any given string in:
   *Alphabeths:
     Vowels
     Consonants
    *Digits.
    *Special characters.
    *Spaces.
   
   Author: Victor Manuel Gastelum Huitzil
   e-mail: A01411985@itesm.mx
   Date: 18/10/18
*/

#include <stdio.h>
#include <mem.h>
#include <ctype.h>


int main() {
    int vowels=0;
    int cons=0;
    int dig=0;
    int esp=0;
    int especial=0;
    char string[250];

    // Ask the user for a string
    printf("Give me a string \n");
    fgets(string, sizeof(string), stdin);

    // Loop that will classifies the characters of the string
    for (int i=0;i<strlen(string)-1;i++){
        if (string[i]==' '){ // Here I store all the spaces in the string
            esp++;
        }
        
		else if (isdigit(string[i])) { // Here I look all for the digits and stores it 
                dig++;
        } 
        
		else if (ispunct(string[i])){ // Here I look all for the especial characters and stores it 
            especial++;
        }
    
        // Here I look all for the vowels and stores it 
		else if (string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U'||string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'){
			vowels++;
		}else{ // If there is some consonant I store it in "cons"
            cons++;
            }
    }
            
    // Here I print the results        
    printf("Your string have:\n");
    printf("%i vowels\n",vowels);
    printf("%i consonants\n", cons),
    printf("%i digits\n", dig);
    printf("%i special characters\n", especial);
    printf("%i spaces", esp);

return 0;
}
