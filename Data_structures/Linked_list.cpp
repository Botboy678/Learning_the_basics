#include <iostream>

struct node{
int data; 
node* next; 
node() : data(0), next(nullptr){}; 
}; 
//The function parameter is been passed 
//by reference
node* addNode(node*&head){
node* x; 
x = new node; 
x->next = nullptr; 
if (head == nullptr){
head = x; 
return x; 
} else {
    node* current; 
    current = head; 
    while (current->next!=nullptr){
    current = current->next; 
    }
    current->next = x; 
 
}
return x; 
}

void printNode(node* head){
node* current; 
current = head; 
while(current!=nullptr){
std::cout<<current->data; 
current = current->next; 
}
}

int main(){
node* a; 
a = new node; 
addNode(a)->data = 2;  
printNode(a); 
}