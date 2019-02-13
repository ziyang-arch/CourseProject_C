#ifndef _DISPLAY_H_
#define _DISPLAY_H_


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include <dirent.h>
#include <sys/stat.h>
#include"cnfparser.h"
#include"solver.h"

#ifdef __cplusplus
extern "C"
{
#endif


// measuring the effiency of solver on single cnf case  return time comsumed 
extern status CaseRunner_single(char * filename, bool(*solver)(cnf_fmla *), char * resultDir);

//measure the effience in batch 
//traverse the case file 
extern status CaseRunner_batch(char *filefolder, bool(*solver)(cnf_fmla *), char * resultDir);






#ifdef __cplusplus
}
#endif
#endif // !_DISPLAY_H_
