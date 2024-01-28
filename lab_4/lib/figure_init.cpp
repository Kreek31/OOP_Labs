#include<iostream>
#include<string>
#include<math.h>
template <typename T> class Figure
{
public:
	virtual void geometricCenter() = 0;
	virtual std::ostream& operator <<(std::ostream&) = 0;
	virtual std::istream& operator >>(std::istream&) = 0;
	virtual operator double() = 0;
};




