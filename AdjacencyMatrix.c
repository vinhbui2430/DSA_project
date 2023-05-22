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
int selectmatrix()
{
    int c;
    printf("Select the type of matrix\nUndirected graph type 1\nDirected graph type 2\n");
    scanf("%d",&c);
    while(c!=1&&c!=2)
    {
        printf("Select again");
        scanf("%d",&c);
    }
    return c;
    
}

int main()
{   
    int row, column;
    printf("Enter the number of vertices : ");
    scanf("%d",&no_vertices);
    int adj[no_vertices][no_vertices];

    for(int i=0;i<no_vertices;i++)
        {
            adj[i][i]=0;
            for(int j=0;j<no_vertices;j++)
            {
                if(i==j)
                continue;
                adj[i][j]=999;
            }
        }
    
    int dis;
    int type= selectmatrix();
    if(type==1)
    {
        while(row!=-1&&column!=-1)
        {
            printf("Enter an edge from node (0 to %d) to node (0 to %d) and the distance between them\t ",no_vertices-1,no_vertices-1);
            scanf("%d %d %d",&row,&column,&dis);
            adj[row][column]=dis;
            adj[column][row]=dis;
        }
    }
    else
    {
        while(row!=-1&&column!=-1)
        {
            printf("Enter an edge from node (0 to %d) to node (0 to %d) and the distance between them\t ",no_vertices-1,no_vertices-1);
            scanf("%d %d %d",&row,&column,&dis);
            adj[row][column]=dis;
            
        }
    }    
    printgraph(adj);

    return 0;

}