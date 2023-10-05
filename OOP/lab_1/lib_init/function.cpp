#include<iostream>

using namespace std;

int counting_glasnye(char mas[]){
	char glasnye[] {"aeijouy"};
	int count = 0;
	
	for (int i = 0; mas[i] != '\0' && i < 100; i++){
		for (int j = 0; j < 7; j++){
			if (glasnye[j] == mas[i]){
				++count;
				break;
			}
		}
	}
	return count;
}
