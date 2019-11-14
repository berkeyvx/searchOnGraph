# searchOnGraph

Grammar Search on Graph

Think about a network that consists from nodes and one direction links. Each node will be represented by a character and each link has an integer cost value. User will enter the topology like the example below.

1. Enter all the nodes in too:
INPUT: ABCD

2. Enter the links [FROM][DEST][COST] to finish enter END
INPUT:
AC3
CB4
BA2
CD5
DB6
END







        Resulting topology:
        
        A<—--- 2 —---B
         |         ^  ^
         |       /    |
         3     4      6
         |    /       |
         |   /        |
         v /          |
         C—----5----->D
    
Question: Find all the possible routes for a given start point and budget [FROM][BUDGET]

EX:
INPUT: A 8
OUTPUT:
ACB
ACD

INPUT: A 14
OUTPUT:
ACBACB
ACDB

NOTE: When budget is not enough to move on next node the route spanning stops there.
Possibly two way pass can be stetted between to neighbor nodes.Ex: AB3 and BA5 From A to B has 3 cost from B to A has 5 cost on movement.

