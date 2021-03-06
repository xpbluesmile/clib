/*******************************************************************************
 * queue.h
 * queuue implementation
 *
 * @author		Theo Seo
 * @email		makeitafridaynight@gmail.com
 ******************************************************************************/

#ifndef _QUEUE_H
#define _QUEUE_H

#define ELEMENT_TYPE int

typedef struct _QUEUE
{
	ELEMENT_TYPE *p_data;
	int front;
	int back;
	int size;
} QUEUE;

QUEUE* q_create(int init_size);
void q_destroy(QUEUE **pp_q);
int q_is_full(QUEUE *p_q);
int q_is_empty(QUEUE *p_q);
int q_enqueue(QUEUE *p_q, ELEMENT_TYPE a);
int q_peek(QUEUE *p_q, ELEMENT_TYPE *p_a);
int q_dequeue(QUEUE *p_q, ELEMENT_TYPE *p_a);

#endif

/* end of file */

