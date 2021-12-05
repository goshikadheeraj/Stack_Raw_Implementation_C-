#include <bits/stdc++.h>
using namespace std;
int size;
class Stack
{
    int Container[1000],top = -1;
    public:
    void Initialize(int size)
    {
        memset(Container,0,size);
    }
    void Push()
    {
        int Element;
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
    Stack Object;
    cout<<"Enter the size of the stack"<<endl;
    cin>>size;
    Object.Initialize(size);
    while(1)
    {
        cout<<"CHOOSE OPERATION \n 1 - PUSH \n 2 - POP \n 3 - PEEK \n 4 - DISPLAY \n 5 - EXIT"<<endl;
      int Choice;
      cin>>Choice;
      if(Choice==1)
      {
          Object.Push();
      }
      else if(Choice==2)
      {
          Object.Pop();
      }
      else if(Choice==3)
      {
          Object.Peek();
      }
      else if(Choice==4)
      {
          Object.Display();
      }
      else
      {
          break;
      }
    }
    return 0;
}
