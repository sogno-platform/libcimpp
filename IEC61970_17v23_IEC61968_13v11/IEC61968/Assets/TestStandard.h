///////////////////////////////////////////////////////////
//  TestStandard.h
//  Implementation of the Class TestStandard
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef TESTSTANDARD_H
#define TESTSTANDARD_H

#include "IEC61968/Assets/TestMethod.h"
#include "IEC61968/Assets/ASTMStandard.h"
#include "IEC61968/Assets/CIGREStandard.h"
#include "IEC61968/Assets/DINStandard.h"
#include "IEC61968/Assets/DobleStandard.h"
#include "IEC61968/Assets/EPAStandard.h"
#include "IEC61968/Assets/IECStandard.h"
#include "IEC61968/Assets/IEEEStandard.h"
#include "IEC61968/Assets/ISOStandard.h"
#include "IEC61968/Assets/LaborelecStandard.h"
#include "IEC61968/Assets/TAPPIStandard.h"
#include "IEC61968/Assets/UKMinistryOfDefenceStandard.h"
#include "IEC61968/Assets/WEPStandard.h"
#include "IEC61968/Assets/TestVariantKind.h"
#include "IEC61970/Base/Core/IdentifiedObject.h"

namespace IEC61968
{
	namespace Assets
	{
		/**
		 * The precise standard used in executing a lab test, including the standard, and
		 * standard version, test method and variant, if needed.
		 */
		class TestStandard : public IEC61970::Base::Core::IdentifiedObject
		{

		public:
			TestStandard();
			virtual ~TestStandard();
			/**
			 * Identification of test method used if multiple methods specified by test
			 * standard.
			 */
			IEC61968::Assets::TestMethod testMethod = IEC61968::Assets::TestMethod::_undef;
			/**
			 * Which ASTM standard used to determine analog value result. Applies only if ASTM
			 * standard used.
			 */
			IEC61968::Assets::ASTMStandard testStandardASTM;
			/**
			 * Which CIGRE standard used to determine analog value result. Applies only if
			 * CIGRE standard used.
			 */
			IEC61968::Assets::CIGREStandard testStandardCIGRE;
			/**
			 * Which DIN standard used to determine analog value result. Applies only if DIN
			 * standard used.
			 */
			IEC61968::Assets::DINStandard testStandardDIN;
			/**
			 * Which Doble standard used to determine analog value result. Applies only if
			 * Doble standard used.
			 */
			IEC61968::Assets::DobleStandard testStandardDoble;
			/**
			 * Which EPA standard used to determine analog value result. Applies only if EPA
			 * standard used.
			 */
			IEC61968::Assets::EPAStandard testStandardEPA;
			/**
			 * Which IEC standard used to determine analog value result. Applies only if IEC
			 * standard used.
			 */
			IEC61968::Assets::IECStandard testStandardIEC;
			/**
			 * Which IEEE standard used to determine analog value result. Applies only if IEEE
			 * standard used.
			 */
			IEC61968::Assets::IEEEStandard testStandardIEEE;
			/**
			 * Which ISO standard used to determine analog value result. Applies only if ISO
			 * standard used.
			 */
			IEC61968::Assets::ISOStandard testStandardISO;
			/**
			 * Which Laborelec standard used to determine analog value result. Applies only if
			 * Laborelec standard used.
			 */
			IEC61968::Assets::LaborelecStandard testStandardLaborelec;
			/**
			 * Which TAPPI standard used to determine analog value result. Applies only if
			 * TAPPI standard used.
			 */
			IEC61968::Assets::TAPPIStandard testStandardTAPPI;
			/**
			 * Which UK Ministry of Defence standard used to determine analog value result.
			 * Applies only if UK Ministry of Defence standard used.
			 */
			IEC61968::Assets::UKMinistryOfDefenceStandard testStandardUKMinistryOfDefence;
			/**
			 * Which WEP standard used to determine analog value result. Applies only if WEP
			 * standard used.
			 */
			IEC61968::Assets::WEPStandard testStandardWEP;
			/**
			 * Identification of variant of test method or standard if one is specified by the
			 * standard.
			 */
			IEC61968::Assets::TestVariantKind testVariant = IEC61968::Assets::TestVariantKind::_undef;

		};

	}

}
#endif // TESTSTANDARD_H
