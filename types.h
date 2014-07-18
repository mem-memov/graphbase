/* 
 * File:   types.h
 * Author: u
 *
 * Created on July 18, 2014, 10:21 PM
 */

#ifndef TYPES_H
#define	TYPES_H

#ifdef	__cplusplus
extern "C" {
#endif

    
typedef struct Link {
    struct Node *node;
    struct Link *nextLink;
    int weight;
} Link;

typedef struct Node {
    struct Link *firstLink;
    int incomingLinkNumber;
    int outgoingLinkNumber;
} Node;

typedef struct Node Value;


#ifdef	__cplusplus
}
#endif

#endif	/* TYPES_H */

