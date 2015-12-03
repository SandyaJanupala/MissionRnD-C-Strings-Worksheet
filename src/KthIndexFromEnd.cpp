/*
OVERVIEW: Given a string, return the Kth index from the end of the string.
E.g.: Input: "qwertyui", 3. Output: 't' (index starting from zero).

INPUTS: A string and value of K.

OUTPUT: Return the Kth index from the end of the string (index starting from zero).

ERROR CASES: Return '\0' for invalid inputs.

NOTES:
*/
int length(char * str);
char KthIndexFromEnd(char *str, int K) {
	if (str == nullptr)
		return '\0';
	if (K < 0)
		return '\0';
	int len = length(str);
	if (K > len)
		return '\0';
	return str[len - K - 1];
}


int length(char * str) {
	int index = 0;
	while (str[index] != '\0')
		index++;
	return index;
}

