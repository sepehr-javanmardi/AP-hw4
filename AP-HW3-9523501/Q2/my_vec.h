#ifndef MY_VEC_H
#define MY_VEC_H


class my_vec{
public:
	int* element;
	size_t capacity{};
	size_t size;

	my_vec(int n);
	my_vec(const my_vec&);
	my_vec(my_vec&&);
	~my_vec();
	void push_back(int a);
	void pop_back();
	void show();
	bool operator<(const my_vec&) const ;
	bool operator==(const my_vec&) const ;
	my_vec operator+(const my_vec&);
	my_vec& operator=(const my_vec&);
	my_vec& operator=(my_vec&&);
	my_vec operator*(const my_vec&);
};


#endif