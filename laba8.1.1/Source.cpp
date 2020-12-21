// Дано літерний рядок, який містить послідовність символів s[0], ..., s[n], ...
// 1) вияснити число входжень в послідовність групи букв "abc".
// 2) замінити кожну групу букв "abc" парою зірочок "**".

#include <iostream>

using namespace std;

bool Contain(char* str, char* q, char* q1)
{
	int j, k;
	for (int i = 0; str[i] != '\0'; i++)
	{
		j = 0;
		k = 0;
		while (q[j] != '\0')
		{
			if ((str[k] == q[i] || str[k] == q1[j] && str[k] != '\0'))
			{
				j++;
				k++;
			}
			else
				break;
		}
		if (q[j] == '\0')
			return true;
	}
	return false;
}

int main()
{
	char* str = new char[102];

	cout << "Enter string:" << endl;
	cin.getline(str, 100);

	char q[] = "abc";
	char q1[] = "abc";
	if (Contain(str, q, q1))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	return 0;
}
