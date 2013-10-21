// usingQueue.cpp
#include "queue.h"
#include <iostream>

int main()
{
  Queue que(20);
  if (que.isempty())
    std::cout << "Queue is empty\n";

  for (int i = 1; i < 50; i=i+5)
    {
      que.enqueue(i);
    }
  que.printQueue();

  std::cout << " Queue Item Count: "  << que.queuecount() << std::endl;
  std::cout << std::endl;

  que.dequeue();
  que.dequeue();
  que.printQueue();

  std::cout << " Queue Item Count: "  << que.queuecount() << std::endl;
  std::cout << std::endl;
  
  return 0;
}
