#include<iostream>
#include"marray.h"
using namespace std;

Array::Array():count(0),capacity(0),arr(nullptr){}
Array::Array(int c, int cap) :count(c), capacity(cap)
{
	arr = new int[cap];
}
//Array::Array(const Array& other) :count(other.count), capacity(other.capacity)
//{
//	arr = new int[capacity];
//	for (int i = 0; i < count; i++)
//	{
//		arr[i] = other.arr[i];
//	}
//}
Array::~Array()
{
	delete[] arr;
}

// mutators

void Array::set_count(int c)
{
	count = c;
}

void Array::set_capacity(int cap)
{
	capacity = cap;
}

// accessors 

int Array::get_count()
{
	return count;
}

int Array::get_capacity()
{
	return capacity;
}

// member functions

void Array::add(int value)
{
	if (count < capacity)
	{
		arr[count++] = value;
		cout << " Your value is added successfully :)  " << endl;
	}
	else
	{
		cout << " You can not enter the value :( " << endl << endl;
	}
}

int Array::linear_search(int key)
{
	for (int i = 0; i < count; i++)
	{
		if (arr[i] == key)
		{
			return i;
		}
	}

	return -1;
}

void Array::update(int index, int value)
{

		if (index >= 0 && index <= count)
		{
			arr[index] = value;
			cout << " Your value ( " << value << " ) is added to the ( " << index << " ) index in the array :) " << endl << endl;
		}
		else
		{
			cout << " You cant update the array :( " << endl << endl;
		}
}

void Array::reset(int rest)
{
	for (int i = 0; i < count; i++)
	{
		arr[i] = rest;
	}
	
}

void Array::Delete(int index)
{
	if (index >= 0 && index <= count)
	{
		for (int i = index; i < count - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		count--;
		cout << " Your value is deleted successfully :) " << endl << endl;
	}
	else
	{
		cout << " The number you enter doesnt exist :( " << endl << endl;
	}
}

void Array::display()
{
	if (count > 0)
	{
		cout << endl;
		cout << " Your data in an array is : ";
		for (int i = 0; i < count; i++)
		{
			cout << arr[i] << ", ";
		}
		cout << endl;
	}
	else
	{
		cout << " Sorry first insert some values in an array :( " << endl;
	}
	
}

void Array::insert_at_first(int val)
{
	if (count > capacity) 
	{
		return;
	}

	for (int i = count - 1; i >= 0; i--) 
	{
		arr[i + 1] = arr[i];
	}

	arr[0] = val;
	count++;
}
int Array::binary_search(int key)
{
	int start = 0;
	int end = count;

	while (start < end) 
	{
		int mid = start + (end - start) / 2;
		if (arr[mid] == key) 
		{
			return mid;
		}
		else if (arr[mid] > key)
		{
			end = mid;
		}
		else 
		{
			start = mid + 1;
		}
	}
	return -1;
}

void Array::back()
{
	

	if (count >=0)
	{
		cout << endl;
		cout << " Your backward array is : ";
		for (int i = count; i >=0; i--)
		{
			cout << arr[i] << ", ";
		}
		cout << endl;
	}
	else
	{
		cout << " Sorry first insert some values in an array :( " << endl;
	}
}

void Array::front()
{

	if (count > 0)
	{
		cout << endl;
		cout << " Your front array is : ";
		for (int i = 0; i < count; i++)
		{
			cout << arr[i] << ", ";
		}
		cout << endl;
	}
	else
	{
		cout << " Sorry first insert some values in an array :( " << endl;
	}
	
}

void Array::index_at(int index)
{
	if (index >= 0 && index <=count)
	{
		cout << " Your element at the index : " << index << " is ( " << arr[index] << " ) " << endl;
	}
	else
	{
		cout << " Sorry not fount :( " << endl;
	}
}

void Array::Delete_permanent(int key)
{
	int index = linear_search(key);

	if (index >= 0 && index < count)
	{
		int* temp = new int[count];
		for (int i = 0; i < count; i++)
		{
			temp[i] = (i == index) ? arr[i + 1] : arr[i];
		}

		count--;
		delete[] arr;
		arr = temp;
		temp = nullptr;
	}
	else
	{
		cout << "Sorry, your value is not found :(" << endl;
	}
}

void Array::Bubble_Sorting()
{
	for (int i = 0; i < count - 1; i++) 
	{
		for (int j = 0; j < count - i - 1; j++) 
		{
			if (arr[j] > arr[j + 1]) 
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << " Your array has sorrted :) " << endl;
}
