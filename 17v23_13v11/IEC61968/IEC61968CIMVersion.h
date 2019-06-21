///////////////////////////////////////////////////////////
//  IEC61968CIMVersion.h
//  Implementation of the Class IEC61968CIMVersion
///////////////////////////////////////////////////////////

#ifndef IEC61968CIMVERSION_H
#define IEC61968CIMVERSION_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/Date.h"
#include "IEC61970/Base/Domain/String.h"

namespace IEC61968
{
	/**
	 * IEC 61968 version number assigned to this UML model.
	 */
	class IEC61968CIMVersion : public BaseClass
	{

	public:
		IEC61968CIMVersion();
		virtual ~IEC61968CIMVersion();
		/**
		 * Form is YYYY-MM-DD for example for January 5, 2009 it is 2009-01-05.
		 */
		static const IEC61970::Base::Domain::Date date;
		/**
		 * Form is IEC61968CIMXXvYY where XX is the major CIM package version and the YY
		 * is the minor version. For example IEC61968CIM10v17.
		 */
		static const IEC61970::Base::Domain::String version;

	};

}
#endif // IEC61968CIMVERSION_H
