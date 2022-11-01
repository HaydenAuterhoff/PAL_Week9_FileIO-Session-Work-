//Write to a file (Save)

//Let's build an example that saves our four pieces of information:
// First name, Last name, Address, Age

#define _CRT_SECURE_NO_WARNINGS 

#include <stdio.h>
#include <stdlib.h> 

#define MAXLEN 20

int main()
{
	//How do use the File that we want to use?

	//Validate the file

	FILE* SaveData_fp;

	//int num; //initalize to the result of a function
	//add(); 

	//num = add(1, 1); //Expect: num = 2

	//SaveData_fp is a file pointer
	//Fopen returns a file pointer

	if ((SaveData_fp = fopen("Random.txt", "w")) == NULL)
	{
		exit(1);
	}

	char first_name[MAXLEN];
	char last_name[MAXLEN];
	char address[MAXLEN];
	int age;

	//User Input and save to the file

	//First Name

	puts("Enter your name: ");
	fgets(first_name, MAXLEN, stdin);
	fputs(first_name, SaveData_fp); //fprintf(SaveData_fp, "%s\n", first_name);

	//Last Name

	puts("Enter your last name: ");
	fgets(last_name, MAXLEN, stdin);
	fputs(last_name, SaveData_fp); //fprintf(SaveData_fp, "%s\n", first_name);

	//Address

	puts("Enter your address: ");
	fgets(address, MAXLEN, stdin);
	fputs(address, SaveData_fp); //fprintf(SaveData_fp, "%s\n", first_name);

	//Age

Age:
	puts("Ente your age: ");
	scanf_s("%d", &age);

	if (age <= 0 || age >= 100) {
		puts("Not a valid age.");
		goto Age;

	}

	fprintf(SaveData_fp, "%d\n", age);

	fprintf(SaveData_fp, "Name: %s\t,  Last Name: %s\t, Address: %s\t, Age: %d\t", first_name, last_name, address, age);


	/*fscanf_s(SaveData_fp, age, "%d");*/



	return 0;

}