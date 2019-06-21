///////////////////////////////////////////////////////////
//  LabTestDataSet.h
//  Implementation of the Class LabTestDataSet
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef LABTESTDATASET_H
#define LABTESTDATASET_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61968/Assets/TestReason.h"
#include "IEC61968/Assets/Specimen.h"
#include "IEC61968/Assets/AssetTestLab.h"
#include "IEC61968/Assets/ProcedureDataSet.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Results of testing done by a lab.
		 */
		class LabTestDataSet : public IEC61968::Assets::ProcedureDataSet
		{

		public:
			LabTestDataSet();
			virtual ~LabTestDataSet();
			/**
			 * Conclusion drawn from test results.
			 */
			IEC61970::Base::Domain::String conclusion;
			/**
			 * Description of confidence in conclusion.
			 */
			IEC61970::Base::Domain::String conclusionConfidence;
			/**
			 * Reason for performing test.
			 */
			IEC61968::Assets::TestReason reasonForTest = IEC61968::Assets::TestReason::_undef;
			/**
			 * Identity of lab equipment used to perform test.
			 */
			IEC61970::Base::Domain::String testEquipmentID;
			/**
			 * Specimen on which lab testing done in determining results.
			 */
			IEC61968::Assets::Specimen *Specimen;
			/**
			 * Test lab which produced this set of lab test results.
			 */
			IEC61968::Assets::AssetTestLab *AssetTestLab;

		};

	}

}
#endif // LABTESTDATASET_H
