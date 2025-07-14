// FLOYD WARSHALL ALGORITHM
#include<iostream>
using namespace std;
#define nV 4        // no of vertices
#define INF 999     // used to represent unreachable vertices

void printMatrix(int matrix[][nV]){
    for(int i=0;i<nV;i++){
        for(int j=0;j<nV; j++){
            if(matrix[i][j]==INF)
                printf("%4s","INF");
            else
                printf("%4d",matrix[i][j]);
        }
        printf("\n");
    }
}
void floydWarshall(int graph[][nV]){
    int matrix[nV][nV];
    int i,j,k;
    // initializing matrix with the graph
    for(i=0;i<nV;i++){
        for(j=0;j<nV;j++){
            matrix[i][j]=graph[i][j];
        }
    }
    // adding vertices to find shorter paths
    for(k=0;k<nV;k++){
        for(i=0;i<nV;i++){
            for(j=0;j<nV;j++){
                // checking if there's a shorter path through vertex k
                if(matrix[i][k] + matrix[k][j] < matrix[i][j])
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
            }
        }
    }
    printMatrix(matrix);
}


int main(){
    int graph[nV][nV]={{0,3,INF,5},
        {2,0,INF,4},
        {INF,1,0,INF},
        {INF,INF,2,0}};
        floydWarshall(graph);
    return 0;
}