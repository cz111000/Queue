#include "LinkedList.cpp"

template<class T>
class Queue
{
private:
	LinkedList<T>* list;
public:
	Queue();
	~Queue();
	void push(T &object);
	T pop();
	bool isEmpty();
	int size();
};