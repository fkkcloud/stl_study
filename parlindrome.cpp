#include <cctype>
#include <string>
#include <iostream>

using std::string;
using std::toupper;

#define NUM 4

void toUpperString(string & st, string & target);
bool palindrome(const string & st);

int main()
{
  string tmp[NUM];
  string st[NUM] = { "anna",
		   "jinny",
		   "Tomot",
		   "Power"};

  for (int i = 0; i < NUM; i++)
    {
      toUpperString(st[i], tmp[i]);
      string upperStr = tmp[i];
      if (palindrome(upperStr))
	{
	  std::cout << upperStr << " is parlindrome."  << std::endl;
	} else {
	std::cout << upperStr << " is NOT parlindrome." << std::endl;
      }
      std::cout << "\n";
    }
  return 0;
}

void toUpperString(string & st, string & target)
{
  string word = "";
  for (int i = 0; i < st.size(); i++)
    {
      word+= toupper(st[i]);
    }
  target = word;
}

bool palindrome(const string & st)
{
  int iter = st.size() / 2;
  int j = st.size()-1;
  for (int i = 0; i < iter; i++)
    {
      std::cout << st[i] << " vs " << st[j] << std::endl;
      if ( st[i] != st[j] ) return false;
      j--;
    }
  return true;
}
