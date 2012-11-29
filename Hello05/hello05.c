/*
   Please note:
   File: printf.h
   
   Copyright (C) 2004,2008  Kustaa Nyholm
   
   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.
   
   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.
   
   You should have received a copy of the GNU Lesser General Public
   License along with this library; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

                                                                                                                   
#include <stdio.h> 
#include "printf.h"  /*support for printf %d,%u,%s,%x,%X */
#include "xuartps.h" /*Maps stdout to use the RS232 uart */
	 
void c_entry() 
{
   init_uart1_RxTx_115200_8N1();
   printf("\nHello number %d\n",1);
   while(1) ; /*dont exit the program*/
}