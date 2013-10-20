#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

#define NUM 10

using namespace std;

int reduce(long ar[], int n);

int main()
{
  long ar[NUM] = {100,300,40,55,23,40,20,30,30,1000}; 
  printAr(ar, NUM);

  ostream_iterator<long, char> out_iter(cout, " ");
  vector<long> vect;
  for (int i = 0; i < NUM; i++)
    {
      vect.push_back(ar[i]);
    }

  sort(vect.begin(), vect.end());
  copy(vect.begin(), vect.end(), out_iter);
  cout << endl;

  unique(vect.begin(), vect.end());
  copy(vect.begin(), vect.end(), out_iter);
  cout << endl;

  return 0;
}

void printAr(long ar[], int n)
{
  for (int i = 0; i < n; i++)
    {
      cout << ar[i] << endl;
    }
}
