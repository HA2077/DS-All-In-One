#include <iostream>
#include <vector>
using namespace std;

class Stack{
    private:
        vector<int> stack;
    public:
        int top;
        int stacksize = 0;
        void push(int value){
            stack.push_back(value);
            top = value;
            stacksize++;
            cout << "Pushed: " << value << " to the stack." << endl;
        }
        void pop(){
            stack.pop_back();
            stacksize--;
            if(stacksize > 0){
                top = stack[stacksize - 1];
                cout << "Popped The Top Element From the stack." << endl;
                return;
            }
            else{
                top = -1;
                cout << "The stack is empty, Push an element first!" << endl;
                return;
            }
        }
};