class MinStack {
public:
int top_i;
vector <int> arr;
    MinStack() {
        top_i=-1;
    }
    
    void push(int val) {
        arr.push_back(val);
        top_i++;
        
    }
    
    void pop() {
        top_i--;
    }
    
    int top() {
        return arr[top_i];
    }
    
    int getMin() {
        int min_ele=arr[0];
        for(int i=0;i<=top_i;i++){
            min_ele=min(min_ele,arr[i]);
        }
        return min_ele;
        
    }
};
