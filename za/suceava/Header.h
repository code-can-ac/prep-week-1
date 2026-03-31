#pragma once

#include <iostream>
#include <vector>

using namespace std;

/*
*sortare query uri, acestea fiind offline putem raspunde la ele in ordine
    sortarea query urilor va fi in functie de T
*aplicam zilele in functie de a doua parte a inputului
*raspundem la query uri in functie de prima parte si a doua parte a inputului
*/

struct Edge {
    int u, v, gang;
};

// citire input
// citire input partea 1
void readAndPopulateMatrix(int &noNodes, int &numarGanguri, vector<Edge> &adj) {
    cin >> noNodes >> numarGanguri;    

    int DIMENSIUNE_INPUT = noNodes - 1; // se da din enunt N-1 muchii

    for (int i = 0; i < DIMENSIUNE_INPUT; ++i) {
        Edge edge;
        cin >> edge.u >> edge.v >> edge.gang;
        adj.push_back(edge);
    }
}

//citire input partea 2
void readAndPopulateDays(int &noDays, vector<Edge> &days) {// Number Of Days si matrice ponderata Days
    cin >> noDays;

    for (int i = 0; i < noDays; i++) {

        Edge day;
        cin >> day.u >> day.v >> day.gang;
        days.push_back(day);
        
    }
}

// citire input partea 3
void readQueries(int &noQueries, vector<pair<int, int>> &queries) { // Number of Queries
                                                             // si un vector queries care 
                                                             // contine pe fiecare pozitie o pereche de int
    cin >> noQueries;

    int gang, ziua;

    for(int i = 0; i < noQueries; ++i) {

        cin >> gang >> ziua;
        queries.push_back({gang, ziua});

    }
}


// functii utile
void writeEdges(vector<Edge> &edges) {
    for (auto &e : edges) {
        cout << e.u << " " << e.v << " : gang " << e.gang << "\n";
    }
}
void writeQueries(vector<pair<int, int>> queries) {
    for (auto &q : queries)
        cout << "gang " << q.first << ", ziua " << q.second << "\n";
}