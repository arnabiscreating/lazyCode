## TITLE
Is Graph Bipartite?

### 💻 Language(s)

<table>
    <tr>
        <td>  C++</td>
        <td>✔️ Java</td>
        <td>  Python</td>
        <td>  C</td>
        <td>  Other</td>
    </tr>
</table>

### Question Plaform

✔️[LeetCode](https://leetcode.com/problems/is-graph-bipartite/)

### 📖 Statement

There is an undirected graph with n nodes, where each node is numbered between 0 and n - 1. You are given a 2D array graph, where graph[u] is an array of nodes that node u is adjacent to. More formally, for each v in graph[u], there is an undirected edge between node u and node v. The graph has the following properties:

There are no self-edges (graph[u] does not contain u).
There are no parallel edges (graph[u] does not contain duplicate values).
If v is in graph[u], then u is in graph[v] (the graph is undirected).
The graph may not be connected, meaning there may be two nodes u and v such that there is no path between them.
A graph is bipartite if the nodes can be partitioned into two independent sets A and B such that every edge in the graph connects a node in set A and a node in set B.

Return true if and only if it is bipartite


### ✍️ Solution

```Java
class Solution {
    public boolean isBipartite(int[][] graph, int[] vis, int src) {
        LinkedList<Integer> que = new LinkedList<>();
        que.addLast(src);
        
        int color = 0; // red
        boolean isCycle = false;
        
        while (que.size() != 0) {
            int size = que.size();
            while (size-- > 0) {
                int rvtx = que.removeFirst();
                if (vis[rvtx] != -1) {
                    isCycle = true;
                    if (vis[rvtx] != color)
                        return false;
                    
                    continue;
                }
                
                vis[rvtx] = color;
                for (int v : graph[rvtx]) {
                    if (vis[v] == -1) {
                        que.addLast(v);
                    }
                }
            }
            color = (color + 1) % 2;
        }
        return true;
    }
    
    public boolean isBipartite(int[][] graph) {
        int n = graph.length;
        int[] vis = new int[n];
        Arrays.fill(vis, -1);
        
        for (int i = 0; i < n; i++) {
            if (vis[i] == -1 && !isBipartite(graph, vis, i))
                return false;
        }
        return true;
    }
```