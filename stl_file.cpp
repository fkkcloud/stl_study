#include <vector>
#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <iterator>

using namespace std;

void showResult(const string & str);

int main()
{
  ifstream myfile;
  myfile.open("words.txt");
  vector <string> vector_words;
  string str;

  while (myfile >> str)
    {
      vector_words.push_back(str);
    }
  myfile.close();

  // 01 print with general for-loop
  for (int i = 0; i < vector_words.size(); i++)
    {
      cout << vector_words[i] << endl;
    }

  // 02 print with ostream iterator and copy()
  ostream_iterator<string, char> out_iter(cout, " ");
  copy(vector_words.begin(), vector_words.end(), out_iter);
  cout << endl;

  // 03 print with for_each algorithm and function
  for_each(vector_words.begin(), vector_words.end(), showResult);
  cout << endl;

  return 0;
}

void showResult(const string & str)
{
  cout << "Word: " << str << endl;
}
