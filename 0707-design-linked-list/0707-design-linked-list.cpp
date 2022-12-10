class MyLinkedList {
    
    struct node{
           int value;
        node *next;
        node (int x):value(x),next(nullptr){}
        
    };
    int size;
    node *head;
    
public:
    
    
    MyLinkedList() :size(0){
      
        head=new node(0);
    }
    
    int get(int index) {
        
        if(index<0||index>=size)return -1;
        
        node* curr=head->next;
        for(int i=0;i<index;i++)
        {
            curr=curr->next;

        }
        
        return curr->value;
            
    }
    
    void addAtHead(int val) {
        node *temp=head->next;
        
        head->next=new node(val);
        head->next->next=temp;
        size++;
        
    }
    
    void addAtTail(int val) {
        
        node *curr=head;
        
       while(curr->next)curr=curr->next;
        curr->next=new node(val);
        size++;
        
        
    }
    
    void addAtIndex(int index, int val) {
        
        if(index>size||index<0)return;
      
        node* curr=head;
        
        for(int i=0;i<index;i++)curr=curr->next;
        node *temp=curr->next;
        curr->next=new node(val);
        curr->next->next=temp;
        size++;

        
    }
    
    void deleteAtIndex(int index) {
        if(index>=size|| index<0)return ;
        node *curr=head;
        
        for(int i=0;i<index;i++)curr=curr->next;
        node *temp=curr->next;
        curr->next=temp->next;
        size--;
        delete temp;
        
        
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
