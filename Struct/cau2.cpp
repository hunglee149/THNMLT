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

string rhymeOfWord(string s)
{
	string rhyme;
	
	for (int i = 0; i < s.size(); i++)
	{
		if (checkVowel(s[i]))
		{
			rhyme = s.substr(i, s.size() - i);
			break;
		}
	}
	return rhyme;
}



int findLongestSingleRhyme(string sentences[], int n)
{
	string rhyme[n];
	for (int i = 0; i < n; i++)
	{
		for (int j = sentences[i].size() - 1; j >= 0; j--)
		{
			if (sentences[i][j] == ' ')
			{
				string subs = sentences[i].substr(j + 1, sentences[i].size() - j);
				string rhymeTest = rhymeOfWord(subs);
				rhyme[i] = rhymeTest;
				break;
			}
		}
	}
	int maxRes = 1;
	int i = 0, j = i+1;
	int res = 1;
	while (j < n) // j = 1, n = 6
	{
		if (rhyme[i] == rhyme[j])
		{
			if (j != n - 1)
			{	
				res++;
				j++;
			}
			else
			{
				res++;
				if (res > maxRes)
				{
					maxRes = res;
					break;
				}
				else
				{
					break;
				}
			}
		}
		else
		{
			if (res > maxRes)
			{
				maxRes = res;
				i = j;
				j = i + 1;
				res = 1;
			}
			else
			{
				i = j;
				j = i + 1;
				res = 1;
			}
		}
	}
	return maxRes;
}

int findLongestDoubleRhyme(string sentences[], int n)
{
	string a[n];

	for (int i = 0; i < n; i++)
	{
		string twoLastWords = "";
		int cnt = 0;
		for (int j = sentences[i].size() - 1; j >= 0; j--)
		{
			if (sentences[i][j] == ' ')
			{
				cnt++;
				if (cnt == 2)
				{
					string subs = sentences[i].substr(j + 1, sentences[i].size() - j);
					int size = subs.size();
					string s1, s2;
					for (int it = 0; it < size; it++)
					{
						if (subs[it] == ' ')
						{
							s1 = subs.substr(0, it);
							s2 = subs.substr(it + 1, size - it - 1);
						}
					}
					twoLastWords = s1 + " " + s2;
					a[i] = twoLastWords;
				}
			}
		}
	}

	string doubleRhyme[n];
	for (int i = 0; i < n; i++)
	{
		string s;
		for (int j = 0; j < a[i].size(); j++)
		{
			if (a[i][j] == ' ')
			{
				string subs1 = a[i].substr(0, j);
				string subs2 = a[i].substr(j + 1, a[i].size() - j);
				
				if (subs1.find("gi") != string::npos) subs1.erase(1, 1);
				if (subs2.find("gi") != string::npos) subs2.erase(1, 1);

				string rhyme1 = rhymeOfWord(subs1);
				string rhyme2 = rhymeOfWord(subs2);
				
				s = rhyme1 + " " + rhyme2;
				//cout << s << endl;
				doubleRhyme[i] = s;
				break;
			}
		}
	}
	int maxRes = 1;
	int i = 0, j = i+1;
	int res = 1;
	while (j < n)
	{
		if (doubleRhyme[i] == doubleRhyme[j])
		{
			if (j != n - 1)
			{	
				res++;
				j++;
			}
			else
			{
				res++;
				if (res > maxRes)
				{
					maxRes = res;
					break;
				}
				else
				{
					break;
				}
			}
		}
		else
		{
			if (res > maxRes)
			{
				maxRes = res;
				i = j;
				j = i + 1;
				res = 1;
			}
			else
			{
				i = j;
				j = i + 1;
				res = 1;
			}
		}
	}
	return maxRes;
}

int main()
{
	if (fopen("test.txt","r"))
	{
	    freopen("test.txt", "r", stdin);
	    freopen("output.txt", "w", stdout);
	}
	int n; cin >> n;
	cin.ignore();
	string a[n];
	for (int i = 0; i < n; i++)
	{
		getline(cin, a[i]);
	}
	cout << findLongestSingleRhyme(a, n);
	cout << endl << findLongestDoubleRhyme(a, n);
}
