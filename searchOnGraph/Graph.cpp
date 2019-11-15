//
//  Graph.cpp
//  SearchOnGraph
//
//  Created by Berke Yavas on 10.11.2019.
//  Copyright © 2019 F. All rights reserved.
//

#include "Graph.hpp"
#include "Node.hpp"
#include "Link.hpp"


bool Graph::contains(const Node* node)const{
    const char nodePoint = node->getPoint();
    char nodePoint2;
    for(std::set<Node*>::iterator it = m_nodes.begin(); it != m_nodes.end(); ++it)
    {
        nodePoint2 = (*it)->getPoint();
        if (nodePoint == nodePoint2) {
            return true;
        }
    }
    return false;
}

std::set<Node*> Graph::getNodes() const{
    return m_nodes;
}


void Graph::addNode(Node *node){
    if (contains(node)) {
        return;
    }
    m_nodes.insert(new Node(*node));
}

void Graph::printNodes(){
    for(auto i:m_nodes)
        std::cout << i->getPoint() << " ";
    std::cout << "\n";
}

void Graph::possiblePathsDependsOnBudget(Node* startingPoint, int budget, std::string path){
    // pass argument starting point as  *(m_nodes.at(0))
    if(!contains(startingPoint)){ // to check if graph m_nodes contains starting node
        return;
    }
    bool toAvoidDuplicate = false;
    path.push_back(startingPoint->getPoint());
    if(budget> 0){
        for (int i = 0; i < startingPoint->getNeighbours().size(); ++i) {
            if(budget - startingPoint->getNeighbours().at(i)->getCost() < 0){
                toAvoidDuplicate = true;
                continue;
            }
            possiblePathsDependsOnBudget(startingPoint->getNeighbours().at(i)->getDest(), budget - startingPoint->getNeighbours().at(i)->getCost(),path);
        }
    }
    if (/*m_budget <= 0*/ budget <= 0 || toAvoidDuplicate) {
        std::cout << path << "\n";
        toAvoidDuplicate = false;
    }
    //m_budget += budget;
}
