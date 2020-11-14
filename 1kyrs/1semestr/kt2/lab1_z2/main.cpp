#include <iostream>
#include <time.h>
#include <cmath>
#include <Windows.h>
using namespace std;

struct list {
int field;
struct list* subling;
};

struct list* init() {
int field;
struct list* list;
list = new struct list;
field = rand() % 101;
list->field = field;
list->subling = NULL;
return list;
}

struct list* additem(list* list) {
struct list* temp;
temp = init();
list->subling = temp;
temp->field = rand() % 101;
return temp;
}

struct list* deleteitem(list* del_item, list* root) {
struct list* temp;
temp = root;
while (temp->subling != del_item) {
temp = temp->subling;
}
temp->subling = del_item->subling;
delete del_item;
return temp;
}

void show_list(list* root) {
struct list* tmp;
tmp = root;
do {
cout << tmp->field << " ";
tmp = tmp->subling;
} while (tmp != NULL);
}

int main()
{
srand(time(0));
SetConsoleCP(1251);
SetConsoleOutputCP(1251);;
struct list* temp, * root;
root = init();
temp = root;
struct list* del_item;
for (int i = 1; i < 20; i++) {
temp = additem(temp);
}
del_item = root;
for (int n = 1; n < 15; n++) {
del_item = del_item->subling;
}
cout << "Массив до проведения операций: " << endl;
show_list(root);
cout<< endl << ">>" << endl;
deleteitem(del_item, root);
cout << "Массив после проведения операций: " << endl;
show_list(root);
return 0;

}
