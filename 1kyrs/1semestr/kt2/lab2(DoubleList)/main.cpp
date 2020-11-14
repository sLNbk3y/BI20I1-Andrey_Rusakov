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
    cout<<"Элемент добавлен..."<<endl;
}
int DeleteItem(int pos){
    if (base==NULL) { cout<< "Список пуст"; return 0; }
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
cout<<"Элемент удален";
}
void PrintList(){
    if (base==NULL) cout<<"Список пуст"<<endl;
    else{
         DoubleList *a=base;
         cout<<"Список: ";
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
        cout<<"0. Выйти"<<endl;
        cout<<"1. Добавить элемент"<<endl;
        cout<<"2. Удалить элемент"<<endl;
        cout<<"3. Вывести список"<<endl;
        cout<<"4. Сформировать древо"<<endl;
        cout<<"Какую провести операцию?"<<endl;
        cout<<"<<<<<<<<<<<<"<<endl; cin>>op; cout<<">>>>>>>>>>>>"<<endl;
        switch (op){
            case 1:
                cout<<"Значение = "; cin>>value;
                cout<<"Позиция = "; cin>>pos;
                AddItem(value, pos); break;
            case 2:
                cout<<"Позиция = "; cin>>pos;
                DeleteItem(pos); break;
            case 3: PrintList(); break;
                    }

    } while (op!=0);
}
