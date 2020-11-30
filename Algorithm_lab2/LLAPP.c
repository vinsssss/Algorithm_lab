//
// Created by 89252 on 2020/11/30.
//

#include <stdlib.h>         /* for free() */
#include <string.h>         /* for strcmp() and strdup() */

#include "LLGEN.h"
#include "LLAPP.h"

/*=== Now the functions for the second linked list ===*/

void * CreateData ( void * data )
{
    struct NodeData * new_data;

    /*--- allocate the data structure ---*/
    if ((new_data = malloc ( sizeof ( struct NodeData ))) == NULL)
        return ( NULL );

    /*--- move the values into the data structure ---*/
    new_data->word =  strdup ( (char *) data );

    if ( new_data->word == NULL )   /* error copying string */
    {
        free ( new_data );
        return ( NULL );
    }
    else
        return ( new_data );
}

int DeleteData ( void * data )
{
    /*
     * In this case, NodeData2 consists of a pointer.
     * The string must be freed manually.
     */

    free ( ((pND) data)->word );
    return ( 1 );
}

/* this list inserts duplicated nodes */
int DuplicatedNode ( Link new_node, Link list_node )
{
    return ( 2 );
}

int NodeDataCmp ( void *first, void *second )
{
    return ( strcmp ( ((pND) first)->word,
                      ((pND) second)->word ));
}
