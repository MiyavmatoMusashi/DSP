//
// Created by Berat on 4.04.2025.
//

#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H

class PriorityQueue {
    private:
        std::vector<std::queue<int>> levels;
        int numLevels;

    public:
        PriorityQueue(int levels = 2); //add by berat note: ther is two level only for now it can change
        void insert(int id, int level);

};
#endif //PRIORITYQUEUE_H
