///////////////////////////////////////////////////////////
//  IEC61970CIMVersion.h
//  Implementation of the Class IEC61970CIMVersion
//  Created on:      28-Jan-2016 12:45:26
///////////////////////////////////////////////////////////

#if !defined(EA_C518B36D_1869_45c7_8B46_1D2ACAC62E6C__INCLUDED_)
#define EA_C518B36D_1869_45c7_8B46_1D2ACAC62E6C__INCLUDED_

#include "IEC61970/Base/Domain/Date.h"
#include "IEC61970/Base/Domain/String.h"
#include "BaseClass.h"

namespace IEC61970
{
	/**
	 * This is the IEC 61970 CIM version number assigned to this UML model.
	 */
	class IEC61970CIMVersion : public BaseClass
	{

	public:
		IEC61970CIMVersion();
		virtual ~IEC61970CIMVersion();
		/**
		 * Form is YYYY-MM-DD for example for January 5, 2009 it is 2009-01-05.
		 */
		static const IEC61970::Base::Domain::Date date;
		/**
		 * Form is IEC61970CIMXXvYY where XX is the major CIM package version and the YY
		 * is the minor version. For example IEC61970CIM13v18.
		 */
		static const IEC61970::Base::Domain::String version;

	};

}
#endif // !defined(EA_C518B36D_1869_45c7_8B46_1D2ACAC62E6C__INCLUDED_)
