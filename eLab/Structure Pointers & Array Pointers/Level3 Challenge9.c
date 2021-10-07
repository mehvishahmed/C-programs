#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int MA;
struct Edge
{
    int src, dest, weight;
}; struct Graph
{
int V, E;
    struct Edge* edge;
};
struct Graph* createGraph(int V, int E)
{
    struct Graph* graph = (struct Graph*) malloc( sizeof(struct Graph) );
    graph->V = V;
    graph->E = E;
    graph->edge = (struct Edge*) malloc( graph->E * sizeof( struct Edge ) );
    return graph;
}
struct subset
{
    int parent;
    int rank;
};
int find(struct subset subsets[], int i)
{
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
    return subsets[i].parent;
}
void Union(struct subset subsets[], int x, int y)
{
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);
    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
    else
    {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}
int myComp(const void* a, const void* b)
{
    struct Edge* a1 = (struct Edge*)a;
    struct Edge* b1 = (struct Edge*)b;
    return a1->weight > b1->weight;
}
void blank(struct Graph* graph)
{
    int V = graph->V;
    struct Edge *result;
    result=(struct Edge*)malloc(sizeof(struct Edge)*V);
    int *out;
    out=(int *)malloc(sizeof(int)*V);
    int e = 0;
    int i = 0;
    struct subset *subsets = (struct subset*) malloc( V * sizeof(struct subset) );
    int v;
    for ( v = 0; v < V; ++v)
    {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }
    while (e < V - 1)
    {
        struct Edge next_edge = graph->edge[MA-1-i++];
        int x = find(subsets, next_edge.src);
        int y = find(subsets, next_edge.dest);
        if (x != y)
        {
            out[e]=MA-i;
            result[e++] = next_edge;
            Union(subsets, x, y);
        }
    }
    printf("%d\n",MA-e);
    int j=0;
    for (i = e-1; i>=0; i--)
    {
        while(out[i]>j)
        {
            printf("%d\n",j+1);
            j++;
        }
        j++;
    }
    return;
}
int main()
{
    int NUM;
    scanf("%d%d",&NUM,&MA);
    int V = NUM;
    int E = MA;
    struct Graph* graph = createGraph(V, E);
    int i,u,v;
    for(i=0;i<MA;i++)
    {
        scanf("%d%d",&u,&v);
        if(u>v)
        {
            graph->edge[i].src = v-1;
            graph->edge[i].dest = u-1;
        }
        else
        {
            graph->edge[i].src = u-1;
            graph->edge[i].dest =v-1;
        }
        graph->edge[i].weight = MA-i-1;
    }
    blank(graph);
    return 0;
}
