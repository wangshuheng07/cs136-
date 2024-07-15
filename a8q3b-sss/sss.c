/////////////////////////////////////////////////////////////////////////////////////////
// INTEGRITY STATEMENT (v4)
//
// By signing your name and ID below you are stating that you have agreed
// to the online academic integrity statement posted on edX:
// (Course > Assignments > Assignment Information & Policies > Academic Integrity Policy)
/////////////////////////////////////////////////////////////////////////////////////////
// I received help from and/or collaborated with:

// ERROR_NO_INTEGRITY_STATEMENT
//
// Name: ERROR_NO_NAME
// login ID: ERROR_NO_LOGIN
//////////////////////////////////////////////////////////////////////////////////////////

// Implementation of a triple_s (SSS) ADT

// This is a "wrapper" ADT that provides a triple_s ADT interface, but all of the data
// is actually stored inside of an SOS ADT

#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include "cs136-trace.h"
#include "sos.h"
#include "sss.h"

//////////////////////////////////////////////////////////////////////////////
// DO NOT MODIFY THE FOLLOWING DEFINITION

struct triple_s {
  struct sos *seq;
};

//////////////////////////////////////////////////////////////////////////////
