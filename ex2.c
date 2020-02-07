#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node_struct
{
  void *void_data;
  char *str;
  struct node_struct *next;
};

int main() {

    struct node_struct *node1, *node2;
    char *data, *string;

    data = malloc(14);
    data = "This is data!";

    string = malloc(18);
    string = "This is a string!";

    node1 = malloc(sizeof(struct node_struct));
    node1->void_data = data;
    node1->str = string;

    node2 = malloc(sizeof(struct node_struct));
    node2->void_data = data;
    node2->str = string;

    node1->next = node2;

    return 0;
}