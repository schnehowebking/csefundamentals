#include <bits/stdc++.h>

using namespace std;
class Node {
public:
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void insert_at_tail(Node*& head, int v) {
    Node* newNode = new Node(v);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* tmp = head;
    while (tmp->next != NULL) {
        tmp = tmp->next;
    }
    tmp->next = newNode;
}




int main()
{
    // Write your code here
    
    
    int val;
    Node* head1 = NULL;
    Node* head2 = NULL;
    
    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        insert_at_tail(head1, val);
    }

    while (true) {
        cin >> val;
        if (val == -1) {
            break;
        }
        insert_at_tail(head2, val);
    }

    Node* tmp1 = head1;
    Node* tmp2 = head2;

    while (tmp1 != NULL && tmp2 != NULL) {
        if (tmp1->val != tmp2->val) {
            cout << "NO" << endl;
            return 0;
        }
        tmp1 = tmp1->next;
        tmp2 = tmp2->next;
    }

    if (tmp1 == NULL && tmp2 == NULL) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
