//
// Created by 89252 on 2020/11/30.
//

#include <stdlib.h>
#include <string.h>

#define IN_LL_LIB   1   /* in the library of primitives */

#include "LLGEN.h"

/*--- Aliases to make the code more readable ---*/

#define LLHead (L->LHead)      /* The head of the current list */
#define LLTail (L->LTail)      /* The tail of the current list */
#define NodeCount (L->LCount)  /* Nodes in the current list */

#define CreateData     (*(L->LCreateData))
#define DeleteData     (*(L->LDeleteData))
#define DuplicatedNode (*(L->LDuplicatedNode))
#define NodeDataCmp    (*(L->LNodeDataCmp))

/*----------------------------------------------------
 * Add a node at head: first allocate the space for
 * the data, then allocate a node with a pointer to
 * the data, then add the node to the list.
 *--------------------------------------------------*/
int AddNodeAtHead(struct List *L, void *nd) {
    Link pn;

    pn = CreateNode(L, nd);
    if (pn == NULL)
        return (0);

    /*--- Add the node ---*/
    if (LLHead == NULL)   /* is it the first node? */
    {
        LLHead = LLTail = pn; /*--- yes ---*/
    } else                      /*--- no  ---*/
    {
        LLHead->prev = pn; /* first goes node before Head */
        pn->next = LLHead; /* put Head next */
        LLHead = pn;       /* then point Head to us */
    }

    NodeCount += 1;
    return (1);
}

struct List *CreateLList(
        void *( *fCreateData )(void *),
        int    ( *fDeleteData )(void *),
        int    ( *fDuplicatedNode )(Link, Link),
        int    ( *fNodeDataCmp )(void *, void *)) {
    struct List *pL;

    pL = (struct List *) malloc(sizeof(struct List));
    if (pL == NULL)
        return NULL;

    pL->LHead = NULL;
    pL->LTail = NULL;
    pL->LCount = 0;

    pL->LCreateData = fCreateData;
    pL->LDeleteData = fDeleteData;
    pL->LDuplicatedNode = fDuplicatedNode;
    pL->LNodeDataCmp = fNodeDataCmp;

    return (pL);
}

/*---------------------------------------------------------------
 * Creates a node and then calls the application-specific
 * function CreateData() to create the node's data structure.
 * Returns NULL on error.
 *-------------------------------------------------------------*/
Link CreateNode(struct List *L, void *data) {
    Link new_node;

    new_node = (Link) malloc(sizeof(struct Node));
    if (new_node == NULL)
        return (NULL);

    new_node->prev = NULL;
    new_node->next = NULL;

    /*--- now call the application-specific data allocation ---*/
    new_node->pdata = CreateData(data);
    if (new_node->pdata == NULL) {
        free(new_node);
        return (NULL);
    } else
        return (new_node);
}

Link GotoNext(struct List *L, Link pcurr) {
    if (pcurr->next == NULL || pcurr == LLTail)
        return (NULL);
    else
        return (pcurr->next);
}

Link GotoPrev(struct List *L, Link pcurr) {
    if (pcurr->prev == NULL || pcurr == LLHead)
        return (NULL);
    else
        return (pcurr->prev);
}
