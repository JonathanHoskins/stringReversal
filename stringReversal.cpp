/*
This program takes in a string from the user and reverses the string before printing it out.
Made by Jonathan Hoskins
Reference material from http://www.daniweb.com/software-development/cpp/threads/60138/how-do-you-reverse-string-elements
There were some errors here and there, but I commented everything out to make sure that I understood what is going on.
*/

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

void ReverseString(char string[], char reversed[])
{
	//gets the length of the string that is entered and stores that value into the int length
	int length = strlen(string);
	//runs a for loop to start at the end of the string, and count backwards putting each character in reverse order
	//then it assigns the new reversed string to the object reversed.
	for(int i = length-1, j = 0; i >= 0; i--, j++)
		reversed[j] = string[i];
	//this for loop prints out each character of the reversed object
	for(int i = 0; i < length; i++)
		cout << reversed[i];

	cout << endl;
}

int main()
{
	//initialize the constant MAX to represent 80
	const int MAX = 80;
	//initialize a char array string of 80 spots
	char string[MAX];
	//initialize a char array reversed of 80 spots
	char reversed[MAX];
	//print out the message "Enter the word you want to reverse"
	cout << "Enter the word you want to reverse.\n";
	//get the line of input entered from the keyboard
	cin.getline(string, MAX);

	//calls the method reverseString
	ReverseString(string, reversed);

	return 0;
}