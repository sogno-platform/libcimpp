///////////////////////////////////////////////////////////
//  InspectionDataSet.h
//  Implementation of the Class InspectionDataSet
///////////////////////////////////////////////////////////

#ifndef INSPECTIONDATASET_H
#define INSPECTIONDATASET_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Assets/ProcedureDataSet.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Documents the result of one inspection, for a given attribute of an asset.
		 */
		class InspectionDataSet : public IEC61968::Assets::ProcedureDataSet
		{

		public:
			InspectionDataSet();
			virtual ~InspectionDataSet();
			/**
			 * Description of the conditions of the location where the asset resides.
			 */
			IEC61970::Base::Domain::String locationCondition;

		};

	}

}
#endif // INSPECTIONDATASET_H
