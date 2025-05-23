// Berat_Ermiş_2304010804
// Berker_Efe_Kendirli_2304010579
// Mohamed_Hisham_23040010961
#include "PriorityQueue.h"
#include <iostream>
using namespace std;

int main()
{
  int i=8; // MoveUp
  int j=3; // MoveDown
  int k=1; // MoveDown
  int l=1; // MoveUp
  int m=21;  // Remove
  int n=1;   // Remove

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
  cout << "\nmoveUp("<<i<<"):" << endl;
  pq.moveUp(i);
  pq.printQueues();

  cout << "\nmoveDown("<<j<<" & "<<k<<"):" << endl;
  pq.moveDown(j);
  pq.moveDown(k);
  pq.printQueues();

  cout << "\nmoveUp("<<l<<"):" << endl;
  pq.moveUp(l);
  pq.moveUp(l);
  pq.printQueues();

  cout << "\nremove("<<m<<" & "<<n<<"):" << endl;
  pq.remove(m);
  pq.remove(n);
  pq.printQueues();

  system("pause");
  return 0;
}
