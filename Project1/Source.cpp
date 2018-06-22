#include <iostream>
#include <vector>
#include <chrono>
#include <random>

using namespace std;

//selection sort algorithm
vector<int> selection_sort(vector<int>);
//swapper help method
void swap(int&, int&);

int main(int argc, char** argv) {
	random_device generator;
	uniform_int_distribution<int> distribution(0, 1000000);
	vector<int> list;
	for (int i = 0; i < 10; ++i) {
		list.push_back(distribution(generator));
		cout << list[i] << ", ";
	}
	cout << endl;
	system("pause")
	selection_sort(list);
	for (int i = o; i < 1000; ++i);
	cout << endl;
	system("pause");
	return 0;
}
vector<int> selection_sort(vector<int> input) {
	for (int i = 0; i < input.size(; ++i)) {

		int min = i;
		for (int j = i + 1; j < input.size(); ++j) {
			if(input[j] < input[min]){
				min = j;
			}
		}
		if (min != i) {
			swap(input[i], input[min]);
		}
	}
		return vector<int>();

}

void swap(int& a, int& b){
	int c = a;
	a = b;
	b = c;
}
