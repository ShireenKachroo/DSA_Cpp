//1. INSERTION OF A HEAD
Node* insertHead(Node* head, int val)----->T.C: O(1)
{
    Node *newHead = new Node(nullptr,val,head);
    head->prev = newHead;
    return newHead;
}

//2.INSERTION OF A TAIL
Node* insertTail(Node *head, int val)--------->T.C: O(N)
{
    if(head->next == NULL) return insertHead(head,val);
    Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    Node* newTail = new Node(temp,val,nullptr);
    temp->next = newTail;
    return head;
}

//3.INSERT BEFORE Kth Node
Node* insertBeforeKthNode(Node* head, int val, int k)------>T.C: O(N)
{
    if(k == 1) return insertHead(head,val);     //insert at head
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL)
    {
        cnt++;
        if(cnt == k)
        {
            //do the insertion
            Node* nodeToInsert = new Node(temp->prev,val,temp);
            temp->prev->next = nodeToInsert;
            temp->prev = nodeToInsert;
            break;
        }
        temp = temp->next;
    }
    return head;
}
