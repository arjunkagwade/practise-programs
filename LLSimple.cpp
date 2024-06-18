//#include<iostream>
//
//using namespace std;
//
//struct node
//{
//    int data;
//    struct node* next;
//};
//typedef struct node NODE;
//NODE* head, * first, * temp;
//void insert(int value)
//{
//    NODE* p;
//    p = (NODE*)malloc(sizeof(NODE));
//    if (head == NULL)
//    {
//        p->data = value;
//        p->next = NULL;
//        head = first = p;
//    }
//    else
//    {
//        head->next = p;
//        p->data = value;
//        p->next = NULL;
//        head = p;
//    }
//
//}
//void display()
//{
//    NODE* temp;
//    temp = first;
//    if (head == NULL)
//    {
//        cout << "No elements in the linked list";
//    }
//    while (temp != NULL)
//    {
//        cout << " " << temp->data;
//        temp = temp->next;
//    }
//}
//void insertat(int pos, int val)
//{
//    NODE* p;
//    p = (NODE*)malloc(sizeof(NODE));
//    p->data = val;
//    temp = first;
//    for (int i = 1; i <= pos; ++i)
//    {
//        if (i == pos)
//        {
//            p->next = temp->next;
//            temp->next = p;
//            break;
//        }
//        temp = temp->next;
//    }
//}
//void deleteat(int loc)
//{
//    NODE* temp, * p;
//    temp = p = first;
//    int count = 1;
//    while(temp != NULL)
//    {
//        if (count == loc)
//        {
//            p->next = temp->next;
//            temp->next = NULL;
//            free(temp);
//            temp = NULL;
//        }
//        else
//        {
//            p = temp;
//            temp = temp->next;
//            count++;
//        }
//    }
//    return;
//
//}
//int main()
//{
//    insert(10);
//    insert(20);
//    insert(30);
//    insert(50);
//    insertat(3, 40);
//    //display();
//    deleteat(3);
//    display();
//}