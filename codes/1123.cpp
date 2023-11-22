#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

#define MAX 1005
#define INF 0x3f3f3f3f

//vertice, peso
int dijkstra(vector<vector<pair<int, int> > > &graph, int node, int final, vector<bool> &route) {
    priority_queue<pair<int, int> > Q; //peso, vértice
    vector<int> dist(MAX, INF);
    dist[node] = 0;
    Q.push(make_pair(dist[node], node));

    while (!Q.empty()) {

        int v = Q.top().second; //vertice
        int c = -Q.top().first; //custo
        Q.pop();

        if (c != dist[v])
            continue;

        for (auto corrent: graph[v]) {

            int neighbor = corrent.first;
            int cost = corrent.second;

            if (v <= final && neighbor != v+1)
                continue;

            if (dist[neighbor] > dist[v] + cost) {
                dist[neighbor] = dist[v] + cost;
                Q.push(make_pair(-dist[neighbor], neighbor));
            }
        }
    }
    return dist[final];

}

int main() {

    int n, m, c, k;
    int u, v, p;
    int cost;

    vector<int> result;

    

    while (cin >> n >> m >> c >> k && n|m|c|k) {


        vector<bool> route(n, false);
        vector<pair<int, int> > main_route(c - 1);
        vector<vector<pair<int, int> > > graph(n);

        for (int i = 0; i < (c-1); i++)
            route[i] = true;

        for (int i = 0; i < m; i++) {

            cin >> u >> v >> p;
            graph[u].push_back(make_pair(v, p));
            graph[v].push_back(make_pair(u, p));
        }

        for (int i = 0; i < (c-1); i++)
            main_route = graph[i];


        cost = dijkstra(graph, k, (c - 1), route);
        // cout << "custo inicial: " << cost << endl;

        // int new_cost;

        // for (int i = 0; i < (c-1); i++) {

        //     route[i] = false;
        //     new_cost = dijkstra(graph, k, i, route);
        //     route[i] = true;
        //     // cout << "custo ate o caminho: " << new_cost << endl;


        //     for (int y = i; y < (c-1) ; y++) {
        //         //cout << "valor do caminho: " << main_route[y].second << endl;
        //         new_cost += main_route[y].second;
        //     }

        //     //cout << "new_cost somado: " << new_cost << endl;

        //     if (new_cost < cost) {
        //         cost = new_cost;
        //         //cout << "custo final: " << cost << endl;
        //     }


        // }
        result.push_back(cost);
        // cout << "   -> " << result.back() << endl;
    }

    for(int i = 0; i < result.size(); i++)
        cout << result[i] << endl;


    return 0;
}