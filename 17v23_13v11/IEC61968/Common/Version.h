///////////////////////////////////////////////////////////
//  Version.h
//  Implementation of the Class Version
//  Original author: marga
///////////////////////////////////////////////////////////

#ifndef VERSION_H
#define VERSION_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61970/Base/Domain/Integer.h"

namespace IEC61968
{
	namespace Common
	{
		/**
		 * This is the version for a group of devices or objects.  This could be used to
		 * track the version for any group of objects or devices over time. For example,
		 * for a DERGroup, the requesting system may want to get the details of a specific
		 * version of a DERGroup.
		 */
		class Version : public BaseClass
		{

		public:
			Version();
			virtual ~Version();
			/**
			 * date of this version
			 */
			IEC61970::Base::Domain::DateTime date;
			/**
			 * major release level for this version
			 */
			IEC61970::Base::Domain::Integer major;
			/**
			 * minor release level for this version
			 */
			IEC61970::Base::Domain::Integer minor;
			/**
			 * revision level for this version
			 */
			IEC61970::Base::Domain::Integer revision;

		};

	}

}
#endif // VERSION_H
