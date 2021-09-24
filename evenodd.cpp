#include <iostream>


int printEvenTimetable(int num) {
	for (int x = 1; x <= 20; x++) {
		std::cout<<x<<"x"<<num<<"="<<x*num<<std::endl;
	}
}

int printOddIntegers(int num) {
	int result[10000];
	int lCounter = 0;
	int rCounter = 1;
	while (lCounter < 30) {
		if (rCounter % num != 0) {
			result[lCounter] = rCounter;
			lCounter++;
		}
		rCounter++;
	}
	for(int x=0; x < lCounter; x++) {
		std::cout<<"item: "<<result[x]<<std::endl;
	}
}

int main() {
	int input;
	std::cout<<"Enter a number: ";
	std::cin>>input;
	if (input%2 == 0)
		printEvenTimetable(input);
	else 
		printOddIntegers(input);
	return 0;
}
