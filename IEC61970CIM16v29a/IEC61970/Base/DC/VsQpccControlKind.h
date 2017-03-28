///////////////////////////////////////////////////////////
//  VsQpccControlKind.h
//  Implementation of the Class VsQpccControlKind
//  Original author: selaost1
///////////////////////////////////////////////////////////

#ifndef VSQPCCCONTROLKIND_H
#define VSQPCCCONTROLKIND_H

namespace IEC61970
{
	namespace Base
	{
		namespace DC
		{
			enum class VsQpccControlKind
			{
				reactivePcc,
				voltagePcc,
				powerFactorPcc
			};

		}

	}

}
#endif // VSQPCCCONTROLKIND_H
