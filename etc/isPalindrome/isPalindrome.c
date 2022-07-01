#include <stdio.h>
#include <string.h>
int isPalindrome (char* inputString);
void main (int argc, char** args){
	int result;

	if (argc < 2)
	{
		printf("Usage : palindrome inputString\n");
		return;
	}
	result = isPalindrome(args[1]);

	if(result)
	{	
		printf("it is palindrome\n");
	}
	else
	{
		printf("it is NOT palindrome\n");
	}
}
int isPalindrome(char* inputString)
{
	int index;
	int length = strlen(inputString);
	int testEndingIndex = length/2;
	for(index = 0; index < testEndingIndex; index++)
	{
		if(inputString[index] != inputString[length-1-index])
		{
			return 0;
		}
	}
	return 1;
}
