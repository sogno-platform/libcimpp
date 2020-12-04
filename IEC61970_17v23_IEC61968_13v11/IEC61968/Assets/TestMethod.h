///////////////////////////////////////////////////////////
//  TestMethod.h
//  Implementation of the Class TestMethod
//  Original author: ppbr003
///////////////////////////////////////////////////////////

#ifndef TESTMETHOD_H
#define TESTMETHOD_H

namespace IEC61968
{
	namespace Assets
	{
		enum class TestMethod
		{
			 _undef = -1, 	_D1275A,
			_D1275B,
			_D3612A,
			_D3612B,
			_D3612C,
			_60567ByDisplacement,
			_60567ByPartition,
			_60567ByVacuum,
			/**
			 * Automatic method.
			 */
			_60970Automatic,
			/**
			 * Manual method 1.
			 */
			_60970Manual1,
			/**
			 * Manual method 2.
			 */
			_60970Manual2,
			_62535Main,
			_62535AnnexA,
			_61125A,
			_61125B,
			_61125C,
			_62270AnnexA
		};

	}

}
#endif // TESTMETHOD_H
