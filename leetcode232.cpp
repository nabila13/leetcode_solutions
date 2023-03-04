class MyQueue {
public:
  stack<int>s1;
  stack<int>s2;
    MyQueue() {
    }

    void push(int x) {
        s1.push(x);
    }

    int pop() {
           change(s1,s2);
        int x=s2.top();
        s2.pop();
        change(s2,s1);
        return x;
    }

    int peek() {
            change(s1,s2);
        int p=s2.top();
        change(s2,s1);
        return p;
    }

    bool empty() {
        return (s1.empty());
    }
void change(stack<int>&s1 , stack<int>&s2){
    while(!s1.empty()){
        s2.push(s1.top());
        s1.pop();
    }
}
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
