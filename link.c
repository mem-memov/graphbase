#include "link.h"

static Link *createLink(Node *node);
static void deleteLink(Link *link);

void addLink(Link *firstLink, Node *node) {

    // case 1: first link is not in use
    if (!firstLink) {

        firstLink = createLink(node);
        
        return;

    }
    
    Link *lastLink = firstLink;

    do {

        // case 2: there is already a link to this node
        if (lastLink->node == node) {

            lastLink->weight++;

            return;

        }

        lastLink = lastLink->nextLink;

    } while (lastLink->nextLink != NULL);

    // case 3: there is no link to this node
    lastLink->nextLink = createLink(node);

}

void removeLink(Link *firstLink, Node *node) {
       
    Link *link = firstLink;
    Link *nextLink = NULL;
    Link *removedLink = NULL;

    do {
        
        nextLink = link->nextLink;
        
        if (link->node == node) {
            removedLink = link;
            deleteLink(removedLink);
            link = nextLink;
            break;
        }

        link = nextLink;
        nextLink = NULL;
            
    } while (link->nextLink != NULL);

}

static Link *createLink(Node *node) {

    Link *link = (Link *)malloc(sizeof(Link));

    link->node = node;
    link->nextLink = NULL;
    link->weight = 1;

    return link;

}

static void deleteLink(Link *link) {

    free(link);

}


