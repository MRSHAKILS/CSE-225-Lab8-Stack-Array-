#include <iostream>
#include"stacktype.h"

using namespace std;

int main()
{

   StackType<int> s1;

   if(s1.IsEmpty())
   {
        cout << "Stack is Empty" << endl;
   }
   else
   {
       cout << "Stack is not Empty" << endl;
   }

    //Pushing
   s1.Push(5);
   s1.Push(7);
   s1.Push(4);
   s1.Push(2);


   if(s1.IsEmpty())
   {
        cout << "Stack is Empty" << endl;
   }
   else
   {
       cout << "Stack is not Empty" << endl;
   }

   if(s1.IsFull())
   {
        cout << "Stack is Full" << endl;
   }
   else
   {
       cout << "Stack is not Full" << endl;
   }


   //printing
   StackType<int> temp;
   while(!s1.IsEmpty())
   {
       int item = s1.Top();
       //cout << item << " ";
       temp.Push(item);
       s1.Pop();
   }
   cout << endl;

   //transfer to original stack also print
   while(!temp.IsEmpty())
   {
       s1.Push(temp.Top());

       cout << temp.Top() << " ";
       temp.Pop();
   }
      cout << endl;

        //Push another item
      s1.Push(3);

        //transfer to another  stack
      while(!s1.IsEmpty())
      {
          int item = s1.Top();
          temp.Push(item);


       s1.Pop();
      }
    cout << endl;

        //Transfer to original stack and printing in order
      while(!temp.IsEmpty())
      {
          s1.Push(temp.Top());
          cout << s1.Top() << " ";
          temp.Pop();

      }
      cout << endl;

      if(s1.IsFull())
   {
        cout << "Stack is Full" << endl;
   }
   else
   {
       cout << "Stack is not Full" << endl;
   }

   s1.Pop();
   s1.Pop();
   cout << s1.Top() << endl;


   //2nd task

   string input;
   cout << "Enter parenthesis: ";
   while(cin >> input && input != "exit")
   {
       StackType <char> s;
       bool isBalanced;

       for(char c: input)
       {
           if(c == '(')
           {
               s.Push(c);
           }
           else if(c == ')')
           {
               if(s.IsEmpty())
               {
                   isBalanced = false;
                   break;
               }
               s.Pop();

           }
       }

       if(s.IsEmpty())
       {
           cout << "Balanced" << endl;
       }
       else
       {
           cout << "Not Balanced" << endl;

       }
       cout << "Enter another string or 'exit' to quit: ";
   }








    return 0;
}
