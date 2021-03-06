// $Id: AuthenticationBase.cpp 97246 2013-08-07 07:10:20Z johnnyw $

#include "ace/INet/AuthenticationBase.h"

#if !defined (__ACE_INLINE__)
#include "ace/INet/AuthenticationBase.inl"
#endif

ACE_BEGIN_VERSIONED_NAMESPACE_DECL

namespace ACE
{
  namespace INet
  {
    AuthenticationBase::~AuthenticationBase ()
    {
    }

    AuthenticatorBase::AuthenticatorBase ()
    {
    }

    AuthenticatorBase::~AuthenticatorBase ()
    {
    }
  }
}

ACE_END_VERSIONED_NAMESPACE_DECL
