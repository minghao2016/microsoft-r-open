
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_CosNaming_NamingContextPackage_CannotProceedHolder__
#define __org_omg_CosNaming_NamingContextPackage_CannotProceedHolder__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class TypeCode;
        namespace portable
        {
            class InputStream;
            class OutputStream;
        }
      }
      namespace CosNaming
      {
        namespace NamingContextPackage
        {
            class CannotProceed;
            class CannotProceedHolder;
        }
      }
    }
  }
}

class org::omg::CosNaming::NamingContextPackage::CannotProceedHolder : public ::java::lang::Object
{

public:
  CannotProceedHolder();
  CannotProceedHolder(::org::omg::CosNaming::NamingContextPackage::CannotProceed *);
  void _read(::org::omg::CORBA::portable::InputStream *);
  ::org::omg::CORBA::TypeCode * _type();
  void _write(::org::omg::CORBA::portable::OutputStream *);
  ::org::omg::CosNaming::NamingContextPackage::CannotProceed * __attribute__((aligned(__alignof__( ::java::lang::Object)))) value;
  static ::java::lang::Class class$;
};

#endif // __org_omg_CosNaming_NamingContextPackage_CannotProceedHolder__