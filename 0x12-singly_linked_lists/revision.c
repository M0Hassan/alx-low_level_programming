#include "lists.h"


size_t print_list(const list_t *h)
{
  size_t counter = 0;

  while (h != NULL)
    {
      if (h->str == NULL)
	{
	  printf("[0] (nil)\n");
	}
      else
	{
	  printf("[%d] %s\n", h->len, h->str);
	}
      counter++;
      h = h->next;
    }
  return (counter);
}

size_t list_len(const list_t *h)
{
  size_t counter = 0;

  while (h != NULL)
    {
      counter++;
      h = h->next;
    }
  return (counter);
}

int _strlen(const char *str)
{
  int len;

  for (len = 0; str[len] != '\0'; len++)
    {
      ;
    }
  return (len);
}

list_t *add_node(list_t **head, const char *str )
{
  list_t *newnode;

  if (str == NULL)
    {
      return (NULL);
    }
  newnode = malloc(sizeof(list_t));
  if (newnode == NULL)
    {
      return (NULL);
    }
      
	     
  newnode->str = strdup(str);
  newnode->len = _strlen(str);

  if (strdup(str) == NULL)
    {
      return (NULL);
    }
	
  if (head == NULL)
    {
      newnode->next = NULL;
    }
  else
    {
      newnode->next = *head;
      *head = newnode;
    }
  
  return (newnode);
}

list_t *add_node_end(list_t **head, const char *str)
{
  list_t *newnode, *tmp;

  if (str == NULL)
    {
      return (NULL);
    }
  if (strdup(str) == NULL)
    {
      return (NULL);
    }

  newnode = malloc(sizeof(list_t));
  if (newnode == NULL)
    {
      return (NULL);
    }

  newnode->str = strdup(str);
  newnode->len = _strlen(str);

  if (*head == NULL)
    {
      *head = newnode;
    }
  else
    {
      tmp = *head;

      while (tmp->next != NULL)
	{
	  tmp = tmp->next;
	}
      tmp->next = newnode;
      newnode->next = NULL;
    }
      return (newnode);
}


void free_list(list_t *head)
{
  while (head != NULL)
    {
      free(head->str);
      free(head);
      head = head->next;
    }
}


void __attribute__ ((constructor)) execute_before_main()
{
  printf("Will print before the main function is executed");
}
