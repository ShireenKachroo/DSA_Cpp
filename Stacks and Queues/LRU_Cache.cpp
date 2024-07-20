class LRUCache {
public:
    /*prototype for DLL node*/
    class Node{
    public:
        int key,val;
        Node* next;
        Node* prev;
        Node(int key_, int value){
            key = key_;
            val = value;
        }
    };
    /*initialising head,tail with arbitrary vals to keep track of rest of the nodes*/
    Node* head = new Node(-1,-1);
    Node*tail = new Node(-1,-1);

    int cap;
    unordered_map<int,Node*>m;

    LRUCache(int capacity) {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }
    
    /*helper functions---> addNode(), deleteNode()*/
    void addNode(Node* newNode){
        Node* temp = head->next;
        newNode->next = temp;
        newNode->prev = head;
        head->next = newNode;
        temp->prev = newNode;
    }
    void deleteNode(Node* delNode){
        Node* delPrev = delNode->prev;
        Node* delNxt = delNode->next;
        delPrev->next = delNxt;
        delNxt->prev = delPrev;
    }


    int get(int key) {
        if(m.find(key) != m.end()){
            //key already exists in the map
            Node* resNode = m[key];
            int res = resNode->val;
            m.erase(key);
            deleteNode(resNode);
            addNode(resNode);
            m[key] = head->next;
            return res;
        }
        return -1;
    }
    void put(int key, int value) {
        if(m.find(key) != m.end()){
            //key already exists in the map
            Node* existingNode = m[key];
            m.erase(key);
            deleteNode(existingNode);
        }
        if(m.size() == cap){
            //delete the least recently used ele i.e. ele just before tail (sabse purana wala)
            m.erase(tail->prev->key);
            deleteNode(tail->prev);
        }
        addNode(new Node(key,value));
        m[key] = head->next;
    }
};
