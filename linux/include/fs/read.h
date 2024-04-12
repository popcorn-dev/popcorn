#ifndef __PO_FS_READ_H__
#define __PO_FS_READ_H__

#include <core.h>

extern po_obj_trait *po_read_t;
typedef struct       po_read  { u8_t po_read[128]; } po_read;

void    po_read_from (po_read*, u8_t*, u64_t);
void    po_read_ready(po_read*)              ;
void    po_read_err  (po_read*, u64_t)       ;

u8_t*   po_read_buf  (po_read*)              ;
u64_t   po_read_len  (po_read*)              ;
po_fut* po_read_fut  (po_read*)              ;

#endif