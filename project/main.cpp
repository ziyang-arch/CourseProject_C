#include"cnfparser.h"
#include"solver.h"
#include"display.h"
//#define DEBUG


int main()
{
//test of cnfparser
#ifdef DEBUG
    cnf_fmla* phi;
    char filename[80];
    strcpy(filename , "D://__Learningmate//CourseProject//SATcase//base//functionality//sat-20.cnf");
    //strcpy(filename , "D://__Learningmate//CourseProject//SATcase//test//test.cnf");
    phi = cnfStdLoad(filename);
    int result = DPLL_basic(phi);
    printf("%d", result);
#endif


    int res = CaseRunner_single("D://__Learningmate//CourseProject//SATcase//base//functionality//sat-20.cnf", DPLL_basic, "SATres");




    return 0;

}

