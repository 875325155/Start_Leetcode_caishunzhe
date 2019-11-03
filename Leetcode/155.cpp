class MinStack {
public:
    /** initialize your data structure here. */

    MinStack() {
    int minstack1=-100000,minstack2=-100000+1;
    stack<int> s;
    }

    void push(int x) {
    s.push(x);
    //��¼��С����
    if(x<minstack1)
        minstack2=minstack1;
        minstack1=x;
    }

    void pop() {
    //���滻�ˣ��������ڶ�����
    if(s.empty())
        return false;
    else
    {
        if(s.top()==minstack1)
            minstack1=minstack2;
    }
    s.pop();

    }

    int top() {
    return s.top();
    }

    int getMin() {
    return minstack;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
