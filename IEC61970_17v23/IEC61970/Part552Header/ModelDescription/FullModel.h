///////////////////////////////////////////////////////////
//  FullModel.h
//  Implementation of the Class FullModel
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef FULLMODEL_H
#define FULLMODEL_H

#include "IEC61970/Part552Header/ModelDescription/Model.h"

namespace IEC61970
{
	namespace Part552Header
	{
		namespace ModelDescription
		{
			class FullModel : public IEC61970::Part552Header::ModelDescription::Model
			{

			public:
				FullModel();
				virtual ~FullModel();

			};

		}

	}

}
#endif // FULLMODEL_H
