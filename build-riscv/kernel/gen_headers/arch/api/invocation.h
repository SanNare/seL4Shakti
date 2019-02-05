/*
 * Copyright 2014, General Dynamics C4 Systems
 *
 * This software may be distributed and modified according to the terms of
 * the GNU General Public License version 2. Note that NO WARRANTY is provided.
 * See "LICENSE_GPLv2.txt" for details.
 *
 * @TAG(GD_GPL)
 */

/* This header was generated by kernel/tools/invocation_header_gen.py.
 *
 * To add an invocation call number, edit libsel4/include/interfaces/sel4.xml.
 *
 */
#ifndef __API_ARCH_INVOCATION_H
#define __API_ARCH_INVOCATION_H
#include <arch/api/sel4_invocation.h>
enum arch_invocation_label {
    RISCVPageTableMap = nSeL4ArchInvocationLabels,
    RISCVPageTableUnmap,
    RISCVPageMap,
    RISCVPageRemap,
    RISCVPageUnmap,
    RISCVPageGetAddress,
    RISCVASIDControlMakePool,
    RISCVASIDPoolAssign,
    nArchInvocationLabels
};

#endif /* __API_ARCH_INVOCATION_H */
