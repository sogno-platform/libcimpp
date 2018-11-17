///////////////////////////////////////////////////////////
//  DifferenceModel.h
//  Implementation of the Class DifferenceModel
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef DIFFERENCEMODEL_H
#define DIFFERENCEMODEL_H

#include "IEC61970/Part552Header/ModelDescription/Model.h"
#include "IEC61970/Part552Header/Statements.h"

namespace IEC61970
{
	namespace Part552Header
	{
		namespace DifferenceModel
		{
			class DifferenceModel : public IEC61970::Part552Header::ModelDescription::Model
			{

			public:
				DifferenceModel();
				virtual ~DifferenceModel();
				IEC61970::Part552Header::Statements *reverseDifferences;
				IEC61970::Part552Header::Statements *forwardDifferences;

			};

		}

	}

}
#endif // DIFFERENCEMODEL_H
