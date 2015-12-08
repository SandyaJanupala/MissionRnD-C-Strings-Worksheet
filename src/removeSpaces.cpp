/*
OVERVIEW: Given a string, remove all spaces in it.
E.g.: Input: "abd scd". Output: "abdscd"

INPUTS: A string.

OUTPUT: Return string after removing spaces.

ERROR CASES: Return '\0' for invalid inputs.

NOTES: Don't create new string.
*/

char removeSpaces(char *str) {
	if (str == nullptr)
		return '\0';
	int i = 0;
	int space = 0;
	for (; str[i] != '\0'; i++) {
		if (str[i] == ' ') 
			space++;
		else 
			str[i- space] = str[i];
	}
	str[i - space] = '\0';
}