#include <iostream>
struct Node
{
    int info;
    Node *next;
};
void addLast(Node *&head, Node *&last, int x) //echivalent la top
{
    Node *p = new Node;
    p->info = x;
    p->next = NULL;
    if (head == NULL)
    {
        head = last = p;
    }
    else
    {
        last->next = p;
        last = p;
    }
}
void addFirst(Node *&head, int x) //echivalent la push x este valoarea introdusa
{
    Node *p = new Node;
    p->info = x;
    p->next = NULL;
    if (head == NULL)
    {
        head  = p;
    }
    else
    {
        p->next = head;
        head = p;
    }
}
void addNth(Node *&head, Node *&last, int x, int n)
{
    Node *p = new Node;
    p->info = x;
    p->next = NULL;
    if (head == NULL)
    {
        head = last = p;
    }
    else
    {
        Node *t = head;
        for (int i = 1; i < n; i++)
        {
            t = t->next;
        }
        p->next = t->next;
        t->next = p;
    }
}
void iterate(Node *head)
{
    while (head != NULL)
    {
        std::cout << head->info << ' ';
        head = head->next;
    }
    std::cout << std::endl;
}
void pop(Node *&head) //deletes first
{
    Node *p = head;
    head = p->next;
    delete p;
}
// void pop(Node *&head,Node *&last) //deletes last
// {
//     Node *p = head;
//     while (p->next->next != NULL)
//     {
//         p = p->next;
//     }
//     last=p;
//     p->next = nullptr;
//     delete p->next;
// }
void delNth(Node *&head,Node *&last,int poz){
    Node *p=head;
    for(int i=1;i<poz;i++){
        p=p->next;
    }
    p->next=p->next->next;

}
int main()
{
    Node *head, *last;
    head = last = NULL;
    for (int i = 1; i <= 10; i++)
    {
        addLast(head, last, i);
    }
    addFirst(head, 20);
    addNth(head, last, 4444, 3);
    iterate(head);
    // delFirst(head);
    iterate(head);
    pop(head);
    std::cout << "pop:";
    iterate(head);
    delNth(head,last,5);
    iterate(head);
    return 0;
}