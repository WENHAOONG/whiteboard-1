#include <stdio.h>
#pragma warning(disable:4996)

#define MAX_NODES 7  // Total number of nodes in the graph

// Graph represented as an adjacency list
char graph[MAX_NODES][4] = {
    {'B', '\0', '\0', '\0'}, // A -> B
    {'A', 'D', 'E', 'C'},    // B -> A, D, E, C
    {'F', '\0', '\0', '\0'}, // C -> F
    {'E', 'G', '\0', '\0'},  // D -> E, G
    {'F', '\0', '\0', '\0'}, // E -> F
    {'B', 'G', '\0', '\0'}, // F -> F
    {'\0', '\0', '\0', '\0'} // G -> (no connections)
};

int visited[MAX_NODES];  // Array to track visited nodes

// Function to map a node character (e.g., 'A') to an index (0 for 'A', 1 for 'B', etc.)
int getIndex(char node) {
    return node - 'A';
}

// Simple DFS function to check if a path exists between start and end
int dfs(char start, char end) {
    int startIndex = getIndex(start);

    // Mark the start node as visited
    visited[startIndex] = 1;

    // Check if we've reached the end node
    if (start == end) {
        return 1;
    }

    // Explore each connected node
    for (int i = 0; i < 4; i++) {
        char nextNode = graph[startIndex][i];
        if (nextNode != '\0' && !visited[getIndex(nextNode)]) {
            if (dfs(nextNode, end)) {
                return 1;
            }
        }
    }

    return 0;  // No path found
}

int main() {
    char start, end;

    // Prompt the user to input start and end nodes
    printf("Enter start node: ");
    scanf(" %c", &start);
    printf("Enter end node: ");
    scanf(" %c", &end);

    // Initialize the visited array to 0 (unvisited)
    for (int i = 0; i < MAX_NODES; i++) {
        visited[i] = 0;
    }

    // Check if a path exists using DFS and print the result
    if (dfs(start, end)) {
        printf("true\n");
    }
    else {
        printf("false\n");
    }

    return 0;
}
