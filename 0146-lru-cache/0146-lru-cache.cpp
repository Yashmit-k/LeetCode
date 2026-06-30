class LRUCache {
public:
    class node{
        public:
            int key;
            int val;
            node* next;
            node* prev;

            node(int k,int v){
                key=k;
                val=v;
                next=NULL;
                prev=NULL;
            }
    };
    node* head =new node(-1,-1);
    node* tail =new node(-1,-1);
    unordered_map<int,node*> m;
    int c;
    LRUCache(int capacity) {
        c=capacity;
        head->next=tail;
        tail->prev=head;
    }
    void add(node* newn){
        node* temp=head->next;
        head->next=newn;
        newn->prev=head;
        temp->prev=newn;
        newn->next=temp;
    }
    void del(node* newn){
        node* prev=newn->prev;
        node* next=newn->next;
        prev->next=next;
        next->prev=prev;
        
    }
    int get(int key) {
        if(m.find(key)==m.end())return -1;
        del(m[key]);
        add(m[key]);
        m[key]=head->next;
        return m[key]->val;
    }
    
    void put(int key, int value) {
        if(m.find(key)==m.end()){
            if(c==0){
                node * temp=tail->prev;
                tail->prev=temp->prev;
                m.erase(temp->key);
                delete temp;
                temp=tail->prev;
                temp->next=tail;
                c++;
            }
            node* temp=new node(key,value);
            add(temp);
            m[key]=head->next;
            c--;
        }
        else{
            m[key]->val=value;
            del(m[key]);
            add(m[key]);
            m[key]=head->next;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */