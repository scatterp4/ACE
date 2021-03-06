//
// $Id: Hello.cpp 91672 2010-09-08 18:44:58Z johnnyw $
//
#include "Hello.h"



Hello::Hello (CORBA::ORB_ptr orb)
  : orb_ (CORBA::ORB::_duplicate (orb))
{
}

char *
Hello::get_string (void)
{
  ACE_DEBUG ((LM_DEBUG, "in get_string\n"));
  return CORBA::string_dup ("Hello there!");
}

void
Hello::shutdown (void)
{
  this->orb_->shutdown (0);
  ACE_DEBUG ((LM_DEBUG,"in shutdown\n"));
}
