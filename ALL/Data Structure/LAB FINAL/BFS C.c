#include <stdio.h>
int adj[1001][1001], vis[1001], nodes, edges, i, head = 0, tail = 0, queue[1001];
void bfs(int src) 
{
	tail += 1;
	queue[tail] = src;
	vis[src] = 1;
	while(head <= tail) {
		int front = queue[head];
		head++;
		for(i = 1; i <= nodes; i++) {
			if(vis[i] == 0 && adj[front][i] == 1) {
				vis[i] = 1;
				tail += 1;
				queue[tail] = i;
			}
		}
		printf("2\n");
	}
} 
int main () 
{
	scanf("%d %d", &nodes, &edges);
	while(edges--) 
	{
		int from, to;
		scanf("%d %d", &from, &to);
		adj[from][to] = 1;
		adj[to][from] = 1;
	}
	bfs(1);
	return 0;
}
