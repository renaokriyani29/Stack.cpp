#include<iostream>
using namespace std;
struct node{
  int data ;
  node *link;
};
class Stack{
  private:
  node *top;
  public:
  Stack(){
    top=NULL;
  }
  void pushVslue(int i);
  int popValue();
  void viewTop();
  void viewAll();
  ~Stack(){
    if(top == NULL)
      return;
    node *temp;
    temp= new node;
    temp->data =i;
    temp->link=NULL;
    if( top==NULL)
    {
      top = temp;
    }
    else
    {
      temp->link=top;
      top=temp;
    }
  }
  int Stack::popValue()
}
node *temp;
int n;
if(top==NULL)
{
  cout<<"Stack Empty"<<endl;
  retrun NULL;
}
else
}
n=top->data;
temp=top;
top=top->link;
delete temp;
}
return n;
}
void Stack::viewTop()
{
  if(top==NULL)
}
cout<<"Stack empty"<<endl;
}
else
}
cout<<"Top isi:"<<top->data;
}
}
void Stack::viewAll()
{
  node *temp;
  temp=top;
  while(temp->link !=NULL
        {
          cout<<temp->data<<endl;
          temp=temp->link;
        }
        }
        int main()
        { Stack s;
         int temp;
         int pilih;
         while(1)
         {
           cout<<"Strack"<<endl;
           cout<<"1.data"<<endl;
           cout<<"2.pop data"<<endl;
           cout<<"3.All data"<<endl;
           cout<<"Masukan pilihan anda:":
           cin>>pilih;
           case 1:
           cout<<"insert Data"<<endl;
           cin>>temp;
           s.pushValue();
           break;
           case 2:
           s.ViewTop();
           break;
           case 3:
           temp=s.popValue();
           cout<<tempt<<"has removed"<<endl;
           break;
           case 4:
           s.VieAll();
           break;
           case 5:
           retrun 0;
         }
        }
        retrun 0;
        }
