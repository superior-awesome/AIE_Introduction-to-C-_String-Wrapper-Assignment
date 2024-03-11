#include <iostream>
#include "header.h"
#include "String.h"


int main()
{
	std::cout << "Hello World." << std::endl;

	int choice = -1;
	int *choicePtr = &choice;

	String StringOne = String();
	String* strOne = &StringOne;

	String StringTwo("Pac Man.");
	String* strTwo = &StringTwo;

	while (choice != 0)
	{
		GetChoice(choicePtr);
		MakeChoice(choicePtr, strOne, strTwo);
	}

	std::cout << "Ending program";

	return 0;
}

void GetChoice(int *a)
{
	std::cout << "0) To Exit" << std::endl;

	std::cout << "1) String();" << std::endl;
	std::cout << "2) String(const char* _str);" << std::endl;
	std::cout << "3) String(const String & _other);" << std::endl;
	std::cout << "4) ~String();" << std::endl;

	std::cout << "5) size_t Length() const;" << std::endl;
	std::cout << "6) char& CharacterAt(size_t _index);" << std::endl;
	std::cout << "7) const char& CharacterAt(size_t _index) const;" << std::endl;
	std::cout << "8) bool EqualTo(const String & _other) const;" << std::endl;
	std::cout << "9) String& Append(const String & _str);" << std::endl;
	std::cout << "10) String& Prepend(const String & _str);" << std::endl;
	std::cout << "11) const char* CStr() const;" << std::endl;
	std::cout << "12) String& ToLower();" << std::endl;
	std::cout << "13) String& ToUpper();" << std::endl;
	std::cout << "14) int Find(const String & _str);" << std::endl;
	std::cout << "15) int Find(size_t _startIndex, const String & _str);" << std::endl;
	std::cout << "16) String& Replace(const String & _find, const String & _replace);" << std::endl;
	std::cout << "17) String& ReadFromConsole();" << std::endl;
	std::cout << "18) String& WriteToConsole();" << std::endl;

	std::cout << "19) bool operator==(const String & _other);" << std::endl;
	std::cout << "20) bool operator!=(const String & _other);" << std::endl;
	std::cout << "21) String& operator=(const String & _str);" << std::endl;
	std::cout << "22) char& operator[](size_t _index);" << std::endl;
	std::cout << "23) const char& operator[](size_t _index) const;" << std::endl;

	std::cout << "24) String operator+(const String & _rhs);" << std::endl;
	std::cout << "25) String& operator+=(const String & _other);" << std::endl;
	std::cout << "----- " << std::endl;

	std::cout << "enter a number to test that class method: ";
	std::cin >> *a;
	
}

void MakeChoice(int* a, String* strOne, String* strTwo)
{

	std::cout << "You chose to test: ";

	switch (*a)
	{
	case 1:
		std::cout << "1) String();" << std::endl;
		std::cout << "This default constructor is not called as a part of this program" << std::endl;

		break;
	case 2:
		std::cout << "2) String(const char* _str);" << std::endl;
		std::cout << "One strings in this program was constructed using this method: " << std::endl;


		std::cout << "Both strings in this program were constructed using this method\nBoth strings below:" << std::endl;

		std::cout << "\ta) ";
		strOne->WriteToConsole();
		std::cout << std::endl;

		std::cout << "\tb) ";
		strTwo->WriteToConsole();
		std::cout << std::endl;
		// CODE
		break;
	case 3:
		std::cout << "3) String(const String & _other);" << std::endl;
		// CODE
		break;
	case 4:
		std::cout << "4) ~String();" << std::endl;
		// CODE
		break;
	case 5:
		std::cout << "5) size_t Length() const;" << std::endl;
		// CODE
		break;
	case 6:
		std::cout << "6) char& CharacterAt(size_t _index);" << std::endl;
		// CODE
		break;
	case 7:
		std::cout << "7) const char& CharacterAt(size_t _index) const;" << std::endl;
		// CODE
		break;
	case 8:
		std::cout << "8) bool EqualTo(const String & _other) const;" << std::endl;
		// CODE
		break;
	case 9:
		std::cout << "9) String& Append(const String & _str);" << std::endl;
		// CODE
		break;
	case 10:
		std::cout << "10) String& Prepend(const String & _str);" << std::endl;
		// CODE
		break;
	case 11:
		std::cout << "11) const char* CStr() const;" << std::endl;
		// CODE
		break;
	case 12:
		std::cout << "12) String& ToLower();" << std::endl;
		// CODE
		break;
	case 13:
		std::cout << "13) String& ToUpper();" << std::endl;
		// CODE
		break;
	case 14:
		std::cout << "14) int Find(const String & _str);" << std::endl;
		// CODE
		break;
	case 15:
		std::cout << "15) int Find(size_t _startIndex, const String & _str);" << std::endl;
		// CODE
		break;
	case 16:
		std::cout << "16) String& Replace(const String & _find, const String & _replace);" << std::endl;
		// CODE
		break;
	case 17:
		std::cout << "17) String& ReadFromConsole();" << std::endl;
		// CODE
		break;
	case 18:
		std::cout << "18) String& WriteToConsole();" << std::endl;
		// CODE
		break;
	case 19:
		std::cout << "19) bool operator==(const String & _other);" << std::endl;
		// CODE
		break;
	case 20:
		std::cout << "20) bool operator!=(const String & _other);" << std::endl;
		// CODE
		break;
	case 21:
		std::cout << "21) String& operator=(const String & _str);" << std::endl;
		// CODE
		break;
	case 22:
		std::cout << "22) char& operator[](size_t _index);" << std::endl;
		// CODE
		break;
	case 23:
		std::cout << "23) const char& operator[](size_t _index) const;" << std::endl;
		// CODE
		break;
	case 24:

		std::cout << "24) String operator+(const String & _rhs);" << std::endl;
		// CODE
		break;
	case 25:
		std::cout << "25) String& operator+=(const String & _other);" << std::endl;
		// CODE
		break;
	case 26:
		std::cout << "26) " << std::endl;
		// CODE
		break;
	case 27:
		// CODE
		break;
	default:
		*a = 0;
		break;

	}

	std::cout << std::endl;
	std::cout << std::endl;

}