#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <stdint.h>
# include <iostream>
# include <exception>
# include <cstring>
# include <cstdlib>

template <typename T>
class Array
{
	private:
		unsigned int _size;
		T   *ptrArray;

	public:
		Array(void): _size(0), ptrArray(NULL) {std::cout << "Array default constructor" << std::endl;};
		Array(unsigned int n) : _size(n)
		{
			ptrArray = new T[_size];

			if(ptrArray == NULL)
			{
				std::cout << "Error: memory allocation" << std::endl;
				throw ArrayNullException();
			}
			std::cout << "Array constructor" << std::endl;
		};

		Array(Array const &rhs)
		{
			std::cout << "Array coppy constructor" << std::endl;
			if (rhs.ptrArray == NULL)
			{
				ptrArray = NULL;
				_size = rhs._size;
			}
			else
			{
				_size = rhs._size;
				ptrArray = new T[_size];
				if (ptrArray != NULL)
				{
					memcpy(static_cast<void *>(ptrArray), static_cast<void *>(rhs.ptrArray), (sizeof(T) * _size));
				}
			}
		};

		Array const &operator=(Array const &rhs){
			std::cout << "Copy assigment operator called" << std::endl;
			if (rhs.ptrArray == NULL)
			{
				rhs.ptrArray = NULL;
				_size = rhs._size;
			}
			else
			{
				_size = rhs._size;
				ptrArray = new T[_size];
				if (ptrArray != NULL)
				{
					memcpy(static_cast<void *>(ptrArray), static_cast<void *>(rhs.ptrArray), (sizeof(T) * _size));
				}
			}
			return(*this);
		};

		~Array(void){
			std::cout << "Array: Destructor" << std::endl;
			delete [] ptrArray;
			ptrArray = NULL;
		};

		T &operator[](unsigned int i) const
		{
			if(ptrArray == NULL)
				throw ArrayNullException();
			else if (i >= _size)
				throw ArrayInvalidIndException();
			return(ptrArray[i]);
		};

		unsigned int size(void) const{
			return (this->_size);
		};

		class ArrayNullException : public std::exception
		{
			virtual char const *what() const throw(){
				return ("Error: NULL");
			}
		};

		class ArrayInvalidIndException : public std::exception
		{
			virtual char const *what() const throw(){
				return ("Error: invalid index");
			}
		};

		void arrayPrint(void) const 
		{
			if (ptrArray != NULL && _size > 0)
			{
				for (unsigned int x = 0; x < _size; x++)
				{
					std::cout << ptrArray[x] << std::endl;
				}
			}
			return ;
		};
};


#endif