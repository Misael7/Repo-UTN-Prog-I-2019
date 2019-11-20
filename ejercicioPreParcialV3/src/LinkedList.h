/*
 * LinkedList.h
 *
 *  Created on: 20 nov. 2019
 *      Author: alumno
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
typedef struct
{
	int size;
	void* pFirstNode;
} LinkedList;
typedef struct
{
	void* pElement;
	void* pNextNode;
}Node;

static Node* getNode(LinkedList* this, int nodeIndex);
static int addNode(LinkedList* this, int nodeIndex,void* pElement);
void ll_swapper(Node *first,Node *second);

#endif /* LINKEDLIST_H_ */
