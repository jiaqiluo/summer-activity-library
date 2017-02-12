// jiaqi Luo
// Hw3, list.cpp
// this file coantains the fucntions of list class

#include "list.h"
using namespace std;

list::list() { head = NULL; }

list::~list() {
  node *temp;
  while (head != NULL) {
    temp = head->next;
    delete[] head->data->name;
    delete[] head->data->description;
    delete[] head->data->location;
    delete[] head->data->gear_requirment;
    delete[] head->data->tips;
    delete head->data;
    delete head;
    head = temp;
  }
}

// this function adds an new node in the begining of the list, and the data in
// the node is the activity as the argument
// finally return 1
int list::add(activity *to_add) {
  node *current = new node;
  current->data = new activity;
  current->data->name = new char[strlen(to_add->name) + 1];
  strcpy(current->data->name, to_add->name);

  current->data->description = new char[strlen(to_add->description) + 1];
  strcpy(current->data->description, to_add->description);

  current->data->location = new char[strlen(to_add->location) + 1];
  strcpy(current->data->location, to_add->location);

  current->data->gear_requirment =
      new char[strlen(to_add->gear_requirment) + 1];
  strcpy(current->data->gear_requirment, to_add->gear_requirment);

  current->data->tips = new char[strlen(to_add->tips) + 1];
  strcpy(current->data->tips, to_add->tips);

  current->data->difficult = to_add->difficult;
  current->next = head;
  head = current;
  return 1;
}

// this function remove all the nodes which have the same location as the
// argument in the list, and return 1 finally
int list::remove(char location[]) {
  node *temp = head;
  while (head && strcmp(head->data->location, location) == 0) {
    temp = head->next;
    delete_node(head);
    head = temp;
  }
  while (temp) {
    while (temp->next && strcmp(temp->next->data->location, location) == 0) {
      node *current = temp->next;
      temp->next = current->next;
      delete_node(current);
    }
    temp = temp->next;
  }
}

// this function deletes a particular node which is the argument
int list::delete_node(node *&temp) {
  delete[] temp->data->name;
  delete[] temp->data->description;
  delete[] temp->data->location;
  delete[] temp->data->gear_requirment;
  delete[] temp->data->tips;
  delete temp->data;
  delete temp;
  return 1;
}

// this fuction displays all the node which have the same location with the
// argument,
// and return 1 finally
int list::display(char location[]) {
  node *temp = head;
  while (temp) {
    if (strcmp(temp->data->location, location) == 0) {
      cout << "-----------" << endl;
      cout << "name: " << temp->data->name << endl;
      cout << "description: " << temp->data->description << endl;
      cout << "location: " << temp->data->location << endl;
      cout << "difficult: " << temp->data->difficult << endl;
      cout << "gear_requirment: " << temp->data->gear_requirment << endl;
      cout << "tips: " << temp->data->tips << endl;
      cout << "-----------" << endl;
    }
    temp = temp->next;
  }
  return 1;
}

// this function displays all the nodes in the list
int list::display_all() {
  node *temp = head;
  while (temp) {
    cout << "-----------" << endl;
    cout << "name: " << temp->data->name << endl;
    cout << "description: " << temp->data->description << endl;
    cout << "location: " << temp->data->location << endl;
    cout << "difficult: " << temp->data->difficult << endl;
    cout << "gear_requirment: " << temp->data->gear_requirment << endl;
    cout << "tips: " << temp->data->tips << endl;
    cout << "-----------" << endl;
    temp = temp->next;
  }
  return 1;
}

// this function pass the head in the list outside as the argument
// finally return 1
int list::get_head(node *&temp) {
  temp = head;
  return 1;
}
