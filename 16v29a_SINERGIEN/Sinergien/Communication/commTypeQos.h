///////////////////////////////////////////////////////////
//  commTypeQos.h
//  Implementation of the Class commTypeQos
//  Original author: Alper Tokel
///////////////////////////////////////////////////////////

#ifndef COMMTYPEQOS_H
#define COMMTYPEQOS_H

namespace Sinergien
{
	namespace Communication
	{
		enum class commTypeQos
		{
			 _undef = -1, 	nonCritical,
			critical,
			veryCritical
		};

	}

}
#endif // COMMTYPEQOS_H
