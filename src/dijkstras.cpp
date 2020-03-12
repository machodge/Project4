// dijsktras.cpp

struct Node{

	//x and y coordinates in graph
	int x;
	int y;

	//cost to move from this node
	int weight;

	//sum of the weight
	int distance;

	//store the type of terrain for printing out
	char type;

	bool visited;

	Node *backedge;

	vector <Node *> adj;

}

// Main Execution

int main(int argc, char *argv[]) {
    return 0;
}

