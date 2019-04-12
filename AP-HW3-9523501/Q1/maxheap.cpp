#include <iostream>
#include <cmath>
#include "maxheap.h"

void max_heapify(int* arr, int n)
{
	int temp{};
	for (int i{n-1}; i > 0; i--)
	{
		int p{};
		p = static_cast<int>((i-1) / 2); 
		if(arr[i] > arr[p])
		{
			temp = arr[p];
			arr[p] = arr[i];
			arr[i] = temp;
		}
	}
}

void build_max_heap(int* arr, int n , int height)
{	

	for(int i{}; i < height ;i++)
	{	
		max_heapify(arr,n);
	}
}

Maxheap::Maxheap(int* arr, int n)
{
	for (int i{}; i < n; i++)
	{
		if(n < static_cast<int>(std::pow(2,i)))
		{
			height = i-1;
			break;
		}
	}
	length = n;
	value = new int[length];
	build_max_heap(arr,n,height);
	for (int i{}; i < n; i++)
	{
		value[i] = arr[i];
	}
}

Maxheap::Maxheap()
{
	value= nullptr;
	length = 0;
	height = 0;
}

Maxheap::Maxheap(const Maxheap& m)
{
	this->length = m.length;
	this->height = m.height;

	value = new int[length];

	for (int i{}; i < length; i++)
	{
		this->value[i] = m.value[i];
	}
}

Maxheap::Maxheap(int i)
{
	length = 1;
	value = new int[length];
	value[0] = i;
	this->height = 1;
}

void Maxheap::add(int node)
{
	int* temp;	
	length++;
	for (int i{}; i < length; i++)
	{
		if(length < static_cast<int>(std::pow(2,i)))
		{
			height = i-1;
			break;
		}
	}
	if (value != nullptr)
	{
		temp = new int[length];
		for(int i{}; i < length-1; i++)
		{
			temp[i] = value[i];
		}
		temp[length-1] = node;
		delete[] value;
		value = new int[length];
		for(int i{}; i < length; i++)
		{
			value[i] = temp[i];
		}
		delete[] temp;
	}
	else
	{
		value = new int;
		value[length - 1] = node;
	}
	build_max_heap(value,length,height);
}
void Maxheap::Delete()
{
	length--;
	for (int i{}; i < length; i++)
	{
		if(length < static_cast<int>(std::pow(2,i)))
		{
			height = i-1;
			break;
		}
	}
	int* temp;
	temp = new int[length];
	for (int i{length}; i > 0 ; i--)
	{
		temp[i-1]=value[i];
	}
	delete value;
	value = new int[length];
	for (int i{}; i < length; i++)
	{
		value[i] = temp[i];
	}
	delete[] temp;
	build_max_heap(value,length,height);
}

int Maxheap::Max()
{
	return value[0];
}

int Maxheap::getHeight()
{
	return height;
}

int Maxheap::Parent(int i)
{	
	int p{};
	p = static_cast<int>((i-1) / 2);
	return value[p];
}

int Maxheap::LeftChild(int i)
{
	return value[(2 * i + 1)];
}

int Maxheap::RightChild(int i)
{
	return value[(2 * i + 2)];
}

int Maxheap::operator[](int i)
{
	return value[i];
}

void Maxheap::Heapsort()
{
	build_max_heap(value, length, height);
}

void Maxheap::printArray()
{	
	int m{};
	int n{};
	for (int i{}; i < length; i++)
	{
		m++;
		std::cout << value[i] <<" ";
		if(m == static_cast<int>(std::pow(2,n)))
		{
			n++;
			m = 0;
			std::cout << std::endl;
		}
	}
	std::cout << std::endl;
}

Maxheap::~Maxheap()
{
	delete value;
}
