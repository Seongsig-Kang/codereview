#include "priority_queue.h"

bool TemplatePriorityQueue::Empty() const {
        return storage.empty();
}

int TemplatePriorityQueue::Size() const {
        return storage.size();
}

const int& TemplatePriorityQueue::Top() const {
        return storage.top();
}

void TemplatePriorityQueue::Pop() {
        storage.pop();
}

void TemplatePriorityQueue::push(const int& val) {
        storage.push(val);
}
