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

// Implementation of a string stack (sstack) ADT

// This is a "wrapper" ADT that provides a stack ADT interface, but all of the data
// is actually stored inside of an SOS ADT

// IMPORTANT: Each of the functions should only be a few lines long

#include <assert.h>
#include <stdlib.h>
#include <string.h>

#include "cs136-trace.h"
#include "sos.h"
#include "sstack.h"

//////////////////////////////////////////////////////////////////////////////
// DO NOT MODIFY THE FOLLOWING DEFINITIONS

struct sstack {
  struct sos *seq;
};

// we have provided sstack_is_empty() for you :)

// see sstack.h
bool sstack_is_empty(const struct sstack *ss) {
  assert(ss);
  return sos_length(ss->seq) == 0;
}

//////////////////////////////////////////////////////////////////////////////

