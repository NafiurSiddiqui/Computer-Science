#include <stdio.h>

int main()
{
	char s[4] = "HI!";
	char *ref1 = &s[0];
	char *ref2 = &s[1];
	char *ref3 = &s[2];
	char *ref4 = &s[3];

	printf("String: %s\n", s);
	printf("\nCharacter and Memory Addresses:\n");
	for(int i = 0; i < 4; i++){
		printf("Character %c is at address: %p\n", s[i], &s[i]);
	}

	printf("\nPointer Addresses:\n");
	printf("ref1 points to: %p (value: %c)\n", ref1, *ref1);
	printf("ref2 points to: %p (value: %c)\n", ref2, *ref2);
	printf("ref3 points to: %p (value: %c)\n", ref3, *ref3);
	printf("ref4 points to: %p (value: %c)\n", ref4, *ref4);

	return 0;
}
