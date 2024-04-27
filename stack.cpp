  #include<iostream>
  using namespace std;
  #define n 100
  class stack{
    int * arr;
    int top;
    public:
    stack(){
        arr=new int[n];
        top=-1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"Stack overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"No element to pop"<<endl;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"No element in stack"<<endl;
            return -1;
        }
        return arr[top];
    }
    bool empty(){
        if(top<0){
            return 1;
        }
        return 0;
    }
  };
  int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    st.pop();
    if(st.empty()==1){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack still contain some values"<<endl;
    }
  }
