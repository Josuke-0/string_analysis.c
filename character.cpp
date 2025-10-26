#include <stdio.h>
#include <string.h>

void countCharacters(char string[], int *vowels, int *consonants, int *digits, int *spaces);

int main() {
	int vowels = 0, consonants = 0, digits = 0, spaces = 0;
	char Character[200];
	
	printf("Enter any sentence :");
	fgets(Character, sizeof(Character), stdin);
	Character[strcspn(Character, "\n")] = '\0';

	
	countCharacters(Character, &vowels, &consonants, &digits, &spaces);
	printf("Vowels in the given sentence are : %d \n", vowels);
	printf("Consonants in the given sentence are : %d \n", consonants);
	printf("Digits in the given sentence are : %d \n", digits); 
	printf("Spaces in the given sentence are : %d \n", spaces); 
	return 0; 
	}

void countCharacters(char string[], int *vowels, int *consonants, int *digits, int *spaces) {
	for(int i = 0; string[i] != '\0'; i++){
		char ch = string[i];
		if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
			if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
				(*vowels)++;
			} else {
				(*consonants)++;
			}
		}
		else if( ch >= '0' && ch <= '9') {
				(*digits)++;
			} else if(ch == ' ') {
				(*spaces)++;
			}
	}
}
