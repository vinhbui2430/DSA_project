#include<stdio.h>
int no_vertices;
void printgraph( int a[][no_vertices])
{
    for(int i=0;i<no_vertices;i++)
      {  
        for ( int j=0;j<no_vertices;j++)
        {
            printf(" %d     ",a[i][j]);
        }
        printf("\n");
      } 
}

int main()
{   
    int row, column;
    printf("Enter the number of vertices : ");
    scanf("%d",&no_vertices);
    int adj[no_vertices][no_vertices];

    for(int i=0;i<no_vertices;i++)
        for(int j=0;j<no_vertices;j++)
        adj[i][j]=999;
    
    while(row!=-1&&column!=-1)
    {
        printf("Enter an edge from node (0 to %d) to node (0 to %d) : ",no_vertices,no_vertices);
        scanf("%d %d",&row,&column);
        adj[row][column]=1;
        adj[column][row]=1;
    }

    printgraph(adj);

    return 0;

}