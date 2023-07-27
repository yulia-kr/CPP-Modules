#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <ctime>

// Function to perform merge-insertion sort using Ford-Johnson algorithm

// Merge-Insertion Sort Algorithm
// Sorts the elements in the given container 'arr' using the Ford-Johnson merge-insertion sort.
template <typename Container>
void merge_insertion_sort(Container& arr) {
	const typename Container::size_type threshold = 10; // Threshold for switching to insertion sort

	// If the size of the container is smaller than or equal to the threshold, use insertion sort
	if (arr.size() <= threshold) {
		for (typename Container::size_type i = 1; i < arr.size(); ++i) {
			typename Container::value_type key = arr[i]; // Select the key to be inserted into the sorted portion
			typename Container::size_type j = i;

			// Shift elements to the right until the correct position for 'key' is found
			while (j > 0 && arr[j - 1] > key) {
				arr[j] = arr[j - 1];
				--j;
			}

			arr[j] = key; // Insert the 'key' into the correct position in the sorted portion
		}
	}
	// If the size of the container is larger than the threshold, use merge sort
	else {
		typename Container::iterator mid = arr.begin() + arr.size() / 2; // Find the middle point

		// Split the container into two halves - left and right
		Container left(arr.begin(), mid);
		Container right(mid, arr.end());

		// Recursively sort the left and right halves using merge-insertion sort
		merge_insertion_sort(left);
		merge_insertion_sort(right);

		arr.clear(); // Clear the original container to merge the sorted halves

		// Merge the two sorted halves back into the original container
		typename Container::iterator itLeft = left.begin();
		typename Container::iterator itRight = right.begin();

		while (itLeft != left.end() && itRight != right.end()) {
			if (*itLeft <= *itRight) {
				arr.push_back(*itLeft); // Append the smaller element from the left half
				++itLeft;
			} else {
				arr.push_back(*itRight); // Append the smaller element from the right half
				++itRight;
			}
		}

		// Append any remaining elements from the left half
		while (itLeft != left.end()) {
			arr.push_back(*itLeft);
			++itLeft;
		}

		// Append any remaining elements from the right half
		while (itRight != right.end()) {
			arr.push_back(*itRight);
			++itRight;
		}
	}
}

int main(int argc, char* argv[]) {
    if (argc <= 1) {
        std::cout << "Error: No input numbers provided.\n";
        return 1;
    }

    std::vector<int> inputNumbers;
    for (int i = 1; i < argc; i++) {
        int num = atoi(argv[i]);
        // Check if the number is positive before adding it to the vector
        if (num > 0) {
            inputNumbers.push_back(num);
        } else {
            std::cout << "Found a non-positive number (" << num << "). Stopping sorting.\n";
            return 1;
        }
    }

	std::cout << "Before: ";
	for (size_t i = 0; i < inputNumbers.size(); i++) {
		std::cout << inputNumbers[i] << " ";
	}
	std::cout << std::endl;

	// Create a deque and copy elements from the vector
	std::deque<int> numbersDeque;
	std::copy(inputNumbers.begin(), inputNumbers.end(), std::back_inserter(numbersDeque));

	// Perform merge-insertion sort
	merge_insertion_sort(numbersDeque);

	std::cout << "After: ";
	for (size_t i = 0; i < numbersDeque.size(); i++) {
		std::cout << numbersDeque[i] << " ";
	}
	std::cout << std::endl;

	// Display the time taken by your algorithm using different containers
	clock_t startTime = clock();
	// Perform merge-insertion sort with the first container
	merge_insertion_sort(numbersDeque);
	clock_t endTime = clock();
	double timeElapsed = double(endTime - startTime) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << numbersDeque.size() << " elements with std::deque: " << timeElapsed << " s\n";

	startTime = clock();
	// Perform merge-insertion sort with the second container (if you are using a second container)
	// merge_insertion_sort(numbersDeque);
	endTime = clock();
	timeElapsed = double(endTime - startTime) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << numbersDeque.size() << " elements with std::vector: " << timeElapsed << " s\n";

	return 0;
}
