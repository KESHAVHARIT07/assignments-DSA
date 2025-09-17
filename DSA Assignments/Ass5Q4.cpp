#include<bits/stdc++.h>
using namespace std ;

struct Node {
    int data ;
    Node* next ;
    Node(int val) {
        data = val ;
        next = NULL ;
    }
} ;

void printList(Node* head) {
    Node* temp = head ;
    while (temp) {
        cout << temp->data << "->" ;
        temp = temp->next ;
    }
    cout << "NULL" << endl ;
}

Node* reverseList(Node* head) {
    Node* prev = NULL ;
    Node* curr = head ;
    Node* nextNode = NULL ;

    while (curr!=NULL) {
        nextNode = curr->next ;
        curr->next = prev ;
        prev = curr ;
        curr = nextNode ;
    }
    return prev ;
}

int main() {
    int n, x ;
    cout << "Enter number of elements: " ;
    cin >> n ;

    Node* head = NULL ;
    Node* tail = NULL ;

    cout << "Enter elements: " ;
    for (int i = 0 ; i < n ; i++) {
        cin >> x ;
        Node* newNode = new Node(x) ;
        if (!head) {
            head = newNode ;
            tail = newNode ;
        } else {
            tail->next = newNode ;
            tail = newNode ;
        }
    }

    head = reverseList(head) ;

    cout << "Reversed List: " ;
    printList(head) ;

    return 0 ;
}
