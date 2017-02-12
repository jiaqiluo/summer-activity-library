// Jiaqi Luo
// hw3, list.h
// this file contains the declaration of the struct activity and class list(
// actually a stack ADT)

#include <cctype>
#include <cstring>
#include <iostream>
int const SIZE = 100;

struct activity {
  char *name; // eg. wind surfing
  char *description;
  char *location;        // eg. Portland
  char *gear_requirment; // eg. required, or unrequired
  char *tips;            // some tips for success
  int difficult;         // 1 - no prior knowledge, 5 - requried training
};

struct node {
  activity *data;
  node *next;
};

class list {
public:
  list();
  ~list();
  int add(activity *to_add);   // add an new node in the beginging of the list
  int remove(char location[]); // remove all the nodes which location is the
                               // same as the argument
  int display(char location[]); // display all the nodes which location are the
                                // same as teh argument in the list
  int display_all();         // display all the nodes in the list
  int get_head(node *&temp); // get the access to the first node in the list
private:
  node *head;
  int delete_node(node *&temp); // remove a node and pass it outside by
                                // reference
};
