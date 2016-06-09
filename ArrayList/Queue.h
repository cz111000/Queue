#include "ArrayList.cpp"

template<class T>
class Queue
{
private:
	ArrayList<T>* list;
public:
	Queue();
	~Queue();
	void push(T &object);
	T pop();
	bool isEmpty();
	int size();
};