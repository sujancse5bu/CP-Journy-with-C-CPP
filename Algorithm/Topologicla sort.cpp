// A C++ program to print topological sorting of a DAG 
#include<iostream> 
#include <list> 
#include <stack> 
using namespace std; 
class Graph  						 // Class to represent a graph 
{ 
	int V;     						 // No. of vertices' 
	list<int> *adj;                  // Pointer to an array containing adjacency listsList 
	void topologicalSortUtil(int v, bool visited[], stack<int> &Stack); // A function used by topologicalSort 
public: 
	Graph(int V); 					// Constructor 
	void addEdge(int v, int w);      // function to add an edge to graph 
	void topologicalSort(); 	    // prints a Topological Sort of the complete graph 
}; 

Graph::Graph(int V) 
{ 
	this->V = V; 
	adj = new list<int>[V]; 
} 

void Graph::addEdge(int v, int w) 
{ 
	adj[v].push_back(w); 			// Add w to v’s list. 
} 

void Graph::topologicalSortUtil(int v, bool visited[], stack<int> &Stack) // A recursive function used by topologicalSort 
{ 
	visited[v] = true; 				// Mark the current node as visited. 
	list<int>::iterator i; 			// Recur for all the vertices adjacent to this vertex 
	for (i = adj[v].begin(); i != adj[v].end(); ++i) if (!visited[*i])	topologicalSortUtil(*i, visited, Stack); 
	Stack.push(v); // Push current vertex to stack which stores result 
} 

void Graph::topologicalSort() 
{ 
	stack<int> Stack; 
	bool *visited = new bool[V]; 	// Mark all the vertices as not visited 
	for (int i = 0; i < V; i++) visited[i] = false; 
	for (int i = 0; i < V; i++) if (visited[i] == false) topologicalSortUtil(i, visited, Stack); // Call the recursive helper function to store Topological ,// Sort starting from all vertices one by one 
	while (Stack.empty() == false) 			// Print contents of stack 
	{ 
		cout << Stack.top() << " "; 
		Stack.pop(); 
	} 
} 

int main() // Driver program to test above functions 
{ 
	Graph g(6); // Create a graph given in the above diagram 
	g.addEdge(5, 2); 
	g.addEdge(5, 0); 
	g.addEdge(4, 0); 
	g.addEdge(4, 1); 
	g.addEdge(2, 3); 
	g.addEdge(3, 1); 
	cout << "Following is a Topological Sort of the given graph \n"; 
	g.topologicalSort(); 
	return 0; 
} 

