#include "Vector.h"
#include <iostream>
using namespace std;

//constructor 
Vector::Vector(int size1) 
{
	size = 0;
	capacity = size1;
	data = new int[capacity];
}
//copy constructor
Vector::Vector(const Vector& p)
{
	capacity = p.capacity;
	size = p.size;
	data = new int[capacity];
	for (int i = 0; i < size; i++)
	{
		data[i] = p.data[i];
	}
}

// destructor
Vector::~Vector()
{
	if (data)
		delete[] data;

}

// A method that returns its value
int Vector::getCapacity()
{
	return capacity;
}

//A method that returns its value
int Vector::getSize()
{
	return size;
}

//The method prints the vector data: maximum size, actual size, and vector values.
void Vector::print()
{
	cout << "capacity: " << capacity << " size: " << size << " values: ";
	for (int i = 0; i < size; i++)
	{
		cout << data[i] << " ";
	}
	cout << endl;
}
// A method accepts as an additional vector parameter and changes the current vector to be the same as the obtained vector.
void Vector::assign(const Vector& second)
{
	capacity = second.capacity;
	data = new int[capacity];
	for (int i = 0; i < capacity; i++)
	{
		data[i] = second.data[i];
	}
}
/*A method that accepts as an additional vector parameter and returns true when the two vectors are identical both in their full current size and their content. Otherwise you will return false.*/
bool Vector::isEqual(const Vector& second)
{
	if (size == second.size)
	{
		for (int i = 0; i < capacity; i++)
		{
			if (data[i] != second.data[i])
				return false;
		}
		return true;
	}
	return false;

}
//A method that receives an index for placing and returning a value in a requested vector cell. 
//If the requested cell is not in the range of the full cells in the array, ERROR must be printed and the first organ returned as a parameter.
int& Vector::at(int index)
{
	if(index > size -1 || index < 0)
	{
		cout << "ERROR" << endl;
		return data[0];
	}
	return data[index];
}
/*A method that accepts as an additional vector parameter and performs a scalar product between two vectors. If the two vectors do not have the same number of values, type ERROR and return -1.*/
int  Vector::strcatcat(const Vector& second)
{
	if (size != second.size)
	{
		cout << "ERROR" << endl;
		return -1;
	}
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		 sum += data[i] * second.data[i];
	}
	return sum;
}
//A method whose function is to empty the vector (emptying values).
Vector	Vector::strnewcat(const Vector& second)
{  
	int s = size + second.size;
	Vector v(2 * s);
	v.size = s;
	for (int i = 0; i < size; i++)
	{
		v.data[i] = data[i];
	}
	for (int i = size; i < second.size; i++)
	{
		v.data[i] = second.data[i- size];
	}
	
	return v;
}
//A method that deletes the last member of the vector. If the vector is blank (ERROR) ERROR should be printed.
void	Vector::clear()
{
	delete[] data;
	size = 0;
	data = NULL;
}
//A method that deletes the last member of the vector. If the vector is blank (ERROR) ERROR should be printed.
void	Vector::delLast()
{
	if (!data)
	{
		cout << "ERROR" << endl;
		return;
	}
	size--;
	int* data1 = new int[capacity];
	for (int i = 0; i < size; i++)
	{
		data1[i] = data[i];
	}
	delete[] data;
	data = data1;
}
//A method that places the val value in the next available space in the array.If the array is full it increases
//The array is twice its current size, the values ??must be copied from the original array to the new assigned arrayand the original array must be freed from memory.
void	Vector::insert(int val)
{
	int* data1;
	if (capacity > size)
	{
		data[size] = val;
		size++;
		return;
	}
		capacity *= 2;
		data1 = new int[capacity];
		for (int i = 0; i <size; i++)
		{
			data1[i] = data[i];
		}
		data1[size] = val;
		size++;
		delete[] data;
		data = data1;
	
	data[size++] = val;
}
