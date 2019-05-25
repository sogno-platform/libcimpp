///////////////////////////////////////////////////////////
//  TestVariantKind.h
//  Implementation of the Class TestVariantKind
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef TESTVARIANTKIND_H
#define TESTVARIANTKIND_H

namespace IEC61968
{
	namespace Assets
	{
		enum class TestVariantKind
		{
			/**
			 * Specimen of 1 mm thickness used in testing.
			 */
			 _undef = -1, 	_1mm,
			/**
			 * Specimen of 2 mm thickness used in testing. 
			 */
			_2mm,
			/**
			 * Testing done at temperature of -40°C.
			 */
			_minus40C,
			/**
			 * Testing done at temperature of -30°C.
			 */
			_minus30C,
			/**
			 * Testing done at temperature of 0°C.
			 */
			_0C,
			/**
			 * Testing done at temperature of  25°C.
			 */
			_25C,
			/**
			 * Testing done at temperature of 30°C.
			 */
			_30C,
			/**
			 * Testing done at temperature of 40°C.
			 */
			_40C,
			/**
			 * Testing done at temperature of  100°C.
			 */
			_100C,
			/**
			 * Measurements taken at 72 hours.
			 */
			_72hours,
			/**
			 * Measurements taken at 164 hours.
			 */
			_164hours
		};

	}

}
#endif // TESTVARIANTKIND_H
