class MyStack {
public:
        int data[100];
        int topind;
    MyStack() {
        topind=-1;
    }
    
    void push(int x) {
        if(topind==99){
            cout<<"stack is full";
        }
        else{
        topind++;
        data[topind]=x;
        }
    }
    
    int pop() {
        int n;
        if(topind==-1){
            cout<<"stack is empty";
        }
        else{
             n=data[topind];
            data[topind]=0;
            topind--;
        }
        return n;
    }
    
    int top() {
        int m=data[topind];
        return m;
    }
    
    bool empty() {
        if(topind==-1){
            return true;
        }
        else 
        return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
