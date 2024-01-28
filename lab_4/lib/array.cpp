#include<iostream>
#include<string>
#include<math.h>
#include<memory>

template <class L> class Array {
public:
	Array(size_t length){
		std::shared_ptr<L> mas[length];
	}
	std::shared_ptr<L> mas[];
};
