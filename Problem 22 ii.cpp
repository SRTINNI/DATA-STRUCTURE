#include<iostream>

using namespace std;

int main()
{
	int i, v, e, j, count;

	// take the input of the number of vertex and edges.
	cout<<"Enter the number of vertexes of the graph: ";
	cin>>v;
	cout<<"\nEnter the number of edges of the graph: ";
	cin>>e;
	int edge[e][2];

	// Take the input of the adjacent vertex pairs of the given graph.
	for(i = 0; i < e; i++)
	{
		cout<<"\nEnter the vertex pair for edge "<<i+1;
		cout<<"\nV(1): ";
		cin>>edge[i][0];
		cout<<"V(2): ";
		cin>>edge[i][1];
	}

	// Print the adjacency list representation of the graph.
	cout<<"\n\nThe adjacency list representation for the given graph: ";
	for(i = 0; i < v; i++)
	{
		count = 0;
		// For each vertex print, its adjacent vertex.
		cout<<"\n\t"<<i+1<<"-> { ";
		for(j = 0; j < e; j++)
		{
			if(edge[j][0] == i+1)
			{
				cout<<edge[j][1]<<"  ";
				count++;
			}
			else if(edge[j][1] == i+1)
			{
				cout<<edge[j][0]<<"  ";
				count++;
			}
			else if(j == e-1 && count == 0)
				cout<<"Isolated Vertex!";
		}
		cout<<" }";
	}
}
/*
Program Explanation
1. Take the input of the number of vertex ‘v’ and edges ‘e’.
2. Take the input of ‘e’ pairs of vertexes of the given graph in edge[][].
3. For each vertex, search the vertex in the edge[][] matrix and print the corresponding vertex connected to this vertex.
4. Exit.

Runtime Test Cases
Case 1:
Enter the number of vertexes of the graph: 5

Enter the number of edges of the graph: 8

Enter the vertex pair for edge 1
V(1): 1
V(2): 3

Enter the vertex pair for edge 2
V(1): 1
V(2): 4

Enter the vertex pair for edge 3
V(1): 1
V(2): 5

Enter the vertex pair for edge 4
V(1): 2
V(2): 3

Enter the vertex pair for edge 5
V(1): 2
V(2): 5

Enter the vertex pair for edge 6
V(1): 3
V(2): 4

Enter the vertex pair for edge 7
V(1): 3
V(2): 5

Enter the vertex pair for edge 8
V(1): 4
V(2): 5


The adjacency list representation for the given graph:
        1-> { 3  4  5   }
        2-> { 3  5   }
        3-> { 1  2  4  5   }
        4-> { 1  3  5   }
        5-> { 1  2  3  4   }

Case 2:
Enter the number of vertexes of the graph: 4

Enter the number of edges of the graph: 6

Enter the vertex pair for edge 1
V(1): 1
V(2): 2

Enter the vertex pair for edge 2
V(1): 1
V(2): 3

Enter the vertex pair for edge 3
V(1): 1
V(2): 4

Enter the vertex pair for edge 4
V(1): 2
V(2): 3

Enter the vertex pair for edge 5
V(1): 2
V(2): 4

Enter the vertex pair for edge 6
V(1): 3
V(2): 4


The adjacency list representation for the given graph:
        1-> { 2  3  4   }
        2-> { 1  3  4   }
        3-> { 1  2  4   }
        4-> { 1  2  3   }*/
