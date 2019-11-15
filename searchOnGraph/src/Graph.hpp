//
//  Graph.hpp
//  SearchOnGraph
//
//  Created by Berke Yavas on 10.11.2019.
//  Copyright © 2019 F. All rights reserved.
//


#ifndef Graph_hpp
#define Graph_hpp

#include <iostream>
#include <set>
#include <vector>
#include <string>
#include <algorithm>

class Node;

class Graph {
private:
    std::set<Node*> m_nodes;
public:
    std::set<Node*> getNodes() const;
    void addNode(Node *node);
    void printNodes();
    void possiblePathsDependsOnBudget(Node* startingPoint, int budget,std::string path = "");
    bool contains(const Node* node) const;
};

#endif /* Graph_hpp */
