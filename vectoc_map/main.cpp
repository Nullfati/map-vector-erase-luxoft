// vectoc_map.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

#include <vector>
#include <algorithm>
#include <iterator>
#include <map>

using namespace std;

int main()
{
	srand(time(NULL));
	int choise = 0;
	cout << "Enter (0 - vector, 1 - map): ";
	cin >> choise;

	if (!choise) {
		vector<int> arr(100);
		for (int i = 0; i < 100; i++) {
			arr[i] = rand() % 10 + 1;
		
		}
		for (auto i : arr) { cout << i << endl; }
		cout << "-----------------" << endl;

		arr.erase(remove(arr.begin(), arr.end(), 8), arr.end());

		for (auto i : arr) { cout << i << endl; }
		cout << endl;
	}
	else if (choise) {
		map<int, int> dict;
		for (int i = 0; i < 100; i++) {
			dict[i] = rand() % 10 + 1;
		
		}
		map<int, int>::iterator it = dict.begin();
		while (it != dict.end()) {
			cout << it->first << ":" << it->second << endl;
			it++;
		}
		cout << "-----------------" << endl;

		it = dict.begin();
		while (it != dict.end()) {
			if (it->second == 8) {
				dict.erase(it++);
			}
			else {
				++it;
			}
		}

		it = dict.begin();
		while (it != dict.end()) {
			cout << it->first << ":" << it->second << endl;
			it++;
		}
	}
	else {

	}

	system("PAUSE");
    return 0;
}

