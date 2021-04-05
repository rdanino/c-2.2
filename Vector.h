#pragma once
class Vector
{
	//Department definition
private:
	int* data;
	int capacity;
	int size;
public:
	Vector(int size1 = 2);//constructor 
	Vector(const Vector& p);//copy constructor
	~Vector(); // destructor
	int getCapacity();//A method that returns its value.
	int getSize();//A method that returns its value.
	void print();//The method prints the vector data: maximum size, actual size, and vector values.
	void assign(const Vector& second);// A method accepts as an additional vector parameter and changes the current vector to be the same as the obtained vector.
    bool isEqual(const Vector& second);//A method that accepts as an additional vector parameter and returns true when the two vectors are identical both in their full current size and their content. Otherwise you will return false.
	int& at(int index);//A method that receives an index for placing and returning a value in a requested vector cell. If the requested cell is not in the range of the full cells in the array, ERROR must be printed and the first organ returned as a parameter.
		int	strcatcat(const Vector& second);//A method that accepts as an additional vector parameter and performs a scalar product between two vectors. If the two vectors do not have the same number of values, type ERROR and return -1.
		Vector	strnewcat(const Vector& second);//Method for threading two vectors. The method takes another vector as a parameter and produces (and returns) a new vector whose content is a thread of 2 vectors, with the current one first and the one obtained second.
		void	clear();//A method whose function is to empty the vector (emptying values).
		void	delLast();//A method that deletes the last member of the vector. If the vector is blank (ERROR) ERROR should be printed.
		void	insert(int val);//A method that places the val value in the next available space in the array.If the array is full it increases
			//The array is twice its current size, the values ??must be copied from the original array to the new assigned arrayand the original array must be freed from memory.
};


