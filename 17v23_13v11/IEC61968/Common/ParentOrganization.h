///////////////////////////////////////////////////////////
//  ParentOrganization.h
//  Implementation of the Class ParentOrganization
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef PARENTORGANIZATION_H
#define PARENTORGANIZATION_H

#include "IEC61968/Common/Organisation.h"

namespace IEC61968
{
	namespace Common
	{
		class ParentOrganization : public IEC61968::Common::Organisation
		{

		public:
			ParentOrganization();
			virtual ~ParentOrganization();

		};

	}

}
#endif // PARENTORGANIZATION_H
