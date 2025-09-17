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

Node* findMiddle(Node* head) {
    Node* slow = head ;
    Node* fast = head ;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next ;
        fast = fast->next->next ;
    }
    return slow ;
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
        if (head == NULL) {
            head = newNode ;
            tail = newNode ;
        } else {
            tail->next = newNode ;
            tail = newNode ;
        }
    }

    Node* mid = findMiddle(head) ;
    cout << "Middle element: " << mid->data << endl ;

    return 0;
}
