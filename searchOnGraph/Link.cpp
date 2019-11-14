//
//  Link.cpp
//  SearchOnGraph
//
//  Created by Berke Yavas on 10.11.2019.
//  Copyright © 2019 F. All rights reserved.
//

#include "Link.hpp"

Link::Link(int cost,Node* dest):m_cost(cost),m_dest(dest)
{
}

int Link::getCost() const{
    return m_cost;
}

Node* Link::getDest() const{
    return m_dest;
}
