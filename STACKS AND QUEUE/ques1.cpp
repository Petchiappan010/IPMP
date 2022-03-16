#include <iostream>
using namespace std;
struct Stack{
    int size;
    int top1; 
    int top2;
    int *a;
} st;


void push1(int n){
    
    if(st.top1 == (st.size/2)-1){
        cout<<"The stack is full"<<endl;
    }
    else{
        st.top1++;
        st.a[st.top1] = n;
        

    }
}
void push2(int n){
    if(st.top2 == st.size-1){
        cout<<"The stack is full"<<endl;
    }
    else{
        st.top2++;
        st.a[st.top2] = n;
      

    }
}

void pop1(){
  
    if(st.top1 == -1){
        cout<<"The stack is Empty"<<endl;
    }
    else{
        int x = -1;
        x = st.a[st.top1];
        st.top1--;

    }

}
void pop2(){
  
    if(st.top2 == (st.size/2)-1){
        cout<<"The stack is Empty"<<endl;
    }
    else{
        int x = -1;
        x = st.a[st.top2];
        st.top2--;
    }

}
void display1(){
    for(int i = 0; i<=st.top1; i++){
        cout<<st.a[i]<<endl;
    }
}
void display2(){
    for(int i = st.size/2; i<=st.top2; i++){
        cout<<st.a[i]<<endl;
    }
}

int main(){
    int n; 
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    st.size = n;
    st.top1 = -1;
    st.top2 = (st.size/2)-1;
    st.a = new int[st.size];
    push1(1);
    push2(2);
    push1(3);
    push2(4);
    push1(5);
    push2(6);
    push1(7);
    push2(8);
    pop1();
    pop2();
    display1();
    display2();
    return 0;
}