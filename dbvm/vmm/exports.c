/*
 * exports.c
 *
 *  Created on: Apr 9, 2018
 *      Author: root
 */

#include "exports.h"
#include "common.h"
#include "mm.h"
#include "vmpaging.h"



void InitExports()
{
  exportlist=malloc(sizeof(DBVMExports));
  exportlist->version=DBVM_EXPORTLISTVERSION;

  exportlist->getcpucount=getCPUCount;
  exportlist->getcpunr=getcpunr;
  exportlist->sendstringf=sendstringf;
  exportlist->zeromemory=zeromemory;
  exportlist->memcpy=memcpy;
  exportlist->memcmp=memcmp;
  exportlist->csEnter=csEnter;
  exportlist->csLeave=csLeave;
  exportlist->malloc=malloc;
  exportlist->free=free;
  exportlist->mapVMMemory=mapVMmemory;
  exportlist->mapPhysicalMemory=mapPhysicalMemory;
  exportlist->unmapMemory=unmapPhysicalMemory;
}
