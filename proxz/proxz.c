//
//  proxz.c
//  proxz
//
//  Created by Joe Cui on 4/3/19.
//  Copyright © 2019 Joe Cui. All rights reserved.
//

#include <mach/mach_types.h>
#include <libkern/libkern.h>
#include <sys/kpi_socketfilter.h>
#include <netinet/kpi_ipfilter.h>
#include <sys/param.h>
#include <sys/systm.h>
#include <sys/proc.h>
#include <sys/mbuf.h>


#define DEBUGP(fmt, args...) printf("[  DEBUG] " fmt, ##args)
#define INFOP(fmt, args...) printf("[   INFO] " fmt, ##args)

kern_return_t proxz_start(kmod_info_t * ki, void *d);
kern_return_t proxz_stop(kmod_info_t *ki, void *d);


kern_return_t proxz_start(kmod_info_t * ki, void *d)
{
    DEBUGP("===============proxz Load===============");
    DEBUGP("AAAAA");
    
    return KERN_SUCCESS;
}



kern_return_t proxz_stop(kmod_info_t *ki, void *d)
{
    DEBUGP("==============proxz Unload==============");
    return KERN_SUCCESS;
}
