// dijsktras.cpp

// Main Execution

#include <iostream>
#include <map>
#include <vector>
#include <limits.h>

using namespace std;

struct Node{
	int row;
	int col;
	int position;
	int distance;
	int cost;
	char name;
	bool visit;
	map<int,int>edge;
	int backRow;
	int backCol;
/*
	Node(){
		distance = INT_MAX;//From the wiki page
		visit = false;
	}

	*/
};

int main(int argc, char *argv[]) {
    
	int numTile;

	cin >> numTile;
	char tilel;
	int tileCost;
	char tileChar;
	map<char,int>cost;
	map<char,int>::iterator it;
	for(int i = 0; i < numTile; i++){
		
		cin >> tilel >> tileCost;
		cost[tileChar] = tileCost;
	}

	int row;
	int col;

	cin >> row >> col;

	vector< vector<Node> >grid;

	grid.resize(row);

	
	for(int i = 0; i < row; i++){
		grid[i].resize(col);
	}
	

	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			cin >> tileChar;

			grid[i][j].row = row;
			grid[i][j].col = col;
			
			it = cost.find(tileChar);
			grid[i][j].cost = it -> second;
		}

	}
	

	int rowStart;
	int colStart;
	int rowEnd;
	int colEnd;

	int tempDistance;

	cin >> rowStart >> colStart >> rowEnd >> colEnd;

	grid[rowStart][colStart].distance = 0;

	Node startN = grid[rowStart][colStart];
	Node endN = grid[rowEnd][colEnd];

	Node current;
	Node side;
	
	multimap<int, Node>nDistance;
	multimap<int, Node>::iterator mmIT;

	nDistance.insert(make_pair(startN.distance, startN));
	//Dijkstra's algorithm
	while(nDistance.size() != 0){

		mmIT = nDistance.begin();

		int tempRow;
		int tempCol;

		tempRow = mmIT->second.row;
		tempCol = mmIT->second.col;

		nDistance.erase(mmIT);

		grid[tempRow][tempCol].visit = true;
		
		//check the right side
		if(grid[tempRow][tempCol].col + 1 < col && grid[tempRow][tempCol+1].visit != true){
			tempDistance = grid[tempRow][tempCol].distance + grid[tempRow][tempCol].cost;
			if(grid[tempRow][tempCol+1].distance == INT_MAX ||tempDistance<grid[tempRow][tempCol+1].distance){
				for(mmIT = nDistance.begin(); mmIT != nDistance.end();mmIT++){
					if(tempRow == mmIT->second.row && tempCol == mmIT ->second.col){
						nDistance.erase(mmIT);
						grid[tempRow][tempCol+1].distance = tempDistance;
						grid[tempRow][tempCol+1].backRow = tempRow;
						grid[tempRow][tempCol+1].backCol = tempCol;
						nDistance.insert(make_pair(grid[tempRow][tempCol+1].distance, grid[tempRow][tempCol]));
					}	
				}
			}
		}

	}
	
	return 0;
}

