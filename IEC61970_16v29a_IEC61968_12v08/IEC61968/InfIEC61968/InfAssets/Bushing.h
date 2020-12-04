///////////////////////////////////////////////////////////
//  Bushing.h
//  Implementation of the Class Bushing
///////////////////////////////////////////////////////////

#ifndef BUSHING_H
#define BUSHING_H

#include <list>

#include "IEC61970/Base/Domain/Capacitance.h"
#include "IEC61970/Base/Domain/Float.h"
#include "IEC61968/InfIEC61968/InfAssets/BushingInsulationKind.h"
#include "IEC61968/InfIEC61968/InfAssets/BushingInsulationPF.h"
#include "IEC61970/Base/Core/Terminal.h"
#include "IEC61968/Assets/Asset.h"

namespace IEC61968
{
	namespace InfIEC61968
	{
		namespace InfAssets
		{
			/**
			 * Bushing asset.
			 */
			class Bushing : public IEC61968::Assets::Asset
			{

			public:
				Bushing();
				virtual ~Bushing();
				/**
				 * Factory measured capacitance, measured between the power factor tap and the
				 * bushing conductor.
				 */
				IEC61970::Base::Domain::Capacitance c1Capacitance;
				/**
				 * Factory measured insulation power factor, measured between the power factor tap
				 * and the bushing conductor.
				 */
				IEC61970::Base::Domain::Float c1PowerFactor;
				/**
				 * Factory measured capacitance measured between the power factor tap and ground.
				 */
				IEC61970::Base::Domain::Capacitance c2Capacitance;
				/**
				 * Factory measured insulation power factor, measured between the power factor tap
				 * and ground.
				 */
				IEC61970::Base::Domain::Float c2PowerFactor;
				/**
				 * Kind of insulation.
				 */
				IEC61968::InfIEC61968::InfAssets::BushingInsulationKind insulationKind = IEC61968::InfIEC61968::InfAssets::BushingInsulationKind::_undef;
				std::list<IEC61968::InfIEC61968::InfAssets::BushingInsulationPF*> BushingInsulationPFs;
				IEC61970::Base::Core::Terminal *Terminal;

			};

		}

	}

}
#endif // BUSHING_H
