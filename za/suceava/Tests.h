#pragma once
#include "Header.h"
#include <fstream>

void Test1() {
    ifstream fin("teste/test1.txt");
    cin.rdbuf(fin.rdbuf());

    int noNodes, noGanguri, noDays, noQueries;
    vector<Edge> edges, days;
    vector<pair<int,int>> queries;

    readAndPopulateMatrix(noNodes, noGanguri, edges);
    readAndPopulateDays(noDays, days);
    readQueries(noQueries, queries);

    cout << "\n\nNoduri: " << noNodes << ", Ganguri: " << noGanguri << "\n";
    cout << "\nMuchii initiale:\n";
    writeEdges(edges);
    cout << "\nZile:\n";
    writeEdges(days);
    cout << "\nQuery-uri:\n";
    writeQueries(queries);
    cout << '\n';
}