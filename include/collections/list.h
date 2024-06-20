#ifndef __LIST_H__
#define __LIST_H__

#include "node.h"

extern po_obj_trait* po_list_t;
typedef struct       po_list  { u8_t po_list[256]; } po_list;

po_node* po_list_move_front(po_list*, po_obj*)       ;
po_node* po_list_move_back (po_list*, po_obj*)       ;

po_node* po_list_push_front(po_list*, po_obj*)       ;
po_node* po_list_push_back (po_list*, po_obj*)       ;

po_obj*  po_list_pop_front (po_list*)                ;
po_obj*  po_list_pop_back  (po_list*)                ;

bool_t   po_list_empty     (po_list*)                ;
po_node* po_list_begin     (po_list*)                ;
po_node* po_list_end       (po_list*)                ;

#define po_list_for(par, par_it)                                           \
    po_node* par_it = po_list_begin(par), *par_it##_end = po_list_end(par);\
    for( ; par_it && (par_it != par_it##_end) ; par_it = po_next(par_it))

#define po_list_while(par, par_it)                                         \
    po_node* par_it = po_list_begin(par), *par_it##_end = po_list_end(par);\
    while(par_it && (par_it != par_it##_end))

#endif
