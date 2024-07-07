//creating the prototype for a node in DLL
class Node
{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data1)
    {
        data = data1;
        next =  nullptr;
        prev = nullptr;
    }
    Node(Node* prev1, int data1, Node* next1)
    {
        data = data1;
        next = next1;
        prev = prev1;
    }
};

//1. CREATING A DLL FROM AN ARRAY
Node *createDLL(vector<int> &arr)------>T.C: O(N); S.C: O(N); N= size of arr
{
    Node* head = new Node(nullptr, arr[0],nullptr);
    Node* back  = head;
    for(int i=1; i<arr.size(); i++)
    {
        Node* temp = new Node(back,arr[i],nullptr);
        back->next = temp;
        back = temp;
    }
    return head;
}
//2. PRINTING DLL
void printDLL(Node *head)---------->T.C: O(N)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
