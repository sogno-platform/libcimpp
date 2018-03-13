///////////////////////////////////////////////////////////
//  FailureIsolationMethodKind.h
//  Implementation of the Class FailureIsolationMethodKind
//  Original author: T. Kostic
///////////////////////////////////////////////////////////

#ifndef FAILUREISOLATIONMETHODKIND_H
#define FAILUREISOLATIONMETHODKIND_H

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * How the failure has been isolated.
			 */
			enum class FailureIsolationMethodKind
			{
				 _undef = -1, 	breakerOperation,
				fuse,
				burnedInTheClear,
				manuallyIsolated,
				other
			};

		}

	}

}
#endif // FAILUREISOLATIONMETHODKIND_H
