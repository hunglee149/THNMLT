#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool checkVowel(char c)
{
	c = tolower(c);
	if (c == 'u' || c == 'e' || c == 'o' || c == 'a' || c == 'i') return true;
	return false;
}

string makeSpoonerism(string twoWords)
{
	string s1, s2;

	int size = twoWords.size();
	
	for (int i = 0; i < size; i++)
	{
		if (twoWords[i] == ' ')
		{
			s1 = twoWords.substr(0, i);
			s2 = twoWords.substr(i + 1, size - i - 1);
		}
	}

	string swap1, swap2;
	
	for (int i = 0; i < s1.size(); i++)
	{
		if (checkVowel(s1[i]))
		{
			swap1 = s1.substr(i, s1.size() - i);
			s1.erase(i,s1.size() - i);
			break;
		}
	}
	for (int i = 0; i < s2.size(); i++)
	{
		if (checkVowel(s2[i]))
		{
			swap2 = s2.substr(i, s2.size() - i);
			s2.erase(i,s2.size() - i);
			break;
		}
	}

	s1 += swap2;
	s2 += swap1;
	string s = s1 + " " + s2;
	return s;
}

int main()
{
	if (fopen("test.txt","r"))
	{
	    freopen("test.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	}
	
	string test;
	getline(cin, test);

	cout << makeSpoonerism(test);
}
