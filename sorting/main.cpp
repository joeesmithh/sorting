#include <iostream>
#include <list>
#include <algorithm>

void bubbleSort(std::list<int>&);

int main() {

	// Bubble Sort
	std::list<int> nums{ 11, 7, 6, 23, 0, -5, 12 };
	bubbleSort(nums);
	std::for_each(begin(nums), end(nums), [](int x) {std::cout << x << std::endl;});

	return 0;
}

/** Sort given list using bubble sort algorithm.
	@param list The list to sort. */
void bubbleSort(std::list<int>& list) {

	int swaps;

	// Loop while swaps != 0
	do {

		swaps = 0;

		// Loop list
		for (auto i = begin(list); i != --end(list); ++i) {

			auto cur = i;
			auto next = std::next(i);

			// If current value less than next
			if (*cur > *next) {

				// Swap current value with next 
				int temp = *cur;
				*i = *next;
				*next = temp;

				// Accumulate swaps
				swaps++;
			}
		}
	} while (swaps != 0);
}