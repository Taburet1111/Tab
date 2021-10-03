#include "Header1.h"
#include <iostream>

void Queue::push(int num)
{
	q.push_back(num);
}

bool Queue::empty()
{
	
	return q.empty() ;
}
int Queue::front()
{
	return q.front();
}
int Queue::back()
{
	return q.back();
}
void Queue::pop()
{
	q.erase(q.begin());
}
