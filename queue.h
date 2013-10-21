// queue.h
#ifndef QUEUE_H_
#define QUEUE_H_

class Queue
{
 private:
  struct Node { int item; struct Node * next; };
  enum { Q_SIZE = 10 } ; // class can have value only with enum or static
  Node * first;
  Node * last;
  int items;
  const int qsize;

 public:
  Queue(int qs = Q_SIZE);
  ~Queue();
  bool isempty() const;
  bool isfull() const;
  int queuecount() const;
  bool enqueue(int item);
  bool dequeue();
  void printQueue();
};
#endif
