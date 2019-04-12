#ifndef MXHEAP
#define MXHEAP

#include <iostream>

class Maxheap;
void max_heapify(int*, int, int, int);
void build_max_heap(int*, int, int);

class Maxheap
{
public:
	Maxheap();
	Maxheap(int);
	Maxheap(int*, int);
	Maxheap(const Maxheap&);
	void add(int);
	void Delete();
	int Max();
	int getHeight();
	int Parent(int);
	int RightChild(int);
	int LeftChild(int);
	int operator[](int);
	void Heapsort();
	void printArray();
	int height{};
	int* value;
	int length{};
	~Maxheap();
};


#endif