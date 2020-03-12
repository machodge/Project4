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

	char characters[6] = {'g', 'G', 'f', 'h', 'r', 'm'};

	//open the file to write to
	ofstream fout;
	fout.open("map.txt");

	for(int i = 0; i < n; i++){

		for(int j = 0; j < n; i++){

			fout << characters[rand() % 6] << " ";

		}

		fout << endl;

	}

	fout.close();

	return 0;

}
