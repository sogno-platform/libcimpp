///////////////////////////////////////////////////////////
//  PersonDocumentRole.h
//  Implementation of the Class PersonDocumentRole
///////////////////////////////////////////////////////////

#ifndef PERSONDOCUMENTROLE_H
#define PERSONDOCUMENTROLE_H

#include "IEC61968/InfIEC61968/InfCommon/Role.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfCommon
		{
			/**
			 * Roles played between Persons and Documents.
			 */
			class PersonDocumentRole : public IEC61968::InfIEC61968::InfCommon::Role
			{

			public:
				PersonDocumentRole();
				virtual ~PersonDocumentRole();

			};

		}

	}

}
#endif // PERSONDOCUMENTROLE_H
