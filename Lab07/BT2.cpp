#include <iostream>
using namespace std;

#define MAX 100
#define xdg endl

string reverseString(string s)
{
    int ssize = s.length();
    string rs = "";
    for (int i = ssize - 1; i >= 0; i--)
    {
        rs+=s[i];
    }
    return rs;
}

void setString(string &s)
{
    getline(cin, s);
}

void printString(string s)
{
    cout << s << xdg;
}

void printReverseString(string s)
{
    string rs = reverseString(s);
    cout << rs << xdg;
}

int checkSymmertricString(string s)
{
    int ssize = s.length();
    int cnt = 0;
    if (ssize % 2 == 0)
    {
        for (int i = 0; i < ssize/2; i++)
        {
            if (s[i] == s[ssize - i - 1])
            {
                cnt++;
            }
        }
        if (cnt == ssize/2) return 1;
        return 0;
    }
    else
    {
        for (int i = 0; i < (ssize - 1)/2; i++)
        {
            if (s[i] == s[ssize - i - 1])
            {
                cnt++;
            }
            if (cnt == ssize/2) return 1;
            return 0;
        }
    }
}

int countOcurrencesChar(string s, char c)
{
    int countChar = 0;
    int ssize = s.length();
    for (int i = 0; i < ssize; i++)
    {
        if (s[i] == c) countChar++;
    }
    return countChar;
}

int findMostFrequentChar(string s)
{
    int ssize = s.length();
    char chr;
    int maxFreq = 0, dem;
    for (char ci = 'A'; ci <= 'z'; ci++)
    {
        if ((ci >= 'A' && ci <= 'Z') || (ci >= 'a' && ci <= 'z'))
        {
            dem = 0;
            for (int i = 0; i < ssize; i++)
            {
                if (s[i] == ci)
                {
                    dem++;
                }
            }
            if (dem > maxFreq)
            {
                maxFreq = dem;
                chr = ci;
            }
        }
    }
    return maxFreq;
}

void insertCharAtPosition(char str[], char chr, int pos)
{

}

void formatNumberWithCommas(string s)
{
    string rs = reverseString(s);

    for (int i = 3; i < rs.length(); i+=4)
    {
        rs.insert(rs.begin() + i, ',');
    }
    string rrs = reverseString(rs);
    cout << rrs;
}

int main()
{
    string s;
    setString(s);

    formatNumberWithCommas(s);
    return 0;
}
