#include<iostream>
#include"my_vec.h"
#include<utility>

using namespace std::rel_ops;


int main(){

	my_vec a(7);
	my_vec b(5);
	my_vec f(6);
	my_vec g(0);
	
	for(size_t i{}; i < 20 ; i++)
	{
		a.push_back(i);
	}
	for(size_t i{}; i < 10 ; i++)
	{
		b.push_back(i);
	}

	a.show();

	b.show();

	my_vec c( a * b );

	c.show();

	my_vec d(a);

	d.show();

	f = d + c;

	f.show();
	g = a ;
	g.show();

	if(a < b)
	{
		std::cout << "a is smaller" << std::endl;
	}


	return 0;
}