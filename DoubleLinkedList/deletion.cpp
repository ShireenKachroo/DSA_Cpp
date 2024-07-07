//1. DELETION OF HEAD
Node* deleteHead(Node* head)-------->T.C: O(1)
{
    Node* temp = head;
    head = head->next;
    temp->next = nullptr;
    head->prev = nullptr;
    delete temp;
    return head;
}

//2. DELETION OF TAIL
Node* deleteTail(Node *head)--------->T.C: O(N)
{
    if(head == NULL || head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->prev->next = nullptr;
    temp->prev = nullptr;
    return head;
}

//3. DELETION OF Kth ELEMENT
Node* deleteKthEle(Node* head, int pos)---->T.C:O(N)
{
    if(pos == 1) return deleteHead(head);
    Node *temp = head;
    int cnt = 0;
    while(temp != NULL)
    {
        cnt++;
        if(cnt == pos)
        {
            temp->prev->next = temp->next;
            //temp->next->prev = temp->prev;
            temp->next = nullptr;
            temp->prev = nullptr;
            delete temp;
            break;
        }
        temp = temp->next;
    }
    return head;
}
