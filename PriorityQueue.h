//
// Created by Berat on 4.04.2025.
//
#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#include <list>
#include <vector>

class PriorityQueue
{
private:
    int levels;
    std::vector<std::list<int>> queues;

public:
    explicit PriorityQueue(int numLevels = 2);
    void insert(int id, int level);
    void moveUp(int id);
    void moveDown(int id);
    void remove(int id);
    void printQueues() const;
};
#endif // PRIORITYQUEUE_H
