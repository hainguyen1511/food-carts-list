/* Hai T. Nguyen
CS162 section 8 program 5
In this program, I will be keeping track of the user’s favorite foods at the local food carts:
1. Name of the cart
2. Favorite food from that cart
3. Cost
4. A description of the flavors and what the user likes about this food
5. Add one other item of your choice
*/
#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;
//Let's begin with linear linked lists by having a list of food carts data
struct food_cart
{
  char * name_cart;
  char prefer_dish[100];
  double cost;
  char descript[100];
  char sauce_topping[50];
};
struct node
{
  food_cart data;
  node * next;
};
class list
{
    public:
        list();//Constructor-initializes data members
        ~list();//Destructor-deallocates all dynamic memory
        void display_all();//Display all data within the LLL
        void build(int count, bool shouldSortInput);//Inserts data into the LLL from the user
        void get_info(node * &head);//get info for insertion
        void sorting_list(node * &head, node * new_node);//sorting out data alphabetically
    private:
        node * head; //The head of a linear linked list
};