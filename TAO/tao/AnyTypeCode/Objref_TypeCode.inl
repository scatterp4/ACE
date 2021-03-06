// -*- C++ -*-
//
// $Id: Objref_TypeCode.inl 72141 2006-04-19 09:45:01Z jwillemsen $

TAO_BEGIN_VERSIONED_NAMESPACE_DECL

template <typename StringType, class RefCountPolicy>
ACE_INLINE
TAO::TypeCode::Objref<StringType, RefCountPolicy>::Objref (
  CORBA::TCKind kind,
  char const * id,
  char const * name)
  : ::CORBA::TypeCode (kind)
  , RefCountPolicy ()
  , attributes_ (id, name)
{
}

TAO_END_VERSIONED_NAMESPACE_DECL
