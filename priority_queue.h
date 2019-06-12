#include <queue>

class TemplatePriorityQueue {
private:
	std::priority_queue<int> storage_;
public:
	TemplatePriorityQueue() {};
	~TemplatePriorityQueue() {};
	bool Empty() const;
	const int& Top() const;
	int Size() const;
	void Push(const int&);
	void Pop();
};
