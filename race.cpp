#include <iostream>
#include <random>

void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

int main() {
	int horses[5] = {0,0,0,0,0};
	bool keepGoing = true;

	while(keepGoing) {
		for(int i=0; i<5; i++) {
			advance(i, horses);
			printLane(i, horses);
			if(keepGoing) {
				keepGoing = isWinner(i, horses);
			}
		}
		std::cout << "Press ENTER for next round:";
		std::string temp;
		std::cin.ignore();
	}
}

void advance(int horseNum, int* horses) {
	std::random_device rd;
	std::uniform_int_distribution<int> dist(0,1);

	int coin = dist(rd);
	if(coin == 1) {
		horses[horseNum] += 1;
	}
}

void printLane(int horseNum, int* horses) {
	std::string nums = "01234";
	std::string lane = "...............";
	lane[horses[horseNum]] = nums[horseNum];
	std::cout << lane << std::endl;
}

bool isWinner(int horseNum, int* horses) {
	if(horses[horseNum] == 15) {
		std::cout << "Horse number " << horseNum << " is the winner!" << std::endl;
		return false;
	} else {
		return true;
	}
}
