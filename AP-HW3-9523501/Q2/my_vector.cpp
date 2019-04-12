#include<iostream>
#include"my_vec.h"

my_vec::my_vec(int n)
{
	size = 1;
	element = new int[size]{n};
}

my_vec::my_vec(const my_vec& vec)
{
	size = vec.size;
	capacity = vec.capacity;
	element = new int[size]{0};
	for(size_t i{}; i < size; i++)
	{
		element[i] = vec.element[i];
	}
}

my_vec::my_vec(my_vec&& vec)
{
	size = vec.size;
	capacity = vec.capacity;
	delete[] element;
	element = vec.element;
	vec.element = nullptr;
}



void my_vec::push_back(int a)
{
	int* temp;
	capacity = size * 2;
	temp = new int[capacity];
	for(size_t i{}; i < size ; i++){
		temp[i] = element[i];
	}
	delete[] element;
	temp[size] = a;
	size++;

	element = new int[capacity];
	for(size_t i{}; i < size ; i++){
		element[i] = temp[i];
	}
	delete[] temp;
}

void my_vec::pop_back()
{
	int* temp;
	capacity = (size - 1) * 2;
	temp = new int[capacity];
	for(size_t i{}; i < size ; i++){
		temp[i] = element[i];
	}
	delete[] element;
	temp[size] = 0;
	size--;

	element = new int[capacity];
	for(size_t i{}; i < size ; i++){
		element[i] = temp[i];
	}
	delete[] temp;
}

bool my_vec::operator<(const my_vec& vec) const
{
	double mag1{};
	double mag2{};

	for(size_t i{}; i < size;i++)
		mag1 = (element[i] * element[i]) + mag1;
	for (size_t i{}; i < vec.size; i++)
		mag2 = (vec.element[i] * vec.element[i]) + mag2;
	
	return mag1 < mag2 ;
}

bool my_vec::operator==(const my_vec& vec) const 
{
	double mag1{};
	double mag2{};

	for(size_t i{}; i < size;i++)
		mag1 = (element[i] * element[i]) + mag1;
	for (size_t i{}; i < vec.size; i++)
		mag2 = (vec.element[i] * vec.element[i]) + mag2;

	return mag1 == mag2 ;
}

my_vec my_vec::operator+(const my_vec& vec)
{
	size_t sum_size{};
	my_vec sum(element[0] + vec.element[0]);

	if(size > vec.size){
		sum_size = size;
		for(size_t i{1}; i < vec.size; i++)
			sum.push_back (element[i] + vec.element[i]);
		for(size_t i{vec.size}; i < sum_size; i++)
			sum.push_back (element[i]);
	}
	else{
		sum_size = vec.size;
		for(size_t i{1}; i < size; i++)
			sum.push_back(element[i] + vec.element[i]);
		for(size_t i{size}; i < sum_size; i++)
			sum.push_back(vec.element[i]);
	}

	return sum;
}

my_vec& my_vec::operator=(const my_vec& vec)
{
	if(this == &vec)
		return *this;
	size = vec.size;
	capacity = vec.capacity;
	delete[] element;
	element = new int[size]{0};
	for(size_t i{}; i < size; i++)
		element[i] = vec.element[i];

	return *this ;
}

my_vec& my_vec::operator=(my_vec&& vec)
{
	size = vec.size;
	capacity = vec.capacity;
	delete[] element;
	element = vec.element;
	vec.element = nullptr;

	return *this;
}

my_vec my_vec::operator*(const my_vec& vec)
{
	size_t ip_size{};
	my_vec ip(element[0] * vec.element[0]);

	if(size > vec.size){
		ip_size = size;
		for(size_t i{1}; i < vec.size; i++)
			ip.push_back (element[i] * vec.element[i]);
		for(size_t i{vec.size}; i < ip_size; i++)
			ip.push_back (0);
	}
	else{
		ip_size = vec.size;
		for(size_t i{1}; i < size; i++)
			ip.push_back(element[i] * vec.element[i]);
		for(size_t i{size}; i < ip_size; i++)
			ip.push_back(0);
	}

	return ip;
}

void my_vec::show(){
	for(size_t i{}; i < size ; i++)
		std::cout << "  " << element[i];
	std::cout << std::endl;
}

my_vec::~my_vec()
{

	delete[] element; 
}