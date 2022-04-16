/* DFS: Works well when number of nodes <= 1000 */
 
#include <stdio.h>
 
int adj[1001][1001], vis[1001], nodes, edges, i;
 
void dfs(int src) {
	vis[src] = 1;
	for(i = 1; i <= nodes; i++) {
		if(vis[i] == 0 && adj[src][i] == 1) {
			dfs(i);
		}
	}
}
 
int main () {
	scanf("%d %d", &nodes, &edges);
	while(edges--) {
		int from, to;
		scanf("%d %d", &from, &to);
		adj[from][to] = 1;
		adj[to][from] = 1;
	}
	dfs(1);
	return 0;
}
