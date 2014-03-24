/**************************************************************************
*
*   FILE:  example_rules.h
*   PURPOSE: PCD definitions file (auto generated).
*
**************************************************************************/

#ifndef _EXAMPLE_RULES_H_
#define _EXAMPLE_RULES_H_

#include "pcdapi.h"


/*! \def EXAMPLES_PCD_GROUP_NAME
 *  \brief Define group ID string for EXAMPLES
*/
#define EXAMPLES_PCD_GROUP_NAME	"EXAMPLES"

#define EXAMPLES_PCD_RULE_A	"A"
#define EXAMPLES_PCD_RULE_B	"B"
#define EXAMPLES_PCD_RULE_C	"C"
#define EXAMPLES_PCD_RULE_D	"D"
#define EXAMPLES_PCD_RULE_E	"E"
#define EXAMPLES_PCD_RULE_F	"F"
#define EXAMPLES_PCD_RULE_DEFSUBSYS	"DEFSUBSYS"
#define EXAMPLES_PCD_RULE_G	"G"
#define EXAMPLES_PCD_RULE_H	"H"
#define EXAMPLES_PCD_RULE_LASTRULE	"LASTRULE"

/*! \def EXAMPLES_DECLARE_PCD_RULEID()
 *  \brief Define a ruleId easily when calling PCD API
*/
#define EXAMPLES_DECLARE_PCD_RULEID( ruleId, RULE_NAME ) \
	PCD_DECLARE_RULEID( ruleId, EXAMPLES_PCD_GROUP_NAME, RULE_NAME )

#endif

