#pragma once
#include <memory>
__declspec(dllexport) int sub(int x, int y);

class __declspec(dllexport) martix {
	martix(const int row, const int cow);
	martix(int row, int cow, int* data);
	~martix();
private:
	int row = 0;
	int cow = 0;
	int* data = nullptr;
};