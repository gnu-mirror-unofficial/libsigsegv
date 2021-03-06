/* Fault handler information.  OpenBSD/PowerPC version.
   Copyright (C) 2010-2021  Bruno Haible <bruno@clisp.org>

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

#include "fault-openbsd.h"

#if defined(__powerpc64__) || defined(_ARCH_PPC64) /* 64-bit */

/* See the definition of 'struct sigcontext' in
   openbsd-src/sys/arch/powerpc64/include/signal.h.  */

# define SIGSEGV_FAULT_STACKPOINTER  scp->sc_sp

#else /* 32-bit */

/* See the definition of 'struct sigcontext' and 'struct trapframe' in
   openbsd-src/sys/arch/powerpc/include/signal.h.  */

# define SIGSEGV_FAULT_STACKPOINTER  scp->sc_frame.fixreg[1]

#endif
