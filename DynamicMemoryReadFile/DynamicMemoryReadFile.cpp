// DynamicMemoryReadFile.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
using namespace std;

#define STRING_MAX_SIZE 256

struct Friend
{
	char Name[STRING_MAX_SIZE];
	long long TelephoneNumber;
	char Email[STRING_MAX_SIZE];
};

void CreateAgenda(const char* filename)
{
	int numFriends = 3;
	Friend myFriends[3];

	strcpy_s(myFriends[0].Name, STRING_MAX_SIZE, "Jessie");
	myFriends[0].TelephoneNumber = 98748587;
	strcpy_s(myFriends[0].Email, STRING_MAX_SIZE, "jessie@gmail.com");

	strcpy_s(myFriends[1].Name, STRING_MAX_SIZE, "Alfredo");
	myFriends[1].TelephoneNumber = 91239123;
	strcpy_s(myFriends[1].Email, STRING_MAX_SIZE, "alfredo@gmail.com");

	strcpy_s(myFriends[2].Name, STRING_MAX_SIZE, "Gustavo");
	myFriends[2].TelephoneNumber = 99875454;
	strcpy_s(myFriends[2].Email, STRING_MAX_SIZE, "gustavo@hotmail.com");

	ofstream outputFile(filename, ofstream::out | ofstream::binary);
	if (outputFile.is_open())
	{
		//first, we write the number of friends
		outputFile.write((const char*)&numFriends, sizeof(int));

		//Then we write the array of friends
		//We can only do this because strings (char arrays) have a fixed size
		outputFile.write((const char*)myFriends, sizeof(Friend)*numFriends);

		outputFile.close();
	}
	else
		cout << "ERROR: could not create agenda file";
}

Friend* ReadAgenda(const char* filename, int *pNumFriends)
{
	int numFriends;
	Friend* pFriends= nullptr;

	ifstream inputFile(filename);
	if (inputFile.is_open())
	{
		inputFile.read((char*)&numFriends, sizeof(int));

		pFriends = new Friend[numFriends];
		
		inputFile.read((char*)pFriends, sizeof(Friend)*numFriends);
		
		*pNumFriends = numFriends; //we set the value of the output variable 'pNumFriends'
		inputFile.close();
	}
	else cout << "ERROR: could not load file " << filename << "\n";

	return pFriends;
}

void PrintAgenda(Friend* pFriends, int numFriends)
{
	for (int i = 0; i < numFriends; i++)
	{
		cout << "Friend #" << i << ": " << pFriends[i].Name << "," << pFriends[i].TelephoneNumber << "," << pFriends[i].Email << "\n";
	}
}


int main()
{
	CreateAgenda("agenda.bin");

	int numFriendsRead = 0;
	Friend* pFriendsRead= ReadAgenda("agenda.bin", &numFriendsRead);

	PrintAgenda(pFriendsRead, numFriendsRead);

	delete[] pFriendsRead; //We have to free the memory reserved by ReadAgenda after using it
    return 0;
}

