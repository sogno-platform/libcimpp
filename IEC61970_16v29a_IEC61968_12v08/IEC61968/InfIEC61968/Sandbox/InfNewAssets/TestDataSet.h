///////////////////////////////////////////////////////////
//  TestDataSet.h
//  Implementation of the Class TestDataSet
///////////////////////////////////////////////////////////

#ifndef TESTDATASET_H
#define TESTDATASET_H

#include "IEC61970/Base/Domain/String.h"
#include "IEC61970/Base/Domain/DateTime.h"
#include "IEC61968/Assets/ProcedureDataSet.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace Sandbox
		{
			namespace InfNewAssets
			{
				/**
				 * Test results, usually obtained by a lab or other independent organisation.
				 */
				class TestDataSet : public IEC61968::Assets::ProcedureDataSet
				{

				public:
					TestDataSet();
					virtual ~TestDataSet();
					/**
					 * Conclusion drawn from test results.
					 */
					IEC61970::Base::Domain::String conclusion;
					/**
					 * Identifier of specimen used in inspection or test.
					 */
					IEC61970::Base::Domain::String specimenID;
					/**
					 * Date and time the specimen was received by the lab.
					 */
					IEC61970::Base::Domain::DateTime specimenToLabDateTime;

				};

			}

		}

	}

}
#endif // TESTDATASET_H
