// Swap nodes in a linked list without swapping data

#include<iostream>
#include<vector>
#include"InsertTemplate.cpp"
using namespace std;

void PrintInNormalOrder(Node*);

void getNodes(vector<pair<Node*,Node*>> &vecPtr, Node *headPtr,int x, int y) {
    Node* prev = nullptr;
    Node *curr = headPtr;
    while(curr) {
      if(curr->data==x || curr->data==y) {
          vecPtr.push_back(make_pair(prev, curr));
      }
      prev = curr;
      curr = curr->next;  
    }
}

int main(int argc, char const *argv[])
{
    Node* head = nullptr;
    Insert(&head, 10);
    Insert(&head, 15);
    Insert(&head, 12);
    Insert(&head, 13);
    Insert(&head, 20);
    Insert(&head, 14);
    Print(head);
    vector<pair<Node*,Node*>> vectorNodes;
    int x = 15, y=10;
    getNodes(vectorNodes, head, x, y);
    pair<Node*, Node*> p1 = vectorNodes[0];
    pair<Node*, Node*> p2 = vectorNodes[1];

    // Setting prev links 
    if(p1.first==nullptr) {
        head = p2.second;
    }
    else {
        p1.first->next = p2.second;
    }
    p2.first->next = p1.second;

    // Setting next links 
    Node* temp = p2.second->next;
    p2.second->next = p1.second->next;
    p1.second->next = temp;

     cout << endl;
    PrintInNormalOrder(head);
    return 0;
}

void PrintInNormalOrder(Node* headPtr) {
    if(headPtr!=nullptr) {
        cout<<headPtr->data<< "\t";
        Print(headPtr->next);
    }
    return;
}