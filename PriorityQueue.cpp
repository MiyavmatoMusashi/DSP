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
  if (level < 0 || level >= levels) {
      cerr<< "Invalid level: " << level <<endl;
    return;
  }

  // If this id exists at every level, delete it
  for (auto& queue : queues) {
    queue.remove(id);
  }

  // Add to relevant level
  queues[level].push_back(id);
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
  for (int i = 0; i < levels; ++i) // Check all levels
  {
    auto &queue = queues[i];
    auto it = find(queue.begin(), queue.end(), id);

    if (it != queue.end())
    {
      if (i == levels - 1) // If it is already at the lowest level (Q2)
      {
        return; // Cannot go any lower level
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
   for (auto &queue : queues)
  {
    queue.remove(id); // The remove function of std::list finds and removes the ID
  }
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