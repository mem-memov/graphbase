/* 
 * File:   node.h
 * Author: u
 *
 * Created on July 11, 2014, 9:36 PM
 */

#ifndef NODE_H
#define	NODE_H

#ifdef	__cplusplus
extern "C" {
#endif
    
#include "types.h"
#include "link.h"
#include <stdlib.h>

void connectNodes(Node *sourceNode, Node *targetNode);
void separateNodes(Node *sourceNode, Node *targetNode);


#ifdef	__cplusplus
}
#endif

#endif	/* NODE_H */

