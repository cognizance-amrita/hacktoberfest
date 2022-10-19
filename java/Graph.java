import java.util.ArrayList;
import java.util.Scanner;

class Graph {

    boolean[][] edges;
    int length;

    // Initialization of the graph
    Graph(int N)
    {
        this.length = N;
        this.edges = new boolean[N][N];
    }

    // Function for connecting the edges
    public void connect(int start, int end)
    {
        if (edges[start][end])
            System.out.println("Edge already Connected");
        else {
            edges[start][end] = true;
            edges[end][start] = true;
        }
    }

    // Finds out all the connected components and also handles duplicates
    public ArrayList<Integer> component(int n, ArrayList<Integer> visited)
    {
        visited.add(n);
        for (int i = 0; i < this.length; i++) {
            if (this.edges[n][i] && !visited.contains(i)) {
                component(i, visited);
            }
        }
        return visited;
    }
    
    public static void main(String[] args) {
        
        Scanner s = new Scanner(System.in);
        int N = s.nextInt();
        Graph g = new Graph(N * 2);
        for (int i = 0; i < N; i++)
        {
            g.connect(s.nextInt() - 1, s.nextInt() - 1);
        }
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;
        for(int i = 0; i < N*2; i++)
        {
            if (g.component(i, new ArrayList<Integer>()).size() > max)
                max = g.component(i, new ArrayList<Integer>()).size();
            if (g.component(i, new ArrayList<Integer>()).size() < min
                    && (g.component(i, new ArrayList<Integer>()).size() != 1))
                min = g.component(i, new ArrayList<Integer>()).size();
        }
        System.out.println(min + " " + max);
        s.close();
    }

}
