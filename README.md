# Food Carts List
* Build a linear linked list of these food carts and display them to the user once done.

> [!TIP]
> There are really some great options and can feed a whole family without as much expense. I really enjoy the variety most of all but the flavors available are so great. The problem is that I sometimes forget which cart is the best and which to avoid…so in this program, you will be keeping track of the user’s favorite foods at the local food carts:
1. Name of the cart
2. Favorite food from that cart
3. Cost
4. A description of the flavors and what the user likes about this food
5. Add one other item of your choice

> [!CAUTION]
> Your program will need to build a linear linked list of these food carts and display them to the user once done.
Extra Credit will be awarded for building the linear linked list in sorted order, based on the name of the food.
Follow this plan:
Task 1. In a .h file, create a struct food cart with the five members. Use a dynamically allocated array (char *) for at least one of the members.
Task 2. Add a struct node to your .h file
a. The data in a node should be a food cart object and a next pointer.
Task 3. In your .cpp file, create a function to read in information from the user
Task 4. Write a function to insert this information into a linear linked list
a. Start by inserting at the beginning
b. Extra Credit: Then, implement the task to insert the data in sorted
CS162 Winter 2023 Program #5
order as it is being read in (for extra credit)
Task 5. Write another function to display all of the games
Task 6. Release all of the dynamic memory (destroying the LLL).
Other important items:
1. All memory that is dynamically allocated needs to be released with delete when you are done.
2. Make sure now to separate out your code into a .h file and .cpp files.
3. You are not required to use classes in this assignment. But they MAY be used instead of the food cart struct
