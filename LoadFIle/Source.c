//Read info from a file (Load)

//Let's build an example that loads our four pieces of saved information:
// First name, Last name, Address, Age

#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h> // exit() prototype

#define MAXLEN 20

int main()
{
	//How does a file load information into the program (Think about fgets)

	FILE* fp;

	//Validate the file
	if ((fp = fopen("Example.txt", "r")) == NULL) {

		printf("Cannot open the file.\n");
	}

	char tempSchool[MAXLEN];
	char school[MAXLEN];
	//char first_name[MAXLEN];
	//char last_name[MAXLEN];
	//char address[MAXLEN];
	char temp[MAXLEN];
	int age;

	fgets(tempSchool, MAXLEN, fp);
	tempSchool[strlen(tempSchool) - 1] = '\0';
	strcpy(school, tempSchool, MAXLEN);
	printf("%s\n", school);

	//Load First Name

	//Load Last Name

	//Load Address

	//Load Age

	fgets(temp, MAXLEN, fp);
	age = atoi(temp);		// Using a temp var and 'atoi' to convert it to an int.
	printf("%d", age);


	//Print saved contents
	//printf("First Name: %s \n", first_name);
	//printf("Last Name: %s \n", last_name);
	//printf("Address: %s \n", address);
	//printf("Age: %d \n", age);

	return 0;
}