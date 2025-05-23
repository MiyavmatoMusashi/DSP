//
// Created by Berat on 4.04.2025.
#include "PriorityQueue.h"
#include <iostream>
using namespace std;

int main()
{
  PriorityQueue pq(3);

  // Insert elements into the Q0 priority queue
  pq.insert(7, 0);
  pq.insert(9, 0);
  pq.insert(3, 0);
  pq.insert(24, 0);

  // Insert elements into the Q1 priority queue
  pq.insert(8, 1);
  pq.insert(1, 1);
  pq.insert(2, 1);

  // Insert elements into the Q2 priority queue
  pq.insert(17, 2);
  pq.insert(21, 2);
  pq.insert(4, 2);
  pq.insert(5, 2);
  pq.insert(34, 2);

  // Initial state of the priority queue
  cout << "Initial state:" << endl;
  pq.printQueues();

  // State of the priority queue after moving elements
  cout << "\nmoveUp(8):" << endl;
  pq.moveUp(8);
  pq.printQueues();

  cout << "\nmoveDown(3 & 1):" << endl;
  pq.moveDown(3);
  pq.moveDown(1);
  pq.printQueues();

  cout << "\nmoveUp(1):" << endl;
  pq.moveUp(1);
  pq.moveUp(1);
  pq.printQueues();

  cout << "\nremove(21 & 1):" << endl;
  pq.remove(21);
  pq.remove(1);
  pq.printQueues();

  system("pause");
  return 0;
}