#include <iostream>
#include "chainlink.hpp"

using namespace std;

class Node{
    public:

    ChainLink data;
    Node * next;

    Node(ChainLink link){
        this->data = link;
    };
    Node(){

    };
    
    
};

void print(Node * n){
    cout << "List: ";
    while(n != NULL){
        if(n->next != NULL){
            cout << n->data.get_color() << ", ";
            n = n->next;
        }
        else{
            cout << n->data.get_color();
            n = n->next;
        }
    }
    cout << "\n\n";
}

void addNode(Node ** npointer, Node *new_node){
    // Node *new_node = new Node();    //creates the new node
    Node * last = *npointer;
    // new_node->data = new_data;  //adds data to the new node
    new_node->next = NULL;  //since its going to be the end of the list we have to make it point to NULL
    while(last->next != NULL){  
        last = last->next;  //goes through the whole list by checking if the current node is pointing to NULL
    }   
    
    last->next = new_node;  // once it finds the end of the current list, it makes its last element point to the new end
    
}

void viewNode(Node *n){
    cout << "Here is the info of the current node: \n";
    cout << "Chain link color: " << n->data.get_color();
    cout << "\nNext node: ";
    cout << n->next->data.get_name()<< endl << endl;
}

void remaingsize(Node *n){
    cout << "Here is size of the rest of the list: ";
    int i = 0;
    n = n->next;
    while(n != NULL){
        n = n->next;
        ++i;
    }

    cout << i << "\n\n";
}


int main(){
    ChainLink link_one = ChainLink("red", "link1");
    Node *node_one = new Node(link_one);

    ChainLink link_two = ChainLink("blue", "link2");
    Node *node_two = new Node(link_two);
    addNode(&node_one, node_two);

    ChainLink link_three = ChainLink("green", "link3");
    Node *node_three = new Node(link_three);
    addNode(&node_two, node_three);

    remaingsize(node_one);

    print(node_one);
    print(node_one);

    viewNode(node_one);

    return 0;
}
