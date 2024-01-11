#include<iostream>
#include<string>

class Twelve
{
public:
	Twelve();
	Twelve(const std::initializer_list<unsigned char> &t);
	Twelve(const std::string &t);
	Twelve(const Twelve& other);
	~Twelve() noexcept;

	void print();
	void plus(const Twelve& first, const Twelve& second);
	void minus(const Twelve& first, const Twelve& second);
	bool larger(const Twelve& other);
	bool equivalent(const Twelve& other);
	bool smaller(const Twelve& other);
	
private:
	unsigned char* number;
	size_t size;
};
