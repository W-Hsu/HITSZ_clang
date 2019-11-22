#include <stdio.h>
#include <stdlib.h>

typedef struct __basic_lt_stack {
    long long Content;
    struct __basic_lt_stack* Next;
} Stack;

Stack *construct_stack() {
    return malloc(sizeof(Stack));
}

void destruct_stack(Stack *_new_last) {
    if (_new_last->Next!=NULL) {
        destruct_stack(_new_last->Next);
        _new_last->Next = NULL;
    }
    else free(_new_last);
}

Stack *find_last(Stack *_ancestor) {
    while (_ancestor->Next!=NULL) _ancestor = _ancestor->Next;
    return _ancestor;
}

void push_back(Stack *_ancestor, long long _content) {
    Stack *last = find_last(_ancestor);
    
    last->Next = malloc(sizeof(Stack));
    last->Next->Next = NULL;
    last->Next->Content = _content;
}

long long pop_back(Stack *_ancestor) {
    long long ret = 0;
    if (_ancestor->Next == NULL) {
        ret = _ancestor->Content;
        free(_ancestor);
    }
    else {
        Stack *last = _ancestor->Next;
        Stack *last_2 = _ancestor;
        
        while (last->Next != NULL) {
            last_2 = last;
            last = last->Next;
        }
        ret = last->Content;
        destruct_stack(last_2);
    }
    return ret;
}

int main() {
    Stack *root = construct_stack();
    
    int i=0;
    for (i=0 ; i<50 ; i++) {
        push_back(root, i);
    }
    
    for (i=0 ; i<50 ; i++) {
        printf ("%d ", pop_back(root));
    }
	putchar('\n');    
    return 0;
}
