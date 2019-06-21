///////////////////////////////////////////////////////////
//  TestReason.h
//  Implementation of the Class TestReason
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef TESTREASON_H
#define TESTREASON_H

namespace IEC61968
{
	namespace Assets
	{
		enum class TestReason
		{
			 _undef = -1, 	postOperationFault,
			postRepair,
			postOilTreatment,
			routine
		};

	}

}
#endif // TESTREASON_H
