// queue.cpp
#include "queue.h"
#include <cstdlib>
#include <iostream>

// Queue methods
Queue::Queue(int qs) : qsize(qs)
{
  first = last = NULL;
  items = 0;
}

Queue::~Queue()
{
  Node * tmp;
  while (first != NULL)
    {
      tmp = first;
      first = first->next;
      delete tmp;
    }
}

bool Queue::isempty() const
{
  return items == 0;
}

bool Queue::isfull() const
{
  return items == qsize;
}

int Queue::queuecount() const
{
  return items;
}

bool Queue::enqueue(int item)
{
  if (isfull())
    return false;
  Node * add = new Node; // dynamically allocated
  if (add == NULL)
    return false;
  add->item = item;
  add->next = NULL;
  items++;
  if (first == NULL)
    first = add;
  else
    last->next = add;
  last = add;
  return true;
}

bool Queue::dequeue()
{
  if (first == NULL)
    return false;
  items--;
  Node *tmp = first;
  first = first->next;
  delete tmp;
  if (items == 0)
    last = NULL;
  return true;
}

void Queue:: printQueue()
{
  Node *tmp = new Node;
  tmp = first;
  for (int i = 0; i < items; i++)
    {
      std::cout << tmp->item << std::endl;
      tmp = tmp->next;
    }
  std::cout << std::endl;
}
