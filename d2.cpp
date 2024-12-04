#include <iostream>
#include <vector>
using namespace std;

void countPathsBacktracking(vector<vector<int>>& graph, int src, int dest, vector<bool>& visited, int& pathCount) {
    if (src == dest) {
        pathCount++;
        return;
    }

    visited[src] = true;

    for (int neighbor : graph[src]) {
        if (!visited[neighbor]) {
            countPathsBacktracking(graph, neighbor, dest, visited, pathCount);
        }
    }

    visited[src] = false;
}

int countPaths(vector<vector<int>>& graph, int V, int start, int end) {
    vector<bool> visited(V, false);
    int pathCount = 0;
    countPathsBacktracking(graph, start, end, visited, pathCount);
    return pathCount;
}

int main() {
    int V = 5;
    vector<vector<int>> graph(V);
    graph[0] = {1, 2};
    graph[1] = {2, 3};
    graph[2] = {4};
    graph[3] = {4};

    char startVertex, endVertex;
    cin >> startVertex >> endVertex;

    int start = startVertex - 'A';
    int end = endVertex - 'A';

    int totalPaths = countPaths(graph, V, start, end);
    cout << "Total paths between " << startVertex << " and " << endVertex << " are: " << totalPaths << endl;

    return 0;
}
