#include "Queue.h"

template<class T>
Queue<T>::Queue()
{
	list = new LinkedList<T>();
}

template<class T>
Queue<T>::~Queue()
{
	delete list;
}

template<class T>
void Queue<T>::push(T &object)
{
	list->addLast(*new T(object));
}

template<class T>
T Queue<T>::pop()
{
	T temp = list->getFirst();
	list->removeFirst();
	return temp;
}

template<class T>
bool Queue<T>::isEmpty()
{
	return list->size() == 0;
}

template<class T>
int Queue<T>::size()
{
	return list->size();
}