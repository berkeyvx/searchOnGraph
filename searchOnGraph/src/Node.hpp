//
//  Node.hpp
//  SearchOnGraph
//
//  Created by Berke Yavas on 10.11.2019.
//  Copyright © 2019 F. All rights reserved.
//
#include "Graph.hpp"

#ifndef Node_hpp
#define Node_hpp

class Link;

class Node{
    
private:
    const char m_point;
    std::vector<Link*> m_neighbours;
    
public:
    Node(char point);
    std::vector<Link*> getNeighbours() const;
    char getPoint() const;
    void addLink(Node* dest,int cost);
    void printNeighbours();
};

#endif /* Node_hpp */
