//
// Created by Berat on 4.04.2025.
//
#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

#include <queue>
#include <vector>
using namespace std;

class PriorityQueue {
    private:
        vector<queue<int>> queues;

    public:
        PriorityQueue(int levels = 2); : queues(levels) {};
        PriorityQueue(int user_input); : queues(user_input) {};

};
#endif //PRIORITYQUEUE_H
