///////////////////////////////////////////////////////////
//  ICCPPointKind.h
//  Implementation of the Class ICCPPointKind
//  Original author: herb
///////////////////////////////////////////////////////////

#ifndef ICCPPOINTKIND_H
#define ICCPPOINTKIND_H

namespace IEC61970
{
	namespace Base
	{
		namespace ICCPConfiguration
		{
			/**
			 * This specifies the type of ICCP point that is to be conveyed
			 */
			enum class ICCPPointKind
			{
				/**
				 * Indicates that an ICCP discrete type is to be conveyed.
				 */
				 _undef = -1, 	discrete,
				/**
				 * Indicates that an ICCP real type is to be conveyed.
				 */
				real,
				/**
				 * Indicates that an ICCP state type is to be conveyed.
				 */
				state,
				stateSupplemental,
				/**
				 * Indicates that an ICCP single Protection Event  type is to be conveyed.
				 */
				singleProtectionEvent,
				/**
				 * Indicates that an ICCP packed Protection Event is to be conveyed.
				 */
				packedProtectionEvent
			};

		}

	}

}
#endif // ICCPPOINTKIND_H
