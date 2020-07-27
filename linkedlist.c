#include "linkedlist.h"



struct floatList* FL_new1(float x){
struct floatList *f = (struct floatList *)malloc(sizeof(struct floatList));
f->next = NULL;
f->value = x;
return f;
}


void FL_show1(struct floatList *pf, char *label ,int i){
	printf("%d --> ", i);
	printf("%s : ", label);
	printf("%p ", pf);
	printf("%f ", pf->value);
	printf("%p \n", pf->next);
}


void FL_show_while(struct floatList *plist, char *label){
	printf("\t\tWith while\n");
	int i=0;
	while(plist != NULL){
		FL_show1(plist,label,i);
		plist = plist->next;
		i++;
	}
	printf("%d elements in all\n", i++);
}

void FL_show_for(struct floatList *plist, char *label){
	struct floatList *f;
	int i=0;
	printf("\t\tWith for\n");
	for(f=plist;f != NULL;f = f->next){
		FL_show1(plist,label,i);
		plist = plist->next;
		i++;
	}
	printf("%d elements in all\n", i++);
}

struct floatList* FL_newEmpty(){
	struct floatList* f = (struct floatList *)malloc(sizeof(struct floatList));
	f = NULL;
	return f;
}

int FL_isEmpty(struct floatList *plist){
	if(plist != NULL){
		return 0;
	}
	return 1;
}

struct floatList* FL_add(struct floatList *plist, float val){
	struct floatList* f   = FL_new1(val);
	f->next = plist;
	return f;
}

struct floatList* FL_firstInts(int n){
	struct floatList *plist = FL_newEmpty();
	for (int i = 0; i < n; ++i)
	{
		plist = FL_add(plist,i);
	}
	return plist;
}

struct floatList* FL_nth(struct floatList *plist, int n){
	if(n==0) return plist;
	int a = 1;
	while(plist != NULL){
		plist = plist->next;
		if(a == n){
			return plist;
		}
		a++;
	}
	printf("Error\n");
	exit(1);
}

struct floatList* FL_last(struct floatList *plist){
	if(FL_isEmpty(plist) == 1) return NULL;
	while(plist->next != NULL){
		plist = plist->next;
	}
	return plist;
}

struct floatList* FL_removeFirst(struct floatList *plist){
	if(FL_isEmpty(plist) == 1) return plist;
	struct floatList *f = FL_newEmpty();
	f = plist->next;
	return f;
}

struct floatList* FL_removeSecond(struct floatList *plist){
	if(FL_isEmpty(plist) == 1 || plist->next == NULL) return plist;
	struct floatList *f = FL_new1(plist->value);
	plist = plist->next;
	f->next = plist->next;
	return f;
}

struct floatList* FL_insertAfterFirst(struct floatList *plist, float val){
	if(FL_isEmpty(plist) == 1){
	 printf("Error\n");
	 return plist;
	}
	struct floatList *f1 = FL_new1(val);
	struct floatList *f = FL_new1(plist->value);
	plist = plist->next;
	f->next = f1;
	f1->next = plist;
	return f;
}

struct floatList* FL_previous(struct floatList *plist, struct floatList *pel){
	if(plist==pel) return NULL;
	struct floatList *f = plist;
	while(plist != NULL){
		plist = plist->next;
		if(plist==pel){
			while(f->next !=  pel){
				f = f->next;
			}
			return f;
		}
	}

	return NULL;
}

struct floatList* FL_remove(struct floatList *plist, struct floatList *pel){
	if(plist==pel) return FL_removeFirst(plist);
	struct floatList *f = FL_previous(plist,pel);
	struct floatList *result = plist;
	while(result->value != f->value){
		result = result->next;
	}
	f = FL_removeSecond(f);
	result->next = f->next;
	return plist;
}



struct floatList* FL_insertAfter(struct floatList *plist,struct floatList *pel,float val){
	struct floatList *f = pel;
	struct floatList *new = FL_new1(val);
	while(f->value != pel->value){
		f = f->next;
	}
	new->next = f->next;
	f->next = new;
	return plist;
}

struct floatList* FL_append(struct floatList *plist, float val){
	struct floatList *f = plist;
	struct floatList *new = FL_new1(val);
	while(f->next != NULL){
		f = f->next;
	}
	f->next = new;
	return plist;

}

struct floatList* FL_concat(struct floatList *l1, struct floatList *l2){
	struct floatList *f = l1;
	while(f->next != NULL){
		f = f->next;
	}
	f->next = l2;
	return l1;
}