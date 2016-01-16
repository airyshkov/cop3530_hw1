// Artem Iryshkov
// University of Florida
// COP3530 Homework 1
// Insertion Sort

#include <iostream>

int main() {
	
	int size = 0;	//init
	
	std::cin >> size;	//get array size
	int numbers[size];	//create array with specified size
	
	// fill array with inputs
	for (int i=0; i<size; i++) {
		std::cin >> numbers[i];
	}
	
	std::cout << std::endl;
	
	int* a = numbers; // copy array for sorting
	
	// sort array
	for (int i = 1; i < size; i++) {
		int t = a[i];
		int j;
		for (j = i - 1; j >= 0 && t < a[j]; j--)
			a[j + 1] = a[j]; a[j + 1] = t;
	}
	
	// print sorted array
	for (int i=0; i<size; i++) {
		std::cout << a[i] << std::endl;
	}
	
    return 0;
}
