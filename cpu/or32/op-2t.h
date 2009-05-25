/* op-2t.h -- Instantiation of operatations that work on only 2 temporary
   Copyright (C) 2005 Gy�rgy `nog' Jeney, nog@sdf.lonestar.org

This file is part of OpenRISC 1000 Architectural Simulator.

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software
Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA. */

#define OP_2T
#define T glue(glue(glue(_, T0), _), T1)

#if NUM_T_REGS == 3
# define T0 t0
#  define T1 t0
#   include OP_FILE
#  undef T1
#  define T1 t1
#   include OP_FILE
#  undef T1
#  define T1 t2
#   include OP_FILE
#  undef T1
# undef T0
# define T0 t1
#  define T1 t0
#   include OP_FILE
#  undef T1
#  define T1 t1
#   include OP_FILE
#  undef T1
#  define T1 t2
#   include OP_FILE
#  undef T1
# undef T0
# define T0 t2
#  define T1 t0
#   include OP_FILE
#  undef T1
#  define T1 t1
#   include OP_FILE
#  undef T1
#  define T1 t2
#   include OP_FILE
#  undef T1
# undef T0
#else
#error Update op_2t.h for NUM_T_REGS temporaries
#endif

#undef T
#undef OP_2T
