#include <bits/stdc++.h>

using namespace std;

class SinglyLinkedListNode {
    public:
        int data;
        SinglyLinkedListNode *next;

        SinglyLinkedListNode(int node_data) {
            this->data = node_data;
            this->next = nullptr;
        }
};

class SinglyLinkedList {
    public:
        SinglyLinkedListNode *head;
        SinglyLinkedListNode *tail;

        SinglyLinkedList() {
            this->head = nullptr;
            this->tail = nullptr;
        }

        void insert_node(int node_data) {
            SinglyLinkedListNode* node = new SinglyLinkedListNode(node_data);

            if (!this->head) {
                this->head = node;
            } else {
                this->tail->next = node;
            }

            this->tail = node;
        }
};

void print_singly_linked_list(SinglyLinkedListNode* node) {
    while (node) {
        cout<<node->data<<" ";
        node = node->next;

    }
}




SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    SinglyLinkedListNode* ll = llist;      
    
    int i = 0;
    
   if(position == 0){
       llist = ll->next;
       delete ll;
       return llist;
   }
   
   else{
       llist = ll;
       SinglyLinkedListNode* tmp = llist;
       while( i < position){
           tmp = ll;
           ll = ll->next;
           i++;
       }
       
       tmp->next = ll->next;
       delete ll;
       return llist;
   }  
 
}

int main()
{
    SinglyLinkedList* llist = new SinglyLinkedList();

    int llist_count;
    cin >> llist_count;    

    for (int i = 0; i < llist_count; i++) {
        int llist_item;
        cin >> llist_item;
        
        llist->insert_node(llist_item);
    }

    int position;
    cin >> position;   

    SinglyLinkedListNode* llist1 = deleteNode(llist->head, position);
    print_singly_linked_list(llist1);


    return 0;
}
