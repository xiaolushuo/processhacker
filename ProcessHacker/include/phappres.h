// Notes:
// * Do not use /* comments */ since ISPP is buggy and it will throw an error.

#ifndef PH_PHAPPRES_H
#define PH_PHAPPRES_H

#include "phapprev.h"

#define PHAPP_VERSION_MAJOR 2
#define PHAPP_VERSION_MINOR 38
#define PHAPP_VERSION_BUILD 0

#if (PHAPP_VERSION_BUILD == 0)
#define TWO_DIGIT_VER   1
#else
#define THREE_DIGIT_VER 1
#endif

#define DO_MAKE_STR(x) #x
#define MAKE_STR(x)    DO_MAKE_STR(x)

#ifndef ISPP_INVOKED

#if defined(TWO_DIGIT_VER)
#define PHAPP_VERSION_STRING MAKE_STR(PHAPP_VERSION_MAJOR) "." MAKE_STR(PHAPP_VERSION_MINOR) ".0" "." MAKE_STR(PHAPP_VERSION_REVISION)
#elif defined(THREE_DIGIT_VER)
#define PHAPP_VERSION_STRING MAKE_STR(PHAPP_VERSION_MAJOR) "." MAKE_STR(PHAPP_VERSION_MINOR) "." MAKE_STR(PHAPP_VERSION_BUILD) "." MAKE_STR(PHAPP_VERSION_REVISION)
#endif

#define PHAPP_VERSION_NUMBER PHAPP_VERSION_MAJOR,PHAPP_VERSION_MINOR,PHAPP_VERSION_BUILD,PHAPP_VERSION_REVISION

#endif // ISPP_INVOKED

#endif // PHAPPRES_H
