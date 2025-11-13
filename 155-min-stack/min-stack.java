class MinStack {
    Stack<Integer> st = new Stack<>();
    PriorityQueue<Integer>pq=new PriorityQueue<>();

    public MinStack() {
        st.clear();
        pq.clear();
    }

    public void push(int val) {
        st.push(val);
        pq.add(val);
    }

    public void pop() {
        int value=st.peek();
        st.pop();
        pq.remove(value);
    }

    public int top() {
        return st.peek();
    }

    public int getMin() {
        return pq.peek();
    }
}

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(val);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */