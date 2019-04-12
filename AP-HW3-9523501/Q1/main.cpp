#include <iostream>
#include"maxheap.h"


int main()
{
	Maxheap h1{};
	h1.add(25);
	h1.add(32);
	h1.add(17);
	h1.add(23);
	h1.add(101);

	h1.printArray();
	std::cout << h1.Parent(2) << std::endl;
	std::cout << h1.LeftChild(0) << std::endl; 
	std::cout << h1.RightChild(0) << std::endl;  


	int arr[7]{ 23, 1, 7, 52, 11, 10, 75 };
	Maxheap h2{ arr, 7 };

	h2.printArray();
	std::cout << "height of the h2 heap = " << h2.getHeight() << std::endl;


	Maxheap h3{ h2 };

	h2.Heapsort();
	h2.printArray();


	std::cout << h3.Max() << std::endl;
	h3.Delete();
	std::cout << h3.Max() << std::endl;
	h3.printArray();


	return 0;
}