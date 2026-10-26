class MyQueue {
public:
stack<int>ans1;
stack<int>ans2;
    MyQueue() {
    }
    void push(int x) {
        ans1.push(x);
    }
    int pop() {
     while(!ans1.empty()){
        ans2.push(ans1.top());
        ans1.pop();
     }
     int re=ans2.top();
     ans2.pop();
     while(!ans2.empty()){
        ans1.push(ans2.top());
        ans2.pop();
     }
     return re;
    }
    int peek() {
        while(!ans1.empty()){
        ans2.push(ans1.top());
        ans1.pop();
     }
     int re=ans2.top();
     while(!ans2.empty()){
        ans1.push(ans2.top());
        ans2.pop();
    }
    return re;
    }
    bool empty() {
         if(!ans1.empty()) return false;
         else return true;
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