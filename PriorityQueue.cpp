#include "PriorityQueue.h"
#include <iostream>
#include <algorithm>
#include <stdexcept>
using namespace std;

PriorityQueue::PriorityQueue(int numLevels) : levels(numLevels)
{
  if (numLevels <= 0)
  {
    throw invalid_argument("Priority levels must be positive");
  }
  queues.resize(numLevels);
}

void PriorityQueue::insert(int id, int level)
{
}

void PriorityQueue::moveUp(int id)
{
  for (int i = 0; i < levels; ++i)
  {
    auto &queue = queues[i];
    auto it = find(queue.begin(), queue.end(), id);

    if (it != queue.end())
    {
      if (i == 0)
      {
        // Already at highest priority
        return;
      }
      queue.erase(it);
      queues[i - 1].push_back(id);
      return;
    }
  }
  throw runtime_error("ID not found in any queue");
}

void PriorityQueue::moveDown(int id)
{
  for (int i = 0; i < levels; ++i) // Tüm seviyeler kontrol edilsin
  {
    auto &queue = queues[i];
    auto it = find(queue.begin(), queue.end(), id);

    if (it != queue.end())
    {
      if (i == levels - 1) // Zaten en alt seviyedeyse (Q2)
      {
        return; // Aşağı inemez
      }
      queue.erase(it);
      queues[i + 1].push_back(id); // Bir alt seviyeye taşı
      return;
    }
  }
  throw runtime_error("ID not found in any queue");
}

void PriorityQueue::remove(int id)
{
}

void PriorityQueue::printQueues() const
{
  for (int i = 0; i < levels; ++i)
  {
    cout << "Q" << i << ": ";
    for (const auto &id : queues[i])
    {
      cout << id << " ";
    }
    cout << endl;
  }
}