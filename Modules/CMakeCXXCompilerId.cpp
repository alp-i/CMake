/* This source file must have a .cpp extension so that all C++ compilers
   recognize the extension without flags.  Borland does not know .cxx for
   example.  */
#ifndef __cplusplus
# error "A C compiler has been selected for C++."
#endif

#if defined(__COMO__)
# define COMPILER_ID "Comeau"

#elif defined(__INTEL_COMPILER) || defined(__ICC)
# define COMPILER_ID "Intel"

#elif defined(__BORLANDC__)
# define COMPILER_ID "Borland"

#elif defined(__WATCOMC__)
# define COMPILER_ID "Watcom"

#elif defined(__SUNPRO_CC)
# define COMPILER_ID "SunPro"

#elif defined(__HP_aCC)
# define COMPILER_ID "HP"

#elif defined(__DECCXX)
# define COMPILER_ID "Compaq"

#elif defined(__IBMCPP__)
# define COMPILER_ID "VisualAge"

#elif defined(__GNUC__)
# define COMPILER_ID "GNU"

#elif defined(_MSC_VER)
# define COMPILER_ID "MSVC"

#elif defined(__ADSPBLACKFIN__) || defined(__ADSPTS__) || defined(__ADSP21000__)
/* Analog Devices C++ compiler for Blackfin, TigerSHARC and 
   SHARC (21000) DSPs */
# define COMPILER_ID "ADSP"

#elif defined(_COMPILER_VERSION)
# define COMPILER_ID "MIPSpro"

/* This compiler is either not known or is too old to define an
   identification macro.  Try to identify the platform and guess that
   it is the native compiler.  */
#elif defined(__sgi)
# define COMPILER_ID "MIPSpro"

#elif defined(__hpux) || defined(__hpua)
# define COMPILER_ID "HP"

#else /* unknown compiler */
# define COMPILER_ID ""

#endif

static char const info_compiler[] = "INFO:compiler[" COMPILER_ID "]";

/* Include the platform identification source.  */
#include "CMakePlatformId.h"

/* Make sure the information strings are referenced.  */
int main()
{
  return (&info_compiler[0] != &info_platform[0]);
}
