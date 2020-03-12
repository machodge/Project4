//Generate Map
//Author: Nicholas Hodge
//A program that generates a NxN map for dijkstras.cpp

#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]){

	//check for the correct amount of arguments
	if(argc != 2){

		cout << "usage: ./generate_map <map_size>";
		return -1;

	}

	//seed random
	srand(time(NULL));
	
	//read in the grid size from command line
	int n = atoi(argv[1]);

	char characters[6] = {'f', 'g', 'G', 'h', 'm', 'r'};
	int values[6] = {3, 1, 2, 4, 7, 5};

	//open the file to write to
	ofstream fout;
	fout.open("map.txt");

	//print out the number of characters
	fout << "6\n";

	//print out the characters and their values
	for (int i = 0; i < 6; i++) {

		fout << characters[i] << " " << values[i] << endl;

	}

	//print out the NxN grid size
	fout << n << " " << n << endl;

	//print out the map
	for(int i = 0; i < n; i++){

		for(int j = 0; j < n; j++){

			fout << characters[rand() % 6] << " ";

		}

		fout << endl;

	}

	//print out starting postion
	fout << "0 0\n";

	//print out the end positon
	fout << n - 1 << " " << n - 1 << endl;

	fout.close();

	return 0;

}
