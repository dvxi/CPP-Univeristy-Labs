#include "List.h"
#include <iostream>

using namespace std;


void init(slist * list){
  list->head = NULL;
}

void push_back(slist * list, char c){
  slistEl * p, * e;

  e = new slistEl;  
  e->next = NULL;   
  e->data = c;
  p = list->head;
  if( p )
  {
     while( p->next ) p = p->next;
     p->next = e;
  }
  else list->head = e;
}

slistEl * find(slist * list, char c){
  slistEl * p = list->head;
  while(p != NULL)
  {
  	if( p->data == c )
  	  break;
  	p = p->next;
  }
  
  return p;
}

void delete_after(slistEl * e){
  if(e->next){
    slistEl * toDel = e->next;
    
    if(toDel->next) {
      e->next = toDel->next;
    } else {
      e->next = NULL;
    }

    delete toDel;
  }
}

void printl(slist * list){
  slistEl * p = list->head;

  cout << "Moja lista: <";
  while(p){
    cout << p->data;
    p = p->next;
  }
  cout << ">\n";
}