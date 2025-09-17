#include <bits/stdc++.h>
using namespace std ;

class SinglyLinkedList {
    struct Node {
        int data ;
        Node* next ;
    } ;
    Node* head ;

public:
    SinglyLinkedList() {
        head = NULL ;
    }

    void insertAtBeginning(int val) {
        Node* newNode = new Node{val, head} ;
        head = newNode ;
    }

    void insertAtEnd(int val) {
        Node* newNode = new Node{val, NULL} ;
        if (!head) { head = newNode ; return ; }
        Node* temp = head ;
        while (temp->next) temp = temp->next ;
        temp->next = newNode ;
    }

    void insertBefore(int key, int val) {
        if (!head) return ;
        if (head->data == key) { insertAtBeginning(val) ; return ; }
        Node* temp = head ;
        while (temp->next && temp->next->data != key) temp = temp->next ;
        if (temp->next) {
            Node* newNode = new Node{val, temp->next} ;
            temp->next = newNode ;
        }
    }

    void insertAfter(int key, int val) {
        Node* temp = head ;
        while (temp && temp->data != key) temp = temp->next ;
        if (temp) {
            Node* newNode = new Node{val, temp->next} ;
            temp->next = newNode ;
        }
    }

    void deleteBeginning() {
        if (!head) return ;
        Node* temp = head ;
        head = head->next ;
        delete temp ;
    }

    void deleteEnd() {
        if (!head) return ;
        if (!head->next) { delete head ; head = NULL ; return ; }
        Node* temp = head ;
        while (temp->next->next) temp = temp->next ;
        delete temp->next ;
        temp->next = NULL ;
    }

    void deleteNode(int key) {
        if (!head) return ;
        if (head->data == key) { deleteBeginning() ; return ; }
        Node* temp = head ;
        while (temp->next && temp->next->data != key) temp = temp->next ;
        if (temp->next) {
            Node* del = temp->next ;
            temp->next = del->next ;
            delete del ;
        }
    }

    void search(int key) {
        Node* temp = head ;
        int pos = 1 ;
        while (temp) {
            if (temp->data == key) {
                cout << "Found at position " << pos << endl ;
                return ;
            }
            temp = temp->next ;
            pos++ ;
        }
        cout << "Not found" << endl ;
    }

    void display() {
        Node* temp = head ;
        while (temp) {
            cout << temp->data << " " ;
            temp = temp->next ;
        }
        cout << endl ;
    }
} ;

int main() {
    SinglyLinkedList list ;
    int choice, val, key ;
    while (true) {
        cout << "\nMenu:\n" ;
        cout << "1. Insert at Beginning\n2. Insert at End\n3. Insert Before\n4. Insert After\n5. Delete from Beginning\n6. Delete from End\n7. Delete Specific Node\n8. Search\n9. Display\n0. Exit\nEnter choice: " ;
        cin >> choice ;
        switch (choice) {
            case 1: 
                cout << "Value: " ;
                cin >> val ;
                list.insertAtBeginning(val) ;
                break ;
            case 2: 
                cout << "Value: " ;
                cin >> val ;
                list.insertAtEnd(val) ;
                break ;
            case 3: 
                cout << "Key: " ;
                cin >> key ;
                cout << "Value: " ;
                cin >> val ;
                list.insertBefore(key,val) ;
                break ;
            case 4: 
                cout << "Key: " ;
                cin >> key ;
                cout << "Value: " ;
                cin >> val ;
                list.insertAfter(key,val) ;
                break ;
            case 5: 
                list.deleteBeginning() ;
                break ;
            case 6: 
                list.deleteEnd() ;
                break ;
            case 7: 
                cout << "Key: " ;
                cin >> key ;
                list.deleteNode(key) ;
                break ;
            case 8: 
                cout << "Key: " ;
                cin >> key ;
                list.search(key) ;
                break ;
            case 9: 
                list.display() ;
                break ;
            case 0: 
                return 0 ;
            default: 
                cout << "Invalid choice\n" ;
        }
    }
}
