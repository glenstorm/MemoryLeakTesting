#include <iostream>

template< size_t N, size_t M>
class SomeClass
{
public:
	SomeClass()
	{
		std::cout << "Default ctor!!!" << std::endl;
		x1 = new char[ N ];
		x2 = new char[ N * M ];
	}

	SomeClass( const SomeClass& copy )
	{
		std::cout << "Copy ctor!!!" << std::endl;
		x1 = new char[ N ];
		std::copy( copy.x1, copy.x1 + N, x1 );

		x2 = new char[ N * M ];
		std::copy( copy.x2, copy.x2 + ( N * M ), x2 );
	}

	SomeClass& operator=( const SomeClass& copy )
	{
		std::cout << "Assigment!!!" << std::endl;
		delete[] x1;
		x1 = new char[ N ];
		std::copy( copy.x1, copy.x1 + N, x1 );

		delete[] x2;
		x2 = new char[ N * M ];
		std::copy( copy.x2, copy.x2 + ( N * M ), x2 );
	}

	virtual ~SomeClass()
	{
		delete[] x1;
		delete[] x2;
	}

private:
	char *x1;
	char *x2;
};
