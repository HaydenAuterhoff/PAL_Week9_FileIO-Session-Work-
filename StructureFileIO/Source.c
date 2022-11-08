//Read and Write to a file an array of strcutures (Load and Save)

//Let's build a program that stores information like a database (Array of Structures)
//In the Data Entry struct, the information: First Name, Last Name, Address, and Age are stored
//Use another strcut containing the Data Entry struct to generate the array with a boolean status (Filled or not)

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAXLEN 20
#define NUMENTRY 5


//Create two structs, one from creating the structure array and one for holding individual data entries

typedef struct somename
{
	char firstName[MAXLEN];
	char lastName[MAXLEN];
	char address[MAXLEN];
	int age;

}DATABUCKET;

typedef struct somename1
{

	DATABUCKET data;

}DATAARRAY;

//Initialize Functions: LoadData, SaveData, PrintArray, EnterDataEntry


void getData(DATAARRAY dataArray[]);

void arrayStatus(DATAARRAY dataArray[]);

void saveData(DATAARRAY dataArray[]);

int main()
{

	//Initialize both structures, one as an array

	DATABUCKET data;

	DATAARRAY dataArray[NUMENTRY];

	//Function calls (Load Data)

	getData(dataArray);

	// Check status of array

	arrayStatus(dataArray);

	//User input for Data Entry

	puts("Enter your first name: ");
	fgets(data.firstName, sizeof(data.firstName), stdin);
	puts("Enter your last name: ");
	fgets(data.lastName, sizeof(data.lastName), stdin);
	puts("Enter your address: ");
	fgets(data.address, sizeof(data.address), stdin);
	puts("Enter your age: ");
	scanf_s("%d", &data.age);


	saveData(dataArray);

	puts("You have been doxxed.");


	//Function call to enter data entry in an unfilled array

	//Function call (Save Datra

	return 0;
}

//LoadData Function

void getData(DATAARRAY dataArray[]) {

	FILE* fp;

	if ((fp = fopen("Database.txt", "r")) == NULL) {

		puts("File does not exist or could not open.");

	}

	char tempFirstName[MAXLEN];
	char tempLastName[MAXLEN];
	char tempAddress[MAXLEN];
	char tempAge[MAXLEN];

	for (int i = 0; i < NUMENTRY; i++) {

		fgets(tempFirstName, MAXLEN, fp);

		//strncpy(dataArray[i].data.)

		strncpy(dataArray[i].data.firstName, tempFirstName, MAXLEN);

		fgets(tempLastName, MAXLEN, fp);
		strncpy(dataArray[i].data.lastName, tempLastName, MAXLEN);

		fgets(tempAddress, MAXLEN, fp);
		strncpy(dataArray[i].data.address, tempAddress, MAXLEN);

		fgets(tempAge, MAXLEN, fp);
		dataArray[i].data.age = atoi(tempAge);
	}

	fclose(fp);
}

// Clean array and see if it has been used:

void arrayStatus(DATAARRAY dataArray[]) {






}


//SaveData Function

void saveData(DATAARRAY dataArray[]) {

	FILE* fp;

	if ((fp = fopen("Database.txt", "w")) == NULL) {

		puts("File does not exist or could not open.");

	}


	for (int i = 0; i < NUMENTRY; i++) {


		fputs(dataArray[i].data.firstName, fp);

		fputs(dataArray[i].data.lastName, fp);


		fputs(dataArray[i].data.address, fp);

		fputs(dataArray[i].data.age, fp);

	}

	fclose(fp);

}



//PrintArray Function

//EnterDataEntry