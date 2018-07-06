// Pointers2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

struct Friend
{
	const char* Name;
	long long TelephoneNumber;
	const char* Email;
};

int main()
{
	Friend myFriend;

	myFriend.Name = "Alfredo";
	myFriend.TelephoneNumber = 91239123;
	myFriend.Email = "alfredo@gmail.com";

	Friend* pMyFriend = &myFriend;  //make 'pMyFriend' to 'myFriend'
	
	(*pMyFriend).TelephoneNumber = 92392923;
	pMyFriend->TelephoneNumber = 29830204;

    return 0;
}

