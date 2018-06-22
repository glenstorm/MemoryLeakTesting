#include <SomeClass.h>

int main()
{
	SomeClass<1024, 1024> s1;
	SomeClass<1024, 1024> s2 = s1;
	s1 = s2;
	return 0;
}
