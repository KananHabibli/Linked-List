#include "linkedlist.h"


void main(){

	struct floatList *f = FL_firstInts(10);
	FL_show_while(f,"");
	struct floatList *f1 = FL_firstInts(5);
	FL_show_while(f1,"");


	
	struct floatList *f2 =  FL_concat(f, f1);
	FL_show_while(f2, "");
	}

// struct floatList *f1 = FL_nth(f, 5);
// FL_show1(f1, "",0);


// struct floatList *plist;
// plist = FL_newEmpty();
// plist = FL_add(plist,3);
// FL_show_while(plist,"list made by FL_add");
// plist = FL_add(plist,5);
// FL_show_while(plist,"list made by FL_add");
// plist = FL_add(plist,7);
// FL_show_while(plist,"list made by FL_add");
// plist = FL_add(plist,9);
// FL_show_while(plist,"list made by FL_add");
// plist = FL_add(plist,11);
// FL_show_while(plist,"list made by FL_add");
// plist = FL_add(plist,13);
// FL_show_while(plist,"list made by FL_add");
// plist = FL_add(plist,15);
// FL_show_while(plist,"list made by FL_add");

	// struct floatList *f = FL_newEmpty();
	// int a = FL_isEmpty(f);
	// printf("%d\n", a);

// struct floatList *f = FL_new1(5);
	// FL_show1(f,"First one");

// struct floatList *pf1, *pf2, *pf3;
	

	// create three lists with one element each
	// pf1 = FL_new1(5);
	// pf2 = FL_new1(10);
	// pf3 = FL_new1(3);


	// pf1->next = pf2;
	// pf2->next = pf3;


	// FL_show1(pf1, "first list"); 
	// FL_show_while(pf1, "first list");
	// printf("\n");
	// FL_show_for(pf1, "first list");


	// show the result on the terminal
	// FL_show1(pf1,"first");
	// FL_show1(pf2,"second");
	// FL_show1(pf3,"third");