//
//  main.cpp
//  graphProblemMain
//
//  Created by Berke Yavas on 10.11.2019.
//  Copyright © 2019 F. All rights reserved.
//

#include <iostream>
#include "Graph.hpp"
#include "Node.hpp"

int main(int argc, const char * argv[]) {
    Node a('A');
    Node b('B');
    Node c('C');
    Node d('D');
    a.addLink(&c, 3);
    c.addLink(&d, 5);
    c.addLink(&b, 4);
    b.addLink(&a, 2);
    d.addLink(&b, 6);
    Graph graph;
    graph.addNode(&a);
    graph.addNode(&b);
    graph.addNode(&c);
    graph.addNode(&d);
    std::cout << "Budget 8:\n";
    graph.possiblePathsDependsOnBudget(&a,8);
    std::cout << "Budget 14:\n";
    graph.possiblePathsDependsOnBudget(&a, 14);
    return 0;
}
