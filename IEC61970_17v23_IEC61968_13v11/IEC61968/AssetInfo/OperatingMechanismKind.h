///////////////////////////////////////////////////////////
//  OperatingMechanismKind.h
//  Implementation of the Class OperatingMechanismKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef OPERATINGMECHANISMKIND_H
#define OPERATINGMECHANISMKIND_H

namespace IEC61968
{
	namespace AssetInfo
	{
		enum class OperatingMechanismKind
		{
			 _undef = -1, 	capacitorTrip,
			hydraulic,
			pneudraulic,
			pneumatic,
			solenoid,
			spring,
			springHandCrank,
			springHydraulic,
			springMotor
		};

	}

}
#endif // OPERATINGMECHANISMKIND_H
