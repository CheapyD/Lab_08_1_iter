#include <iostream>

using namespace std;

int Find(const char* str, const char ch)
{
	int k = 0;
	int number = -1;
	for (int i = (strlen(str) - 1); i >= 0; i--)
	{
		if (ch == str[i])
			k++;
		if (k == 4)
		{
			number = i;
			break;
		}
	}
	return number;
}

char* Change(char* str, const char ch)
{
	char* tmp = new char[strlen(str) * 2 / 1 + 1];
	char* t = tmp;

	tmp[0] = '\0';
	int i = 0;
	while (str[i] != 0)
	{
		if (ch == str[i])
		{
			strcat_s(t, 3, "**");
			t += 2;
			i += 1;
		}
		else
		{
			*t++ = str[i++];
			*t = '\0';
		}
	}
	*t++ = str[i++];
	*t++ = str[i++];
	*t = '\0';
	strcpy_s(str, strlen(tmp) + 1, tmp);
	return tmp;
}


int main()
{
	char str[101];
	char ch = '.';
	cout << "Enter string:" << endl;
	cin.getline(str, 100);

	cout << "Length = " << strlen(str) << endl;
	cout << "i = " << Find(str, ch) << endl;

	char* dest = new char[151];
	dest = Change(str, ch);

	cout << "Modified string (param) : " << str << endl;
	cout << "Modified string (result): " << dest << endl;

	system("pause");
	return 0;
}
