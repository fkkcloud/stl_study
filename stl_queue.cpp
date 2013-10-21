#include <queue>
#include <iostream>

int main()
{
  std::queue<int> q1;
  
  for (int i = 0; i < 10; i++)
    {
      q1.push(i);
    }

  std::queue<int> q1_copy;
  q1_copy = q1; // deep copy
  while( q1_copy.empty() == false )
    {
      int tmp = q1_copy.front();
      std::cout << tmp << std::endl;
      q1_copy.pop();
    }
  return 0;
}

