#ifndef QUEUE_H
#define QUEUE_H
#include <vector>

class Queue
{
public:
	void push(int num);
	bool empty();
	int front();
	int back();
	void pop();
	
private:
	std::vector <int> q;
};
#endif