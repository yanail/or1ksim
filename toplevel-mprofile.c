/* toplevel-mprofile.c -- Memory Profiling Utility

   Copyright (C) 2008 Embecosm Limited
  
   Contributor Jeremy Bennett <jeremy.bennett@embecosm.com>
  
   This file is part of OpenRISC 1000 Architectural Simulator.
  
   This program is free software; you can redistribute it and/or modify it
   under the terms of the GNU General Public License as published by the Free
   Software Foundation; either version 3 of the License, or (at your option)
   any later version.
  
   This program is distributed in the hope that it will be useful, but WITHOUT
   ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
   FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
   more details.
  
   You should have received a copy of the GNU General Public License along
   with this program.  If not, see <http://www.gnu.org/licenses/>. */

/* This program is commented throughout in a fashion suitable for processing
   with Doxygen. */

/* Main program for standalone memory profiling simulator */


/* Autoconf and/or portability configuration */
#include "config.h"

/* System includes */
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

/* Package includes */
#include "sim-config.h"
#include "mprofiler.h"
#include "toplevel-support.h"


int  main (int   argc,
	   char *argv[])
{
  init_randomness ();
  init_defconfig();
  reg_config_secs();

  exit (main_mprofiler (argc, argv, 0));

}	/* main() */
