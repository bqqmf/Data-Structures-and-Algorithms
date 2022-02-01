#include <iostream>
#include <cstring>

int **graph;
bool **visited;

using namespace std;
int main()
{
	int N, height;
	int max_height = 0;

	cin >> N;

	graph = new int *[N];
	visited = new bool *[N];

	for (int i = 0; i < N; i++)
	{
		graph[i] = new int[N];
		visited[i] = new bool[N];
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cin >> height;
			graph[i][j] = height;
			if (height > max_height)
			{
				max_height = height;
			}
			visited[i][j] = true;
		}
	}


	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << visited[i][j] << ' ';
		}
		cout << '\n';
	}

	for(int i=0; i<N; i++){
            memset(visited[i], false, N);
        }
	
	cout << "after memset" << endl;
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++)
            {
                cout << visited[i][j] << ' ';
            }
            cout << endl;
        }

	return 0;
}