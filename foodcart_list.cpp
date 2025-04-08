/* Hai T. Nguyen
CS162 section 8 program 5
*/
/*struct food_cart
{
  char * name_cart;
  char prefer_dish[100];
  double cost;
  char descript[100];
  char sauce_topping[50];
};
class list
{
    public:
        list();//Constructor - initializes data members
        ~list();//Destructor - deallocates all dynamic memory
        void display_all();//Display all data within the LLL
        void build(int & count);//Inserts data into the LLL from the user
        void get_info(node * &head);
    private:
        node * head; //The head of a linear linked list
};
*/
#include "foodcart_list.h"
//Constructor
list::list()
{
     head = nullptr;
}
//Decontructor
list::~list()
{
  while (head)
   {
    node * temp = head;
    head = head -> next;
    delete temp;
   }
}
//Getting info and input in the link list
void list::get_info(node * &head)
{
    char temp [100];
    cout << "**********************************" << endl; 
    cout << "Enter the name of food cart: ";
    cin.get(temp,100, '\n'); //reads in food cart
    cin.ignore(100, '\n');
    head->data.name_cart = new char[strlen(temp) +1];
    strcpy(head->data.name_cart,temp);
    cout << "Please enter the prefer_dish: ";
    cin.get(head->data.prefer_dish,100, '\n');
    cin.ignore(100, '\n');
    cout << "Enter the cost: $";
    cin >> head->data.cost;
    while (head->data.cost <= 0)//less or equal zero will get this prompt
      {
        cout << "Enter the cost: $";
        cin >> head->data.cost;
      }
    cin.ignore(100, '\n');
    cout << "A description of the flavors: ";
    cin.get(head->data.descript,100, '\n');
    cin.ignore(100, '\n');
    cout << "Sauce or topping: ";
    cin.get(head->data.sauce_topping,50, '\n');
    cin.ignore(100, '\n');
}
//this function is where we build nodes for infos.
void list::build(int count, bool shouldSortInput)
{
    char response = 'y'; //does the user want to do this again
    int i {0};
    node * current = nullptr;
    while (tolower(response) == 'y' && i < count)
    {
      if (nullptr == head)//case with no node
        {
          head = new node;
          get_info(head);
          head -> next = nullptr;
        }
      else//case with nodes present
        {
          current = new node;
          get_info(current);
          if(!shouldSortInput)//ask if user want to sort out data
          {
            current -> next = head;
            head = current;  
          }
      else//then sorting process happen here
      {
        sorting_list(head, current);
      }
        }
      if(i < count - 1)//ask if you want to continue entering
        {
          cout << "Again? (y or n): ";
          cin >> response;
          cin.ignore(100, '\n');
        }
        ++i;
    }
}
//Display all items in a linear linked list
void list::display_all()
{
     node * current = head;
    cout << "---You entered: ---" << endl;
    while (current)
     {
         cout << current -> data.name_cart << " | " << current -> data.prefer_dish << " | " << current -> data.cost << " | " << current -> data.descript << " | " << current -> data.sauce_topping << endl;
         current = current -> next;
     }
     cout << endl << endl;
}
//sorting out nodes with case by case scenarios.
void list::sorting_list(node * &head, node * new_node)
{
  node * current = head;
  node * previous = current;
  //checking the criteria at the begining//make the new node head of the list
  if(current->next == nullptr && strcmp(current->data.name_cart, new_node->data.name_cart) > 0)
  {
    new_node -> next = head;
    head = new_node;
    return;
  }
  // traversing to until it need swapping
  while (current -> next != nullptr && strcmp(current->data.name_cart,new_node->data.name_cart) < 0)
    {   
      previous = current;
      current = current->next;
    }
  if(current->next == nullptr)//if it is at the end then this will happen
  {
    //insert the node at the end
    current->next = new_node;
    new_node -> next = nullptr;
  }
  else//happen in the middle if above fail.
  {
    previous->next = new_node;
    new_node->next = current;
  }
  return;
}