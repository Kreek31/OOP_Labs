#include<iostream>
#include<memory>
#include<vector>



template <typename T, size_t ChunkNumberOfElements = 10>
class MyAllocator {
public:
    using value_type = T;
    using pointer = T*;
    using const_pointer = const T*;
    using size_type = size_t;

    template <typename U>
    struct rebind {
        using other = MyAllocator<U, ChunkNumberOfElements>;
    };

    MyAllocator() {
        chunks_.push_back(std::vector<T>(ChunkNumberOfElements));
        current_chunk_ = &chunks_.back();
        current_index_ = 0;
    }

    template <typename U>
    MyAllocator(const MyAllocator<U, ChunkNumberOfElements>&) {}

    pointer allocate(size_type n) {
        if (current_index_ + n > current_chunk_->size()) {
            chunks_.push_back(std::vector<T>(ChunkNumberOfElements));
            current_chunk_ = &chunks_.back();
            current_index_ = 0;
        }
        pointer p = &(*current_chunk_)[current_index_];
        current_index_ += n;
        return p;
    }

    void print(){
    	std::cout << "size " << chunks_[0].size() << std::endl;
    	std::cout << "current_chunk_ " << current_chunk_ << std::endl;
    	std::cout << "current_index_ " << current_index_ << std::endl;
    }
    void deallocate(pointer p, size_type n) {}

private:
    std::vector<std::vector<T>> chunks_;
    std::vector<T>* current_chunk_;
    size_type current_index_;
};



/*
template <typename T> class Allocator
{
private:
	size_t current_size = 0;
	const size_t BLOCK_SIZE;
	
public:
	std::vector<T> buffer;
	size_t index;
	Allocator(int n) : BLOCK_SIZE(sizeof(T)*n){}
	~Allocator(){}
	std::vector<T> allocate(int n){
		std::cout << "calling allocate" << std::endl;
		if(current_size == 0){
			buffer.insert(buffer.begin(), n, 0);
			index = 0;
		}
		if ((BLOCK_SIZE - current_size) < sizeof(T)*n){
			throw std::bad_alloc();
		}
		index += n;
		current_size += sizeof(T)*n;
		return buffer;
	}
	void deallocate(){
		std::cout << "calling deallocate" << std::endl;
		buffer.clear();
		current_size = 0;
		index = 0;
	}
};
*/
