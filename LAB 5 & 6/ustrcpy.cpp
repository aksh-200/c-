#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	
	char str1[] = "Hello World!";
	char str2[] = "CDAC";

	char str3[40];
	char str4[40];

	char str5[] = "ROHAN";

	// String copy used
	strcpy(str2, str1);
	strcpy(str3, "Copy successful");
	strcpy(str4, str5);

	// Strings Printed
	cout << "str1: " << str1 << "\nstr2: " << str2
		<< "\nstr3: " << str3 << "\nstr4: " << str4;

	return 0;
}

