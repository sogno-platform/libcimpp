///////////////////////////////////////////////////////////
//  ExtensionsList.h
//  Implementation of the Class ExtensionsList
//  Original author: marga
///////////////////////////////////////////////////////////

#ifndef EXTENSIONSLIST_H
#define EXTENSIONSLIST_H

#include "BaseClass.h"
#include "IEC61968/Common/ExtensionItem.h"

namespace IEC61968
{
	namespace Common
	{
		class ExtensionsList : public BaseClass
		{

		public:
			ExtensionsList();
			virtual ~ExtensionsList();
			IEC61968::Common::ExtensionItem extensionsItem;

		};

	}

}
#endif // EXTENSIONSLIST_H
