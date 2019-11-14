//
//  Link.hpp
//  SearchOnGraph
//
//  Created by Berke Yavas on 10.11.2019.
//  Copyright © 2019 F. All rights reserved.
//

class Node;

#ifndef Link_hpp
#define Link_hpp

#include <stdio.h>

class Link{
    const int m_cost;
    Node* m_dest;
    
public:
    Link(int cost, Node* dest);
    int getCost() const;
    Node* getDest() const;
};

#endif /* Link_hpp */
