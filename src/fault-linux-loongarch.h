/* Fault handler information.  Linux/LoongArch version when it supports POSIX.
   Copyright (C) 2022  Bruno Haible <bruno@clisp.org>

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

#include "fault-posix-ucontext.h"

/* See <sys/ucontext.h>.
   Note that the 'mcontext_t' defined in <sys/ucontext.h>
   and the 'struct sigcontext' defined in <bits/sigcontext.h>
   (see also <asm/sigcontext.h>) are effectively the same.  */

#define SIGSEGV_FAULT_STACKPOINTER  ((ucontext_t *) ucp)->uc_mcontext.__gregs[3]
