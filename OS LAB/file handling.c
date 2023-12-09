#include <stdio.h>
#include <string.h>
int main()
{
	FILE* filePointer;
	char dataToBeRead[50];
	filePointer = fopen("question2_arr.c", "r+");
    char dataToBeWritten[50] = "operating system";
	if (filePointer == NULL) {
		printf("question_arr.c file failed to open.");
	}
	else {
		printf("The file is now opened.\n");
		while (fgets(dataToBeRead, 50, filePointer)!= NULL) {
			printf("%s", dataToBeRead);
		}
        fputs(dataToBeWritten, filePointer);
        fputs("\n", filePointer);
		fclose(filePointer);
		printf("Data successfully read from and written into file question2_ar.c\n");
		printf("The file is now closed.");
	}
	return 0;
}
