///////////////////////////////////////////////////////////
//  ICCPAccessPrivilegeKind.h
//  Implementation of the Class ICCPAccessPrivilegeKind
//  Original author: herb
///////////////////////////////////////////////////////////

#ifndef ICCPACCESSPRIVILEGEKIND_H
#define ICCPACCESSPRIVILEGEKIND_H

namespace IEC61970
{
	namespace Base
	{
		namespace ICCPConfiguration
		{
			/**
			 * Provides access privilege information regarding an ICCP point.
			 */
			enum class ICCPAccessPrivilegeKind
			{
				/**
				 * Indicates that the remote is not allowed to change the value of the ICCPPoint.
				 */
				 _undef = -1, 	readOnly,
				/**
				 * Indicates that the remote can not only get the value, but may also change the
				 * value of the ICCP Point.
				 */
				readWrite
			};

		}

	}

}
#endif // ICCPACCESSPRIVILEGEKIND_H
