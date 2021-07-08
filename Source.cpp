#include<iostream>
#include<string.h>
#include<string>
//#include<boost/algorithm/string.hpp>
using namespace std;
class CustomString
{
private:
	char* myString;
public:
	CustomString()
	{
		myString = nullptr;
	}
	CustomString(char* ptr)
	{
		myString = ptr;
	}
	CustomString(const CustomString& cc)
	{
		//myString = cc.myString;
		myString = cc.myString;
	}
	void setCustomString(char* ptr)
	{
		myString = ptr;
	}
	char* getCustomString()const
	{
		return myString;
	}
	bool isEqualTo(CustomString c)
	{
		bool check = true;
		for (int i = 0; myString[i] != '\0' && c.myString[i] != '\0'; i++)
		{
			if (myString[i] != c.myString[i])
				check = false;
		}
		if (check == false)return false;
		else return true;
	}
	int length()
	{
		int count = 0;
		for (int i = 0; myString[i] != '\0'; i++)
		{
			count++;
		}
		return count;
	}
	bool isEmpty()
	{
		bool check = true;
		for (int i = 0; myString[i] != '\0'; i++)
		{
			if (myString[i] != '0')check = false;
		}
		if (check == false)return false;
		else return true;
	}
	int lastIndexOf(char ch)
	{
		int index = 0, check = 0;
		for (int i = 0; *(myString+i) != '\0'; i++)
		{
			if (*(myString + i) == ch)
			{
				check = 1;
				index = i;
			}
		}
		if (check == 1)
		{
			cout << "Index is " << index << endl;
			return index;
		}
		else if (check == 0)
		{
			cout << "Character does not exist in string " << endl;
			return -1;
		}
	}
	CustomString replace(char *oldChar, char *newChar)
	{
		 int count = 0;
		 cout << "Before Repalacement Old String was : " << (oldChar) << endl;
		 cout << "Before Replacement New String was : " << (newChar) << endl;
			oldChar = newChar;
		this->myString = oldChar;
		return *this;
	}
};
string rtrim(string& s, char c)
{
	string::iterator p;
	for (p = s.end(); p != s.begin() && *--p == c;);
	if (*p != c)p++;
	s.erase(p, s.end());
	return s;
}
string ltrim(string& s, char c)
{
	string::iterator p;
	for (p = s.begin(); p != s.end() && *p++ == c;);
	if (*p != c)p--;
	s.erase(s.begin(), p);
	return s;
}
int main()
{
	char c[30];
	cout << "Enter your string : ";
	cin >> c;
	CustomString str;
	str.setCustomString(c);
	CustomString str1;
	str.lastIndexOf('u');
	char c1[] = { "Hussain" };
	str.replace(c, c1);
	str1.setCustomString(c1);
	cout << "After Replacement My String becomes : " << str.getCustomString() << endl;
	cout << str.isEmpty() << endl;
	cout << str.length() << endl;
	cout << str.isEqualTo(str1);
	return 0;
}
	//string s = "     ALi is a good boy     ";
	///*string s1;
	//s1.assign(s);
	//cout << s1;*/
	//cout << s << endl;
	//cout << s.size() << endl;
	//rtrim(s, ' ');
	//cout << s << endl;
	//cout << s.size() << endl;
	//ltrim(s, ' ');
	//cout << s << endl;
	//cout << s.size() << endl;