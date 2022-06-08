#include <iostream>
using namespace std;

int main() {
	int num, numElements, temp, indexSmallest;
	
	// Prompt user for array size and declare array
	cout << "How many elements are in the list (numbers only)? ";
	cin >> numElements;
	int nums[numElements] = {};
	cout << endl;
	
	// Initialize array
	for(int i = 0; i < numElements; i++) {
		cout << "Enter element " << i + 1 << ": ";
		cin >> num;
		nums[i] = num;
	}
	
	for(int i = 0; i < numElements - 1; i++) {
		// Find index of smallest unsorted element
		indexSmallest = i;
		for(int j = i + 1; j < numElements; j++) {
			if(nums[j] < nums[indexSmallest]) {
				indexSmallest = j;
			}
		}
		// Swap leftmost unsorted element with smallest unsorted element
		temp = nums[i];
		nums[i] = nums[indexSmallest];
		nums[indexSmallest] = temp;
	}
	cout << endl; 
	
	// Output sorted array to user
	cout << "Final sorted array: ";
	for(int i = 0; i < numElements; i++) {
		cout << nums[i] << " ";
	}
}
