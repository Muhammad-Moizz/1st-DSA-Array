#pragma once


class Array
{

private:

	int* arr;
	int count;
	int capacity;


public:

	// constructors 

	Array();
	Array(int, int);
	//Array(const Array&);

	//destructors
	~Array();

	// mutators 

	void set_count(int);
	void set_capacity(int);

	// accessors 

	int get_count();
	int get_capacity();

	// member functions 

	void add(int);
	void index_at(int);
	void insert_at_first(int);
	int linear_search(int);
	int binary_search(int);
	void update(int, int);
	void Delete(int);
	void Delete_permanent(int);
	void Bubble_Sorting();
	void reset(int);
	void back();
	void front();
	void display();
	



};