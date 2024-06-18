//#include<iostream>
//
//#define STRUCT_LISTNODE_H
//
//using namespace std;
//
//struct ListNode
//{
//    ListNode(int val, ListNode* nextPtr);
//    int val;
//    ListNode* next;
//};
//ListNode* head = NULL;
//ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
//{
//
//    // if list1 happen to be NULL // we will simply return list2.
//    if (list1 == NULL)
//        return list2;
//
//    // if list2 happen to be NULL // we will simply return list1.
//    if (list2 == NULL)
//        return list1;
//    
//    ListNode* ptr= list1;
//    while (ptr != NULL) {
//        cout << ptr->val << " ";
//        ptr = ptr->next;
//    }
// ////
//    return ptr;
//
//}
//   
//    struct ListNode* lst1 = (struct ListNode*) malloc(sizeof(struct ListNode));
//    void insertlst1(int new_data)
//    {
//        lst1->val = new_data;
//        lst1->next = head;
//        head = lst1;
//
//    }
//    struct ListNode* lst2 = (struct ListNode*) malloc(sizeof(struct ListNode));
//    void insertlst2(int new_data)
//    {
//        lst2->val = new_data;
//        lst2->next = head;
//        head = lst2;
//   
//    }
//    int main()
//    {
//        insertlst1(1);
//        insertlst1(2);
//        insertlst1(4);
//        insertlst2(1);
//        insertlst2(3);
//        insertlst2(4);
//        ListNode* Lst3 = mergeTwoLists(lst1, lst2);
//        while (Lst3 != NULL)
//        {
//            cout << Lst3->val << "->";
//            Lst3 = Lst3->next;
//        }
//        return 0;
//    }