#pragma once
template <class T> class MyStack 
{
public:
	MyStack();
	~MyStack();
	void push(T t);
	T pop();
	bool isEmpty();
private:
	T *m_pT;
	int m_maxSize;
	int m_size;
};

//模块类的成员函数定义和该模板类声明放在一起
template<class T>
MyStack<T>::MyStack()
{
	m_maxSize = 100;
	m_size = 0;
	m_pT = new T[m_maxSize];
}

template<class T>
MyStack<T>::~MyStack()
{
	delete[] m_pT;
}

template<class T>
void MyStack<T>::push(T t)
{
	m_size++;
	m_pT[m_size - 1] = t;
}

template<class T>
T MyStack<T>::pop()
{
	T t = m_pT[m_size - 1];
	m_size--;
	return t;
}

template<class T>
bool MyStack<T>::isEmpty()
{
	return m_size == 0;
}

