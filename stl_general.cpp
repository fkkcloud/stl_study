#include <iostream>
#include <algorithm>

#define NUM 10

using namespace std;

template<class T>
int reduce(T ar[], int n);

template<class T>
void printAr(T ar[], int n);

int main()
{
  // test with long type
  long ar[NUM] = {100,300,40,55,23,40,20,30,30,1000}; 
  printAr(ar, NUM);
  int result = reduce(ar, NUM);
  printAr(ar, result);

  // test with string
  string ars[NUM] = {"Cloud", "Tifa", "RedXIII", "Cid"
		     "Aeris", "Cloud", "Tifa", "Shinji",
		     "Asuka", "Rei"};
  printAr(ars, NUM);
  result = reduce(ars, NUM);
  printAr(ars, result);

  return 0;
}

template<class T>
int reduce(T ar[], int n)
{
  sort(ar, ar+10); // STL Algorithm used
  printAr(ar, NUM); // STL Algorithm used
  return unique(ar, ar+10) - ar; // past-the-end subtracts begin() is length
}

template<class T>
void printAr(T ar[], int n)
{
  for (int i = 0; i < n; i++)
    {
      cout << ar[i] << endl;
    }
  cout << endl;
}
