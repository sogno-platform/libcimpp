///////////////////////////////////////////////////////////
//  ExtensionItem.h
//  Implementation of the Class ExtensionItem
//  Original author: marga
///////////////////////////////////////////////////////////

#ifndef EXTENSIONITEM_H
#define EXTENSIONITEM_H

#include "BaseClass.h"
#include "IEC61970/Base/Domain/String.h"

namespace IEC61968
{
	namespace Common
	{
		class ExtensionItem : public BaseClass
		{

		public:
			ExtensionItem();
			virtual ~ExtensionItem();
			IEC61970::Base::Domain::String extName;
			IEC61970::Base::Domain::String extType;
			IEC61970::Base::Domain::String extValue;

		};

	}

}
#endif // EXTENSIONITEM_H
