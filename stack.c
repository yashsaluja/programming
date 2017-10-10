#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#include<alloc.h>
 
void Push(int, node **);
void Display(node **);
int Pop(node **);
int Sempty(node *);
 
typedef struct stack {
   int data;
   struct stack *next;
} node;
 
 
void main() {
   node *top;
   int data, item, choice;
   char ans, ch;
 
   clrscr();
 
   top = NULL;
 
   printf("\nStack Using Linked List : nn");
   do {
      printf("\n\n The main menu");
      printf("\n1.Push \n2.Pop \n3.Display \n4.Exit");
      printf("\n Enter Your Choice");
      scanf("%d", &choice);
 
      switch (choice) {
      case 1:
         printf("\nEnter the data");
         scanf("%d", &data);
         Push(data, &top);
         break;
      case 2:
         if (Sempty(top))
            printf("\nStack underflow!");
         else {
            item = Pop(&top);
            printf("\nThe popped node is%d", item);
         }
         break;
      case 3:
         Display(&top);
         break;
      case 4:
         printf("\nDo You want To Quit?(y/n)");
         ch = getche();
         if (ch == 'y')
            exit(0);
         else
            break;
      }
 
      printf("\nDo you want to continue?");
      ans = getche();
      getch();
      clrscr();
   } while (ans == 'Y' || ans == 'y');
   getch();
}
 
void Push(int Item, node **top) {
   node *New;
   node * get_node(int);
   New = get_node(Item);
   New->next = *top;
   *top = New;
}
 
node * get_node(int item) {
   node * temp;
   temp = (node *) malloc(sizeof(node));
   if (temp == NULL)
      printf("\nMemory Cannot be allocated");
   temp->data = item;
   temp->next = NULL;
   return (temp);
}
 
int Sempty(node *temp) {
   if (temp == NULL)
      return 1;
   else
      return 0;
}
 
int Pop(node **top) {
   int item;
   node *temp;
   item = (*top)->data;
   temp = *top;
   *top = (*top)->next;
   free(temp);
   return (item);
}
 
void Display(node **head) {
   node *temp;
   temp = *head;
   if (Sempty(temp))
      printf("\nThe stack is empty!");
   else {
      while (temp != NULL) {
         printf("%d\n", temp->data);
         temp = temp->next;
      }
   }
   getch();
}