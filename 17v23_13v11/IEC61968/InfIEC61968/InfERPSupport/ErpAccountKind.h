///////////////////////////////////////////////////////////
//  ErpAccountKind.h
//  Implementation of the Class ErpAccountKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef ERPACCOUNTKIND_H
#define ERPACCOUNTKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfERPSupport
		{
			/**
			 * Kind of ERP account.
			 */
			enum class ErpAccountKind
			{
				 _undef = -1, 	normal,
				reversal,
				statistical,
				estimate
			};

		}

	}

}
#endif // ERPACCOUNTKIND_H
