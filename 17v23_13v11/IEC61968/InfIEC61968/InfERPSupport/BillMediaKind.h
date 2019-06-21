///////////////////////////////////////////////////////////
//  BillMediaKind.h
//  Implementation of the Class BillMediaKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef BILLMEDIAKIND_H
#define BILLMEDIAKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Kind of bill media.
			 */
			enum class BillMediaKind
			{
				 _undef = -1, 	paper,
				electronic,
				other
			};

		}

	}

}
#endif // BILLMEDIAKIND_H
