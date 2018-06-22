#include <iostream>
#include <boost/shared_ptr.hpp>
#include <boost/make_shared.hpp>

template< size_t N, size_t M>
class SomeClass
{
public:
	SomeClass()
	{
		std::cout << "Default ctor!!!" << std::endl;
		x1 = boost::make_shared<char[N]>();
		x2 = boost::make_shared<char[N*M]>();
	}

	virtual ~SomeClass()
	{}

private:
	boost::shared_ptr<char[N]>   x1;
	boost::shared_ptr<char[N*M]> x2;
};
