//
//  Node.cpp
//  SearchOnGraph
//
//  Created by Berke Yavas on 10.11.2019.
//  Copyright © 2019 F. All rights reserved.
//

#include "Node.hpp"
#include "Link.hpp"

Node::Node(char point):m_point(point)
{
}

std::vector<Link*> Node::getNeighbours() const{
    return m_neighbours;
}

char Node::getPoint() const{
    return m_point;
}

void Node::addLink(Node* dest, int cost){
    m_neighbours.push_back(new Link(cost,dest));
}

void Node::printNeighbours(){
    for(auto i:m_neighbours){
        std::cout << i->getDest()->getPoint() << " ";
    }
    std::cout << "\n";
}
