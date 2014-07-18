/* 
 * File:   linkFunctions.h
 * Author: u
 *
 * Created on July 11, 2014, 10:24 PM
 */

#ifndef LINKFUNCTIONS_H
#define	LINKFUNCTIONS_H

#ifdef	__cplusplus
extern "C" {
#endif

#include "types.h"
#include <stdlib.h>
    
void addLink(Link *firstLink, Node *node);
void removeLink(Link *firstLink, Node *node);

#ifdef	__cplusplus
}
#endif

#endif	/* LINKFUNCTIONS_H */

