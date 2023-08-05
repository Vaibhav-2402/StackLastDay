#include<iostream>
#include<stack>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    
    Node(int d) {
        this -> data = d;
        this -> next = NULL;
    }
};

class Stack {
    private:
    Node* top = NULL;
    public:
    void push(int data) {
        Node* temp = new Node(data);
        
        if(!temp){
            cout << "stack Overflow !! " << endl;
        }
        else {
            temp -> data = data;
            temp -> next = top;
            top = temp;
        }
    }
    
    void pop() {
        if(top == NULL) {
            cout << "stack UnderFLow " << endl;
        }
        else {
            Node* temp = top;
            top = top -> next;
            delete(temp);
        }
    }
    
    int peek() {
        if(top == NULL){
            cout << " Stack UnderFlow " << endl;
        }
        else {
       return top -> data;
        }
    }
    
    bool isEmpty() {
        if(top == NULL) {
            return true;
        }
        else {
            return false;
        }
    }
    
};

int main() {
    
    Stack s;
    
    s.push(97);
    s.push(917);
    s.push(927);
    s.push(937);
    
    cout << "The element at the top is : " << s.peek() << endl;
    
    s.pop();
    
    cout << "The element at the top is : " << s.peek() << endl;
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    if(s.isEmpty()) {
        cout << "Stack is Empty !!! " << endl;
    }
    
    return 0;
}