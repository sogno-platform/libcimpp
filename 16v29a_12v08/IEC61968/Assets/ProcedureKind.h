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
			 _undef = -1, 	inspection,
			diagnosis,
			maintenance,
			test,
			other
		};

	}

}
#endif // PROCEDUREKIND_H
