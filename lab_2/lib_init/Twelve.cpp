#include"Twelve.h"

Twelve::Twelve()
{
	number = nullptr;
}

Twelve::Twelve(const std::initializer_list<unsigned char> &t)
{
	std::cout << "Initialized list construction" << std::endl;
	size = t.size();
	number = new unsigned char [size];
	size_t i{0};
	for (auto &c : t){
		if (c < 48 || c > 57){
			if (c != 'a' && c != 'b'){
				throw std::logic_error("inicializer list has invalid symbols");
			}
		}
		number[i++] = c;
	}
}

Twelve::Twelve(const std::string &t)
{
	std::cout << "Copy string construction" << std::endl;
	size = t.size();
	number = new unsigned char [size];
	size_t i {0};
	for (auto &c : t){
		if (c < 48 || c > 57){
			if (c != 'a' && c != 'b'){
				throw std::logic_error("inicializer string has invalid symbols");
			}
		}
		number[i++] = c;
	}
}

Twelve::Twelve(const Twelve& other){
	std::cout << "Copy other constructor" << std::endl;
	size = other.size;
	number = new unsigned char [size];
	for(size_t i{0}; i < size; i++) number[i] = other.number[i];
}

Twelve::~Twelve(){
	std::cout << "Delete called" << std::endl;
	delete number;
	number = nullptr;
	size = 0;
}

void Twelve::print(){
	for(size_t i = 0; i < size; ++i){
		std::cout << number[i];
	}
	std::cout << std::endl;
}

void Twelve::plus(const Twelve& first, const Twelve& second){
	size_t first_sz {first.size};
	size_t second_sz {second.size};
	size_t max_size = first_sz + second_sz;
	int first_convert {0};
	int second_convert {0};
	int result;
	int power {1};
	int digit;
	size_t i {0};
	unsigned char* number_copy = new unsigned char [max_size];
	size = 0;
	
	for (size_t j{0}; j < first_sz; j++){
		if (first.number[j] == 'a') {
			digit = 10;
		} else if (first.number[j] == 'b'){
			digit = 11;
		} else {
			digit = first.number[j] - 48;
		}
		first_convert += digit*power;
		power *= 12;
	}
	power = 1;
	for (size_t j{0}; j < second_sz; j++){
		if (second.number[j] == 'a') {
			digit = 10;
		} else if (second.number[j] == 'b'){
			digit = 11;
		} else {
			digit = second.number[j] - 48;
		}
		second_convert += digit*power;
		power *= 12;
	}
	result = first_convert + second_convert;
	for (size_t j{0}; j < max_size; j++){
		digit = result % 12;
		if (digit == 11){
			number_copy[j] = 'b';
		} else if (digit == 10) {
			number_copy[j] = 'a';
		} else {
			number_copy[j] = digit+'0';
		}
		++size;
		result /= 12;
		if (result == 0){
			break;
		}
	}
	delete number;
	number = new unsigned char [size];
	for (size_t j{0}; j < size; j++){
		number[j] = number_copy[j];
	}
	number_copy = nullptr;
}

void Twelve::minus(const Twelve& first, const Twelve& second){
	size_t first_sz {first.size};
	size_t second_sz {second.size};
	size_t max_size = first_sz + second_sz;
	int first_convert {0};
	int second_convert {0};
	int result;
	int power {1};
	int digit;
	size_t i {0};
	unsigned char* number_copy = new unsigned char [max_size];
	size = 0;
	
	for (size_t j{0}; j < first_sz; j++){
		if (first.number[j] == 'a') {
			digit = 10;
		} else if (first.number[j] == 'b'){
			digit = 11;
		} else {
			digit = first.number[j] - 48;
		}
		first_convert += digit*power;
		power *= 12;
	}
	power = 1;
	for (size_t j{0}; j < second_sz; j++){
		if (second.number[j] == 'a') {
			digit = 10;
		} else if (second.number[j] == 'b'){
			digit = 11;
		} else {
			digit = second.number[j] - 48;
		}
		second_convert += digit*power;
		power *= 12;
	}
	result = first_convert - second_convert;
	for (size_t j{0}; j < max_size; j++){
		digit = result % 12;
		if (digit == 11){
			number_copy[j] = 'b';
		} else if (digit == 10) {
			number_copy[j] = 'a';
		} else {
			number_copy[j] = digit+'0';
		}
		++size;
		result /= 12;
		if (result == 0){
			break;
		}
	}
	delete number;
	number = new unsigned char [size];
	for (size_t j{0}; j < size; j++){
		number[j] = number_copy[j];
	}
	number_copy = nullptr;
}

bool Twelve::larger(const Twelve& other){
	if (other.size < size) {
		//std::cout << "Bigger size" << std::endl;
		return true;
	} else if (other.size > size){
		//std::cout << "smaller size" << std::endl;
		return false;
	}
	for (size_t i{size-1}; i > 0; i--){
		if (number[i] > other.number[i]){
			//std::cout << number[i] << " > " << other.number[i] << std::endl;
			return true;
		} else if (number[i] < other.number[i]){
			//std::cout << number[i] << " < " << other.number[i] << std::endl;
			return false;
		}
	}
	if (number[0] > other.number[0]){
		//std::cout << number[0] << " > " << other.number[0] << std::endl;
		return true;
	} else if (number[0] < other.number[0]){
		//std::cout << number[0] << " < " << other.number[0] << std::endl;
		return false;
	}
	return false;
}

bool Twelve::equivalent(const Twelve& other){
	if (other.size < size) {
		//std::cout << "Bigger size" << std::endl;
		return false;
	} else if (other.size > size){
		//std::cout << "smaller size" << std::endl;
		return false;
	}
	for (size_t i{size-1}; i > 0; i--){
		if (number[i] > other.number[i]){
			//std::cout << number[i] << " > " << other.number[i] << std::endl;
			return false;
		} else if (number[i] < other.number[i]){
			//std::cout << number[i] << " < " << other.number[i] << std::endl;
			return false;
		}
	}
	if (number[0] > other.number[0]){
		//std::cout << number[0] << " > " << other.number[0] << std::endl;
		return false;
	} else if (number[0] < other.number[0]){
		//std::cout << number[0] << " < " << other.number[0] << std::endl;
		return false;
	}
	return true;
}

bool Twelve::smaller(const Twelve& other){
	if (other.size < size) {
		//std::cout << "Bigger size" << std::endl;
		return false;
	} else if (other.size > size){
		//std::cout << "smaller size" << std::endl;
		return true;
	}
	for (size_t i{size-1}; i > 0; i--){
		if (number[i] > other.number[i]){
			//std::cout << number[i] << " > " << other.number[i] << std::endl;
			return false;
		} else if (number[i] < other.number[i]){
			//std::cout << number[i] << " < " << other.number[i] << std::endl;
			return true;
		}
	}
	if (number[0] > other.number[0]){
		//std::cout << number[0] << " > " << other.number[0] << std::endl;
		return false;
	} else if (number[0] < other.number[0]){
		//std::cout << number[0] << " < " << other.number[0] << std::endl;
		return true;
	}
	return false;
}
/*
{
public:
	Twelve(const size_t & n, unsigned char t = 0);
	Twelve(const initializer_list< unsigned char> &t);
	Twelve(const string &t);
	
	Twelve(const &Twelve other);
	Twelve(&&Twelve other) noexcept;
	virtual ~Array() noexcept;
}
*/
