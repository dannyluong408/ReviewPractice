#ifndef TREE_GRAPH_QUESTIONS_HPP
#define TREE_GRAPH_QUESTIONS_HPP

#include <list>

struct tree{
    int val;
    tree *left = nullptr, *right = nullptr;
};


//bool route_between_nodes_4_1 (node start, node end, std::list adj[]){
//    //do dfs mark everything u come across and if start gets marked as visited then there is
//    //a route
//}


void minimal_tree_4_2(int arr[]){
    /* ex  1 2 3 4 5
    becomes    2 4
              1 3 5
    */



}

std::list<int>** list_of_depths_4_3(tree *root){
    //use a queue to figure out depth

    //depth 0 = root
    //depth 1 = root left and right if they exist
    //depth 2 = left left , left right, right left , right right if they exist etc

}

bool check_balanced_4_4(tree *root){
    return true;
}

bool is_bst_4_5(tree *root){
    //do in order traversal and should be increasing?

}

tree* sucessor_4_6(tree *node){
    //go up one , if acnt go up one then it is root so next is right child

    //check if the one u just came from is right or left, if right,
    //parent of this is next , if parent of this is null, go to right child and
    //go to last left child, if none/ next is this right child


}

bool build_order_4_7(int nodes, std::list<int> adj[]){
    //have to figure out starting point

    //run bfs

    //add unconnected nodes at the end (these dont req deps)

    //print out the bfs order
    return false;
}


//random_node_4_11

//make a class, get random node use a global variable and in order traversal this? when counter hits
//random number return that node



#endif // TREE_GRAPH_QUESTIONS_HPP
