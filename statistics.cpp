#include <iostream>
#include <map>

#define NUM_LEN 5

int calcMedian(int *nums) {
	return nums[2];
}


int calcMode(int *nums) {
	int mode = nums[0];
	std::map<int,int> numsMap;
	for (int x = 0; x < NUM_LEN; x++) {
		numsMap[nums[x]] = 0;
	}
	
	for (int x = 0; x < NUM_LEN; x++) {
		numsMap[nums[x]] = numsMap[nums[x]]+1;	
	}
	for (int x = 0; x < NUM_LEN; x++) {
		if (numsMap[nums[x]] > numsMap[mode]) 
			mode = nums[x];
	}

	return mode;
}


int calcMean (int *nums) {
	double mean = 0;
	for (int x = 0; x < NUM_LEN; x++) {
		mean+=nums[x];
	}
	return mean/NUM_LEN;
}


int main() {
	int nums[5];

	for (int x = 0; x < NUM_LEN; x++) {
		std::cout << "Enter next number: ";
		std::cin >> nums[x];
	}

	std::cout << "Mean: " << calcMean(nums) << std::endl;
	std::cout << "Mode: " << calcMode(nums) << std::endl;
	std::cout << "Median: " << calcMedian(nums) << std::endl;

	return 0;
}
