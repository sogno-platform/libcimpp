///////////////////////////////////////////////////////////
//  ICCPQualityKind.h
//  Implementation of the Class ICCPQualityKind
//  Original author: herb
///////////////////////////////////////////////////////////

#ifndef ICCPQUALITYKIND_H
#define ICCPQUALITYKIND_H

namespace IEC61970
{
	namespace Base
	{
		namespace ICCPConfiguration
		{
			/**
			 * Indicates the type of quality information that is to be exchanged. For
			 * protection events the value shall be "none".
			 */
			enum class ICCPQualityKind
			{
				/**
				 * Indicates that no quality is conveyed with the ICCP point.
				 */
				 _undef = -1, 	none,
				/**
				 * Indicates that only quality is to be provided.
				 */
				qualityOnly,
				/**
				 * Indicates that quality and a timestamp are to be provided.
				 */
				qualityAndTime,
				/**
				 * Indicates that only extended information is to be provided.
				 */
				extended,
				/**
				 * Provides quality, timestamp, and extended information.
				 */
				extendedwithQualityTime
			};

		}

	}

}
#endif // ICCPQUALITYKIND_H
