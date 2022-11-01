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

	//Validate the file

	char first_name[MAXLEN];
	char last_name[MAXLEN];
	char address[MAXLEN];
	int age;

	//Load First Name

	//Load Last Name

	//Load Address

	//Load Age

	//Print saved contents
	printf("First Name: %s \n", first_name);
	printf("Last Name: %s \n", last_name);
	printf("Address: %s \n", address);
	printf("Age: %d \n", age);

	return 0;
}