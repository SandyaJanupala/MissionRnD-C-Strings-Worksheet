/*
OVERVIEW: Given a string, reverse all the words not the string.

E.g.: Input: "i like coding". Output: "coding like i"

INPUTS: A string.

OUTPUT: Modify the string according to the logic.

NOTES: Don't create new string.
*/
#include <Stdio.h>
#include <string.h>


void reverse(char *a, char *b);
void str_words_in_rev(char *input, int len) {
	if (!(strchr(input, ' ')))
		input = input;
	else if (strlen(input)) {
		char *begin = input;
		char *temp = input;
		while (*temp != NULL) {
			temp++;
			if (*temp == '\0')
				reverse(begin, temp - 1);
			else if (*temp == ' ') {
				reverse(begin, temp - 1);
				begin = temp + 1;
			}
		}

		reverse(input, temp - 1);
	}
}

void reverse(char *a, char *b) {
	char temp;
	while (a < b) {
		temp = *a;
		*a = *b;
		*b = temp;
		*a++;
		*b--;
	}
}
