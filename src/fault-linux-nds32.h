/* Fault handler information.  Andse NDS32 32-bit version.
 * Copyright (C) 2018  Nylon Chen <nylon7@andestech.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 */

#include "fault-posix-ucontext.h"

/* See glibc/sysdeps/unix/sysv/linux/nds32/sys/ucontext.h
 * and the definition of GET_STACK in
 * glibc/sysdeps/unix/sysv/linux/nds32/sigcontextinfo.h.
 * Note that the 'mcontext_t' defined in
 * glibc/sysdeps/unix/sysv/linux/arm/nds32/ucontext.h
 * and the 'struct sigcontext' defined in <asm/sigcontext.h>
 */

#define SIGSEGV_FAULT_STACKPOINTER  ((ucontext_t *) ucp)->uc_mcontext.nds32_sp
