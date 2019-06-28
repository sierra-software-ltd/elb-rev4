/* Filename    : debug  header
   Description : prints logs info
   Author      : http://www.ssla.co.uk

   This software is SSLA licensed
   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/

#ifndef ___DEBUG_H___
#define ___DEBUG_H___ 1

#include <stdio.h>
#include <errno.h>

#if __DEBUG
#define print_dbg(fmt,args...) printf("%05d %20s() DBG: " fmt "\n", __LINE__, __func__, ##args)
#define print_dbg_raw(fmt,args...) printf(fmt, ##args)
#define print_dbg_nnl(fmt,args...) printf("%05d %20s() DBG: " fmt , __LINE__, __func__, ##args)
#else
#define print_dbg(fmt,args...)
#define print_dbg_raw(fmt,args...)
#endif /* __DEBUG */
#define print_inf(fmt,args...) printf("%05d %20s() INF: " fmt "\n", __LINE__, __func__, ##args)
#define print_inf_nnl(fmt,args...) printf("%05d %20s() INF: " fmt, __LINE__, __func__, ##args)
#define print_inf_raw(fmt,args...) printf(fmt, ###args)
#define print_err(fmt,args...) printf("%05d %20s() ERR: " fmt "\n", __LINE__, __func__, ##args)
#define print_errno(fmt,args...) printf("%05d %20s() ERR: errno = %d, " fmt "\n", __LINE__, __func__, errno, ##args)

#endif /* ___DEBUG_H___ */
