// DynamicallyAllocatedVariables.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct Friend
{
	const char* Name;
	long long TelephoneNumber;
	const char* Email;
};

void PrintFriendInfo(Friend* pFriend)
{
	cout << "Friend: " << pFriend->Name << "," << pFriend->TelephoneNumber << "," << pFriend->Email << ";\n";
}

int main()
{
	Friend *pFriend1= nullptr, *pFriend2= nullptr;

	pFriend1 = new Friend;
	pFriend2 = new Friend;

	pFriend1->Name = "Rodolfo";
	pFriend1->TelephoneNumber = 943281929;
	pFriend1->Email = "rodolfo@hotmail.com";

	pFriend2->Name = "Amaia";
	pFriend2->TelephoneNumber = 943281929;
	pFriend2->Email = "amaia@hotmail.com";

	PrintFriendInfo(pFriend1);
	PrintFriendInfo(pFriend2);

	delete pFriend1;
	delete pFriend2;

	//The following are WRONG!!
	//
	//pFriend1[1].TelephoneNumber= 987;
	//
	//int* pInt = nullptr;
	//pInt = new int;
	//*pInt = 3;
	//PrintFriendInfo((Friend*)pInt);
	//delete pInt;
	//
	//PrintFriendInfo(pFriend1);
	//PrintFriendInfo(pFriend2);

    return 0;
}

