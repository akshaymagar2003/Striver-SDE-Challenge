class minStack {
private:
    stack<int> stk;           // Standard stack to store elements
    stack<int> minStk;        // Stack to store the minimum elements
    
public:
    // Constructor
    minStack() {}
    
    // Function to add another element equal to num at the top of the stack.
    void push(int num) {
        stk.push(num);
        if (minStk.empty() || num <= minStk.top()) {
            minStk.push(num);
        }
    }
    
    // Function to remove the top element of the stack.
    int pop() {
        if (stk.empty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        int topElement = stk.top();
        stk.pop();
        if (topElement == minStk.top()) {
            minStk.pop();
        }
        return topElement;
    }
    
    // Function to return the top element of the stack if it is present. Otherwise, return -1.
    int top() {
        if (stk.empty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return stk.top();
    }
    
    // Function to return the minimum element of the stack if it is present. Otherwise, return -1.
    int getMin() {
        if (minStk.empty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return minStk.top();
    }
};
