#include <bits/stdc++.h>
using namespace std;
int size;
template <typename T>
class Stack
{
    T Container[1000],top = -1;
    public:
    void Initialize(int size)
    {
        memset(Container,0,size);
    }
    void Push()
    {
        T Element;
        cout<<"Enter the element to push into the stack"<<endl;
        cin>>Element;
        if(IsFull())
        {
           cout<<"STACK FULL OVERFLOW EXCEPTION"<<endl; 
        }
        else
        {
            cout<<"INSERTED ELEMENT"<<endl;
            Container[++top] = Element;
        }
    }
    void Pop()
    {
        if(IsEmpty())
        {
            cout<<"STACK IS EMPTY UNDERFLOW"<<endl;
        }
        else
        {
            cout<<"ELEMENT POPPED"<<endl;
            top--;
        }
    }
    void Peek()
    {
        if(IsEmpty())
        {
            cout<<"NO ELEMENTS IN THE STACK"<<endl;
        }
        else
        {
            cout<<"PEEK ELEMENT  ";
            cout<<Container[top]<<endl;
        }
    }
    void Display()
    {
        int temp = top;
        if(IsEmpty())
        {
            cout<<"NO ELEMENTS"<<endl;
        }
        else
        {
            cout<<"DISPLAYING ELEMENTS"<<endl;
           while(temp>=0)
           {
            cout<<Container[temp--]<<" ";
           }   
        }
    }
    bool IsEmpty()
    {
        if(top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool IsFull()
    {
        if(top==size-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
int main()
{
    Stack<char>Object;
    cout<<"Enter the size of the stack"<<endl;
    cin>>size;
    Object.Initialize(size);
    while(1)
    {
        cout<<"CHOOSE OPERATION \n 1 - PUSH \n 2 - POP \n 3 - PEEK \n 4 - DISPLAY \n 5 - EXIT"<<endl;
      int Choice;
      cin>>Choice;
      switch(Choice)
      {
          case 1:
            Object.Push();
            break;
          case 2:
            Object.Pop();
            break;
          case 3:
            Object.Peek();
            break;
          case 4:
            Object.Display();
            break;
          case 5:
            break;
          case 6:
            cout<<"SELECT CORRECT OPTION"<<endl;
            break;
      }
    }
    return 0;
}
