/* Hai T. Nguyen
CS162 section 8 program 5
//Protoypes
void display_all()
void build(int & count)
void get_info(node * &head)
*/
#include "foodcart_list.h"
int main()
{
    list my_list;
    int count {0};
    char shouldSort = ' ';
    cout << "Number of food carts you want on the list: ";
    cin >> count;
    cin.ignore(100,'\n');
    cout << "Do you want to sort the input as you go? y/n ";
    cin >> shouldSort;
    cin.ignore(100,'\n');
    my_list.build(count, shouldSort=='y');
    my_list.display_all();
    return 0;
}