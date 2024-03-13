#include <iostream>
#include "header.h"

#include "String.h"


int main()
{
	std::cout << "Hello World." << std::endl;

	int input = 1;
	int *a = &input;

	String strOne("Master Cheif ");
	String* strPtrOne = &strOne;

	String strTwo("Bella Goth ");
	String* strPtrTwo = &strTwo;

	while (*a != 0)
	{
		GetChoice(a);
		MakeChoice(a, strPtrOne, strPtrTwo);

	}




	return 0;
}

void GetChoice(int* a)
{

	std::cout << "-------------------------------------------------\n Your options to choose from are:\n" << std::endl;

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
	std::cout << "0) To Exit" << std::endl;
	std::cout << std::endl;

	std::cout << "enter a number to test that class method: (YOU MAY NEED TO SCROLL UP)";
	std::cin >> *a;

}

void MakeChoice(int* a, String* strOne, String* strTwo)
{

	int i;
	int j;
	int loc;

	String gooseString("HONK");
	String holder;
	String* strHolder;

	std::cout << "-------------------------------------------------" << std::endl;
	std::cout << "You chose to test: ";

	switch (*a)
	{
	case 1:
		std::cout << "1) String();" << std::endl;
		std::cout << "This default constructor is empty and so running tests on it is hard... so here is the code:" << std::endl;
		std::cout << "\nString.h:" << std::endl;
		std::cout << "\tclass String:" << std::endl;
		std::cout << "\t{" << std::endl;
		std::cout << "\t\tString();" << std::endl;
		std::cout << "\n\t\t...\n" << std::endl;
		std::cout << "\t}" << std::endl;

		std::cout << "\nString.cpp:" << std::endl;
		std::cout << "\tString::String() " << std::endl;
		std::cout << "\t{" << std::endl;
		std::cout << "\t\tstr = nullptr;" << std::endl;
		std::cout << "\t\tlength = 0;" << std::endl;
		std::cout << "\t\tcapacity = 0;" << std::endl;
		std::cout << "\t" << std::endl;
		std::cout << "\t}" << std::endl;

		break;

	case 2:
		std::cout << "2) String(const char* _str);" << std::endl;
		std::cout << "Both strings in this program were origianlly constructed using this method\nBoth strings are below:" << std::endl;
		writeBothStrings(strOne, strTwo);


		break;

	case 3:
		std::cout << "3) String(const String & _other);" << std::endl;

		std::cout << "This copy constructor is not run so here is the code:" << std::endl;
		std::cout << "\nString.h:" << std::endl;
		std::cout << "\tclass String:" << std::endl;
		std::cout << "\t{" << std::endl;
		std::cout << "\t\tString(const String & _other);" << std::endl;
		std::cout << "\n\t\t...\n" << std::endl;
		std::cout << "\t}" << std::endl;

		std::cout << "\nString.cpp" << std::endl;
		std::cout << "\tString::String(const String & _other) {" << std::endl;
		std::cout << "\t\tlength = _other.length;" << std::endl;
		std::cout << "\t\tcapacity = _other.capacity;" << std::endl;
		std::cout << "\t\tstr = new char[capacity];" << std::endl;
		std::cout << "\t\tstrcpy_s(str, capacity, _other.str);" << std::endl;
		std::cout << "\t};" << std::endl;

		break;

	case 4:
		std::cout << "4) ~String();" << std::endl;
		std::cout << "This copy constructor is not run in this program so here is the code:" << std::endl;
		std::cout << "\nString.h:" << std::endl;
		std::cout << "\tclass String:" << std::endl;
		std::cout << "\t{" << std::endl;
		std::cout << "\t\t~String();" << std::endl;
		std::cout << "\n\t\t...\n" << std::endl;
		std::cout << "\t}" << std::endl;

		std::cout << "\nString.cpp" << std::endl;
		std::cout << "\tString::~String() {" << std::endl;
		std::cout << "\t\tdelete[] str;" << std::endl;
		std::cout << "\t};" << std::endl;

		break;

	case 5:
		std::cout << "5) size_t Length() const;" << std::endl;

		std::cout << "\t\tName\t\tLength()" << std::endl;

		std::cout << "\ta)\t";
		strOne->WriteToConsole();
		std::cout << "\t" << strOne->Length();

		std::cout << std::endl;

		std::cout << "\tb)\t";
		strTwo->WriteToConsole();
		std::cout << "\t" << strTwo->Length();
		std::cout << std::endl;

		break;

	case 6:
		std::cout << "6) char& CharacterAt(size_t _index);" << std::endl;

		std::cout << "\t\tName\t\t[0]\t[2]\t[5]\t[7]" << std::endl;

		std::cout << "\ta)\t";
		strOne->WriteToConsole();
		std::cout <<
			"\t" << strOne->CharacterAt(0) <<
			"\t" << strOne->CharacterAt(2) <<
			"\t" << strOne->CharacterAt(5) <<
			"\t" << strOne->CharacterAt(7) <<
			"\t";

		std::cout << std::endl;

		std::cout << "\tb)\t";
		strTwo->WriteToConsole();
		std::cout <<
			"\t" << strTwo->CharacterAt(0) <<
			"\t" << strTwo->CharacterAt(2) <<
			"\t" << strTwo->CharacterAt(5) <<
			"\t" << strTwo->CharacterAt(7) <<
			"\t";

		break;
	case 7:
		std::cout << "7) const char& CharacterAt(size_t _index) const;" << std::endl;

		std::cout << "\t\tName\t\t[0]\t[2]\t[5]\t[7]" << std::endl;

		std::cout << "\ta)\t";
		strOne->WriteToConsole();
		std::cout <<
			"\t" << strOne->CharacterAt(0) <<
			"\t" << strOne->CharacterAt(2) <<
			"\t" << strOne->CharacterAt(5) <<
			"\t" << strOne->CharacterAt(7) <<
			"\t";

		std::cout << std::endl;

		std::cout << "\tb)\t";
		strTwo->WriteToConsole();
		std::cout <<
			"\t" << strTwo->CharacterAt(0) <<
			"\t" << strTwo->CharacterAt(2) <<
			"\t" << strTwo->CharacterAt(5) <<
			"\t" << strTwo->CharacterAt(7) <<
			"\t";
		// CODE
		break;
	case 8:
		std::cout << "8) bool EqualTo(const String & _other) const;" << std::endl;

		std::cout << "Are \"";
		strOne->WriteToConsole();
		std::cout << "\" and \"";
		strTwo->WriteToConsole();
		std::cout
			<< "\" equal? "
			<< strTwo->EqualTo(*strOne)
			<< "(1 = yes, 0 = no)"
			<< "\n(can you get the Strings to be equal without changing the code?)" << std::endl;

		break;
	case 9:
		std::cout << "9) String& Append(const String & _str);" << std::endl;

		std::cout << "Enter 1 to append string A to string B.\nEnter 2 to append string B to string A.\n:";

		std::cin >> i;

		if (i == 1)
		{

			strOne->Append(*strTwo);
		}
		else if (i == 2)
		{

			strTwo->Append(*strOne);

		}
		else
		{
			std::cout << "Invalid Entry! Strings remain the same.";
		}
		writeBothStrings(strOne, strTwo);

		break;
	case 10:
		std::cout << "10) String& Prepend(const String & _str);" << std::endl;

		std::cout << "Enter 1 to prepend string A to string B.\nEnter 2 to prepend string B to string A.\n:";

		std::cin >> i;

		if (i == 1)
		{

			strOne->Prepend(*strTwo);
		}
		else if (i == 2)
		{

			strTwo->Prepend(*strOne);

		}
		else
		{
			std::cout << "Invalid Entry! Strings remain the same.";
		}
		writeBothStrings(strOne, strTwo);
		break;
	case 11:
		std::cout << "11) const char* CStr() const;" << std::endl;
		strOne->WriteToConsole();
		std::cout << "\t" << strOne->CStr() << std::endl;

		strTwo->WriteToConsole();
		std::cout << "\t" << strTwo->CStr() << std::endl;

		break;
	case 12:
		std::cout << "12) String& ToLower();" << std::endl;
		std::cout << "Enter 1 to lower the case of string A.\nEnter 2 to lower the case of string B.\n:";

		std::cin >> i;

		if (i == 1)
		{
			strOne->ToLower();
		}
		else if (i == 2)
		{
			strTwo->ToLower();
		}
		else
		{
			std::cout << "Invalid Entry! Strings remain the same.";
		}
		writeBothStrings(strOne, strTwo);

		break;
	case 13:
		std::cout << "13) String& ToUpper();" << std::endl;
		std::cout << "Enter 1 to increase the case of string A.\nEnter 2 to increase the case of string B.\n:";

		std::cin >> i;

		if (i == 1)
		{
			strOne->ToUpper();
		}
		else if (i == 2)
		{
			strTwo->ToUpper();
		}
		else
		{
			std::cout << "Invalid Entry! Strings remain the same.";
		}
		writeBothStrings(strOne, strTwo);

		break;
	case 14:
		
		std::cout << "14) int Find(const String & _str);" << std::endl;

		std::cout << "Is String A a substring of String B? :"; 
		std::cout << std::endl;
		loc = strOne->Find(*strTwo);
		if (loc == -1)
		{
			std::cout << "No, ";
			strTwo->WriteToConsole();
			std::cout << " is not a substring of ";
			strOne->WriteToConsole();
			std::cout << std::endl;
		}
		else
		{
			std::cout << "Yes, ";
			strTwo->WriteToConsole();
			std::cout << " is can be found in ";
			strOne->WriteToConsole();
			std::cout << " at index " << loc << std::endl;
			std::cout << std::endl;
		}


		std::cout << "Is String B a substring of String A? :" << std::endl;

		loc = strTwo->Find(*strOne);
		if (loc == -1)
		{
			std::cout << "No, ";
			strOne->WriteToConsole();
			std::cout << " is not a substring of ";
			strTwo->WriteToConsole();
			std::cout << std::endl;
		}
		else
		{
			std::cout << "Yes, ";
			strOne->WriteToConsole();
			std::cout << " is can be found in ";
			strTwo->WriteToConsole();
			std::cout << " at index " << loc << std::endl;
			std::cout << std::endl;
		}

		break;

	case 15:
		std::cout << "15) int Find(size_t _startIndex, const String & _str);" << std::endl;

		std::cout << "Enter a number you would like to check from (cannot be negative):";
		std::cin >> j;

		std::cout << "Is String A a substring of String B after index " << j << "?" << std::endl;
		std::cout << std::endl;
		loc = strOne->Find(j, *strTwo);
		if (loc == -1)
		{
			std::cout << "No, ";
			strTwo->WriteToConsole();
			std::cout << " is not a substring of ";
			strOne->WriteToConsole();
			std::cout << std::endl;
		}
		else
		{
			std::cout << "Yes, ";
			strTwo->WriteToConsole();
			std::cout << " is can be found in ";
			strOne->WriteToConsole();
			std::cout << " at index " << loc << std::endl;
			std::cout << std::endl;
		}


		std::cout << "Is String B a substring of String A after index " << j << "?" << std::endl;

		loc = strTwo->Find(j,*strOne);
		if (loc == -1)
		{
			std::cout << "No, ";
			strOne->WriteToConsole();
			std::cout << " is not a substring of ";
			strTwo->WriteToConsole();
			std::cout << std::endl;
		}
		else
		{
			std::cout << "Yes, ";
			strOne->WriteToConsole();
			std::cout << " is can be found in ";
			strTwo->WriteToConsole();
			std::cout << " at index " << loc << std::endl;
			std::cout << std::endl;
		}

		break;

	case 16:
		std::cout << "16) String& Replace(const String & _find, const String & _replace);" << std::endl;

		std::cout << "If either string is inside the other, it will be replaced by an untitile'd goose noise";
		
		std::cout << std::endl;
		loc = strOne->Find(*strTwo);
		if (loc == -1)
		{
			strTwo->WriteToConsole();
			std::cout << " is not a substring of ";
			strOne->WriteToConsole();
		}
		else
		{
			std::cout << "Yes, ";
			strTwo->WriteToConsole();
			std::cout << " can be found in ";
			strOne->WriteToConsole();
			std::cout << " and will be replaced." << loc << std::endl;
			std::cout << std::endl;
			strTwo->Replace(*strOne, gooseString);
		}


		std::cout << "Is String B a substring of String A? :" << std::endl;

		loc = strTwo->Find(*strOne);
		if (loc == -1)
		{
			std::cout << "No, ";
			strOne->WriteToConsole();
			std::cout << " is not a substring of ";
			strTwo->WriteToConsole();
			std::cout << std::endl;
		}
		else
		{
			std::cout << "Yes, ";
			strOne->WriteToConsole();
			std::cout << " can be found in ";
			strTwo->WriteToConsole();
			std::cout << " and will be replaced." << loc << std::endl;
			std::cout << std::endl;
			strTwo->Replace(*strOne, gooseString);
		}

		writeBothStrings(strOne, strTwo);

		break;
	case 17:
		std::cout << "17) String& ReadFromConsole();" << std::endl;

		

		holder = strOne->ReadFromConsole();
		std::cout << "New String is: ";
			holder.WriteToConsole();
			std::cout << std::endl;

		break;
	case 18:
		std::cout << "18) String& WriteToConsole();" << std::endl;

		writeBothStrings(strOne, strTwo);

		// CODE
		break;
	case 19:
		std::cout << "19) bool operator==(const String & _other);" << std::endl;
		strOne->WriteToConsole();
		std::cout <<"== ";
		strTwo->WriteToConsole();
		std::cout << " returns: ";
		if ((*strOne) == (*strTwo))
		{
			std::cout << "TRUE";
		}
		else
		{
			std::cout << "FALSE";
		}


		break;
	case 20:
		std::cout << "20) bool operator!=(const String & _other);" << std::endl;
		strOne->WriteToConsole();
		std::cout << "= ";
		strTwo->WriteToConsole();
		std::cout << " returns: ";
		if ((*strOne) != (*strTwo))
		{
			std::cout << "TRUE";
		}
		else
		{
			std::cout << "FALSE";
		}
		break;
	case 21:
		std::cout << "21) String& operator=(const String & _str);" << std::endl;
		strOne->WriteToConsole();
		std::cout << "= ";
		strTwo->WriteToConsole();
		std::cout << " returns: " << std::endl;
		(*strOne) = (*strTwo);

		writeBothStrings(strOne, strTwo);

		break;
	case 22:
		std::cout << "22) char& operator[](size_t _index);" << std::endl;
		
		std::cout << "\t\tName\t\t[1]\t[3]\t[6]\t[8]" << std::endl;

		std::cout << "\ta)\t";
		strOne->WriteToConsole();
		std::cout <<
			"\t" << (*strOne)[1] <<
			"\t" << (*strOne)[3] <<
			"\t" << (*strOne)[6] <<
			"\t" << (*strOne)[8] <<
			"\t";

		std::cout << std::endl;

		std::cout << "\tb)\t";
		strTwo->WriteToConsole();
		std::cout <<
			"\t" << (*strTwo)[1] <<
			"\t" << (*strTwo)[3] <<
			"\t" << (*strTwo)[6] <<
			"\t" << (*strTwo)[8] <<
			"\t";

		break;

	case 23:
		std::cout << "23) const char& operator[](size_t _index) const;" << std::endl;
		std::cout << "\t\tName\t\t[1]\t[3]\t[6]\t[8]" << std::endl;

		std::cout << "\ta)\t";
		strOne->WriteToConsole();
		std::cout <<
			"\t" << (*strOne)[1] <<
			"\t" << (*strOne)[3] <<
			"\t" << (*strOne)[6] <<
			"\t" << (*strOne)[8] <<
			"\t";

		std::cout << std::endl;

		std::cout << "\tb)\t";
		strTwo->WriteToConsole();
		std::cout <<
			"\t" << (*strTwo)[1] <<
			"\t" << (*strTwo)[3] <<
			"\t" << (*strTwo)[6] <<
			"\t" << (*strTwo)[8] <<
			"\t";

		break;

	case 24:
		std::cout << "24) String operator+(const String & _rhs);" << std::endl;
		
		holder = (*strOne)+(*strTwo);

		strOne->WriteToConsole();
		std::cout << " + ";
		strTwo->WriteToConsole();
		std::cout << " = ";
		holder.WriteToConsole();
		std::cout << " (assigned to a new String object).";
		
		break;

	case 25:
		std::cout << "25) String& operator+=(const String & _other);" << std::endl;
		strOne->WriteToConsole();
		std::cout << " += ";
		strTwo->WriteToConsole();
		std::cout << " results in:" << std::endl;
		writeBothStrings(strOne, strTwo);


		break;

	default:

		std::cout << "Number not recognised, exiting program." << std::endl;

		*a = 0;
		break;

	}

	std::cout << std::endl;
	std::cout << std::endl;

}

void writeBothStrings(String* a, String* b) {
	std::cout << "\ta) ";
	a->WriteToConsole();
	std::cout << std::endl;

	std::cout << "\tb) ";
	b->WriteToConsole();
	std::cout << std::endl;
}