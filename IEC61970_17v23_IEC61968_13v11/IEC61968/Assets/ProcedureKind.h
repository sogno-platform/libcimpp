///////////////////////////////////////////////////////////
//  ProcedureKind.h
//  Implementation of the Class ProcedureKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef PROCEDUREKIND_H
#define PROCEDUREKIND_H

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * Kind of procedure.
		 */
		enum class ProcedureKind
		{
			/**
			 * Inspection procedure.
			 */
			 _undef = -1, 	inspection,
			/**
			 * Diagnosis procedure.
			 */
			diagnosis,
			/**
			 * Maintenance procedure.
			 */
			maintenance,
			/**
			 * Test procedure.
			 */
			test,
			/**
			 * Other procedure.
			 */
			other
		};

	}

}
#endif // PROCEDUREKIND_H
