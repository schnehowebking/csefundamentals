#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int val;
        Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }      
};
void print_linked_list(Node * head)
{
    cout<<endl;
    Node * tmp = head;
    while (tmp != NULL)
    {
        cout<<tmp->val<<" ";
        tmp= tmp->next;
    }
    cout<<endl<<endl;
    
}

void insert_at_tail(Node * &head, int v)
{
    Node * newNode = new Node(v);
    if(head==NULL)
    {
        head = newNode;
        return;
        
    }
    Node * tmp = head;
    while(tmp->next != NULL)
    {
        tmp= tmp->next;
    }
    // tmp is now in last
    tmp->next=newNode;

}

bool find_duplicate(Node* head) {
    vector<int> v;

    Node* tmp = head;
    while (tmp != NULL) {
        for (int i = 0; i < v.size(); i++) {
            if (v[i] == tmp->val) {
                return true;
            }
        }
        v.push_back(tmp->val);
        tmp = tmp->next;
    }

    return false;
}

int main()
{
    int val;
    Node *head = NULL;
    while (true)
    {
        cin>>val;
        if(val==-1) break;
        insert_at_tail(head, val);

    }

    if (find_duplicate(head)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    
    return 0;
}