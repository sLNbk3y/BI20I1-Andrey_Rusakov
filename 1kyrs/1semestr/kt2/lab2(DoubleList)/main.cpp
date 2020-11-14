#include <iostream>
#include <Windows.h>
using namespace std;
struct DoubleList{
    int data;
    DoubleList *left;
    DoubleList *right;
};
DoubleList *base;
void AddItem(int value, int pos)
{
    DoubleList *node=new DoubleList;
    node->data=value;
    if (base==NULL){
    node->right=node;
    node->left=node;
    base=node;
    }
    else{
        DoubleList *p=base;
    for(int i=pos; i>1; i--) p=p->right;
    p->left->right=node;
    node->left=p->left;
    node->right=p;
    p->left=node;
    }
    cout<<"������� ��������..."<<endl;
}
int DeleteItem(int pos){
    if (base==NULL) { cout<< "������ ����"; return 0; }
    if (base==base->right){
            delete base;
            base=NULL;
            }
            else{
                DoubleList *a=base;
                for (int i=pos; i>1; i--) a=a->right;
                if (a==base) base=a->right;
                a->left->right=a->right;
                a->right->left=a->left;
                delete a;
                }
cout<<"������� ������";
}
void PrintList(){
    if (base==NULL) cout<<"������ ����"<<endl;
    else{
         DoubleList *a=base;
         cout<<"������: ";
         do{
            cout<<a->data<<" ";
            a=a->right;
         }
         while(a!=base); cout<<" ";
        }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int value, pos, op;
do{
        cout<<" "<<endl;
        cout<<"0. �����"<<endl;
        cout<<"1. �������� �������"<<endl;
        cout<<"2. ������� �������"<<endl;
        cout<<"3. ������� ������"<<endl;
        cout<<"4. ������������ �����"<<endl;
        cout<<"����� �������� ��������?"<<endl;
        cout<<"<<<<<<<<<<<<"<<endl; cin>>op; cout<<">>>>>>>>>>>>"<<endl;
        switch (op){
            case 1:
                cout<<"�������� = "; cin>>value;
                cout<<"������� = "; cin>>pos;
                AddItem(value, pos); break;
            case 2:
                cout<<"������� = "; cin>>pos;
                DeleteItem(pos); break;
            case 3: PrintList(); break;
                    }

    } while (op!=0);
}
