#ifndef list
#define list

#include <stdio.h>
#include <stdlib.h>

struct floatList{
	float value;
	struct floatList *next;
};

struct floatList* FL_new1(float x); 
void FL_show1(struct floatList *pf, char *label ,int i);
void FL_show_while(struct floatList *plist, char *label);
void FL_show_for(struct floatList *plist, char *label);
struct floatList* FL_newEmpty();
int FL_isEmpty(struct floatList *plist); 
struct floatList* FL_add(struct floatList *plist, float val);
struct floatList* FL_firstInts(int n);
struct floatList* FL_nth(struct floatList *plist, int n);
struct floatList* FL_last(struct floatList *plist);
struct floatList* FL_removeFirst(struct floatList *plist);
struct floatList* FL_removeSecond(struct floatList *plist);
struct floatList* FL_insertAfterFirst(struct floatList *plist, float val);
struct floatList* FL_previous(struct floatList *plist, struct floatList *pel);
struct floatList* FL_remove(struct floatList *plist, struct floatList *pel);
struct floatList* FL_insertAfter(struct floatList *plist,struct floatList *pel,float val);
struct floatList* FL_append(struct floatList *plist, float val);
struct floatList* FL_concat(struct floatList *l1, struct floatList *l2);
#endif 