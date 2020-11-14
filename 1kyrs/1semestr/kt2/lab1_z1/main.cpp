#include <iostream>
using namespace std;

struct list {
int field;
struct list* subling;
};

struct list* init(int field) {
struct list* list;
list = new struct list;
list->field = field;
list->subling = NULL;
return list;
};

struct list* additem(list* list, int field) {
struct list* temp, * p;
temp = new struct list;
temp->field = field;
temp->subling = NULL;
list->subling = temp;
return temp;
};

struct list* deleteitem(list* del_item, list* root) {
struct list* temp;
temp = root;
while (temp->subling != del_item) {
temp = temp->subling;
}
temp->subling = del_item->subling;
delete del_item;
return temp;
};

struct list* deleteroot(list* root) {
struct list* temp;
temp = root->subling;
delete root;
return temp;
};

void show_list(list* root) {
struct list* temp;
temp = root;
do {
cout << temp->field << " ";
temp = temp->subling;
} while (temp != NULL);
};

int main()
{
list A;
A.field = 10;
A.subling = NULL;

struct list* root, *p;
root = init(10);
p = additem(root, 12);
p = additem(p, 1);
p = additem(p, 2);
p = additem(p, 3);
p = additem(p, 4);
root = deleteroot(root);
show_list(root);
}
