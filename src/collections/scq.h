#ifndef __SCQ_H__
#define __SCQ_H__

#include "../core.h"

extern po_obj_trait *po_scq_t;
typedef struct       po_scq  {
    po_obj   head;
    po_obj** scq;
    po_mem*  mem;
    u64_t    num;
    u64_t    sqe,
             cqe;
}   po_scq;

bool_t  po_scq_empty     (po_scq*);

bool_t  po_enq_lock_try  (po_scq*, po_obj*);
bool_t  po_enq_lock      (po_scq*, po_obj*);

bool_t  po_enq_try       (po_scq*, po_obj*);
bool_t  po_enq           (po_scq*, po_obj*);

po_obj* po_deq_lock_try  (po_scq*);
po_obj* po_deq_lock      (po_scq*);

po_obj* po_deq_try       (po_scq*);
po_obj* po_deq           (po_scq*);

#endif
