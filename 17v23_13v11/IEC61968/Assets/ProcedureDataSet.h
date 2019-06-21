///////////////////////////////////////////////////////////
//  ProcedureDataSet.h
//  Implementation of the Class ProcedureDataSet
///////////////////////////////////////////////////////////

#ifndef PROCEDUREDATASET_H
#define PROCEDUREDATASET_H

#include <list>

#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61968/Assets/Asset.h"
#include "IEC61970/Base/Meas/MeasurementValue.h"
#include "IEC61968/InfIEC61968/InfAssets/TransformerObservation.h"
#include "IEC61968/Work/WorkTask.h"
#include "IEC61968/Common/Document.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * A data set recorded each time a procedure is executed. Observed results are
		 * captured in associated measurement values and/or values for properties relevant
		 * to the type of procedure performed.
		 */
		class ProcedureDataSet : public IEC61968::Common::Document
		{

		public:
			ProcedureDataSet();
			virtual ~ProcedureDataSet();
			/**
			 * Date and time procedure was completed.
			 */
			IEC61970::Base::Domain::DateTime completedDateTime;
			/**
			 * Asset to which this procedure data set applies.
			 */
			IEC61968::Assets::Asset *Asset;
			std::list<IEC61970::Base::Meas::MeasurementValue*> MeasurementValue;
			std::list<IEC61968::InfIEC61968::InfAssets::TransformerObservation*> TransformerObservations;
			/**
			 * Work task that created this procedure data set.
			 */
			IEC61968::Work::WorkTask *WorkTask;

		};

	}

}
#endif // PROCEDUREDATASET_H
