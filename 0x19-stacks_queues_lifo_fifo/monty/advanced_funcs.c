#include "monty.h"


/**
 * pstr - prints the string starting at the top of the stack
 * @stack: stack/queue structure
 * @line_number: line_cnt
 */
void pstr(stack_t **stack, unsigned int line_number)
{
  stack_t *aux = *stack;
  int len = dlistint_len(*stack);
  (void)line_number;

  if (len <= 0)
    {
      printf("\n");
      return;
    }
  while (aux->next)
    aux = aux->next;
  while (aux)
    {
      if (isascii(aux->n) == 0 || aux->n == 0)
	break;
      printf("%c", aux->n);
      aux = aux->prev;
    }
  printf("\n");
}

/**
 * rotl - rotate the stack to the top
 * @stack: stack/queue structure
 * @line_number: line_cnt
 */
void rotl(stack_t **stack, unsigned int line_number)
{
  stack_t *aux = *stack;
  (void)line_number;

  if (!*stack || !stack || !(*stack)->next)
    return;

  while (aux->next)
    aux = aux->next;
  add_dnodeint(stack, aux->n);
  delete_dnodeint_at_end(stack);
}
/**
 * rotr - rotates the stack to the bottom
 * @stack: stack/queue structure
 * @line_number: line_cnt
 */
void rotr(stack_t **stack, unsigned int line_number)
{
  stack_t *aux = *stack;
  (void)line_number;

  if (!*stack || !stack || !(*stack)->next)
    return;

  add_dnodeint_end(stack, (*stack)->n);
  aux = aux->next;
  free(*stack);
  *stack = aux;
  if (*stack)
    (*stack)->prev = NULL;
}


/**
 * pchar - prints the char at the top of the stack
 * @stack: stack/queue structure
 * @line_number: line_cnt
 */
void pchar(stack_t **stack, unsigned int line_number)
{
  stack_t *aux = *stack;
  int len = dlistint_len(*stack);
  (void)line_number;

  if (len <= 0)
    {
      dprintf(2, "L%d: can't pchar, stack empty\n", initial.line_cnt);
      free_dlistint(initial.head);
      free(initial.readed);
      fclose(initial.monty_file);
      exit(EXIT_FAILURE);
    }
  while (aux->next)
    aux = aux->next;
  if (isascii(aux->n) == 0)
    {
      dprintf(2, "L%d: can't pchar, value out of range\n", initial.line_cnt);
      free_dlistint(initial.head);
      free(initial.readed);
      fclose(initial.monty_file);
      exit(EXIT_FAILURE);
    }
  printf("%c\n", aux->n);
}
