#include "node.h"

static Node *createNode();
static void deleteNode(Node *node);

void connectNodes(Node *sourceNode, Node *targetNode) {

    addLink(sourceNode->firstLink, targetNode);
    
    // increment link counters
    sourceNode->outgoingLinkNumber++;
    targetNode->incomingLinkNumber++;

}

void separateNodes(Node *sourceNode, Node *targetNode) {

    removeLink(sourceNode->firstLink, targetNode);
    
    // decrement link counters
    sourceNode->outgoingLinkNumber--;
    targetNode->incomingLinkNumber--;
    
    // delete source node if it has no incoming and no outgoing links
    if (sourceNode->outgoingLinkNumber == 0 && sourceNode->incomingLinkNumber == 0) {
        deleteNode(sourceNode);
    }
    
    // delete target node if it has no incoming and no outgoing links
    if (targetNode->outgoingLinkNumber == 0 && targetNode->incomingLinkNumber == 0) {
        deleteNode(targetNode);
    }

}

static Node *createNode() {

    Node *node = (Node *)malloc(sizeof(Node));

    node->firstLink = NULL;
    node->outgoingLinkNumber = 0;
    node->incomingLinkNumber = 0;

    return node;

}

static void deleteNode(Node *node) {

    free(node);

}