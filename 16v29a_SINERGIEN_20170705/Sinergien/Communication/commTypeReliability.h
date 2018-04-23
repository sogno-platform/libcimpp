///////////////////////////////////////////////////////////
//  commTypeReliability.h
//  Implementation of the Class commTypeReliability
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef COMMTYPERELIABILITY_H
#define COMMTYPERELIABILITY_H

namespace Sinergien
{
	namespace Communication
	{
		enum class commTypeReliability
		{
			/**
			 * Reliability better than 99.99%
			 */
			 _undef = -1, 	low,
			/**
			 * Reliability better than 99% 
			 */
			high,
			medium
		};

	}

}
#endif // COMMTYPERELIABILITY_H
