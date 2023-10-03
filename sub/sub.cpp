#include "sub.h"
#include <stdexcept>
int sub(int x,int y){
	return x - y;
}

martix::martix(int row, int cow) {
	this->row = row;
	this->cow = cow;
	this->data = new int[cow * row]();
	if (!this->data) {
		throw std::runtime_error("malloc error");
	}
}

martix::martix(int row, int cow, int* data) {
	this->row = row;
	this->cow = cow;
	this->data = new int[cow * row]();
	if (!this->data) {
		throw std::runtime_error("malloc error");
	}
	memcpy(this->data, data, cow * row * sizeof(int));
}

martix::~martix(){
	delete[] this->data;
}
