/*
 * mibincl.h
 */

#include <stdio.h>
#include <sys/types.h>

#if TIME_WITH_SYS_TIME
# include <sys/time.h>
# include <time.h>
#else
# if HAVE_SYS_TIME_H
#  include <sys/time.h>
# else
#  include <time.h>
# endif
#endif
#ifdef HAVE_NETINET_IN_H
#	include <netinet/in.h>
#endif
#if HAVE_SYS_SOCKET_H
#include <sys/socket.h>
#endif
#if HAVE_NET_ROUTE_H
#include <net/route.h>
#endif
#include <netinet/in_systm.h>
#include <netinet/ip.h>
#if HAVE_NETINET_IN_PCB_H
#include <netinet/in_pcb.h>
#endif

#include "../../snmplib/asn1.h"
#include "../../snmplib/snmp_api.h"
#include "../../snmplib/snmp_impl.h"

#include "../snmp_vars.h"
#include "../agent_read_config.h"
#include "../var_struct.h"

#include "../../snmplib/snmp.h"
#include "../../snmplib/mib.h"
#include "../../snmplib/snmp_debug.h"
#include "../../snmplib/snmp_logging.h"
#include "../../snmplib/read_config.h"
#include "../../snmplib/tools.h"
#define u_char unsigned char
#define u_short unsigned short


