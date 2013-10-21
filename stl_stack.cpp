#include <stack>
#include <iostream>

int main()
{
  std::stack<int> s1;
  
  for (int i = 0; i < 10; i++)
    {
      s1.push(i);
    }

  std::stack<int> s1_copy;
  s1_copy = s1; // deep copy
  while( s1_copy.empty() == false )
    {
      int tmp = s1_copy.top();
      std::cout << tmp << std::endl;
      s1_copy.pop();
    }
  return 0;
}

