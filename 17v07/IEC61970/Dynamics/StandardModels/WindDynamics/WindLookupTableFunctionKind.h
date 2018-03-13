///////////////////////////////////////////////////////////
//  WindLookupTableFunctionKind.h
//  Implementation of the Class WindLookupTableFunctionKind
//  Original author: civanov
///////////////////////////////////////////////////////////

#ifndef WINDLOOKUPTABLEFUNCTIONKIND_H
#define WINDLOOKUPTABLEFUNCTIONKIND_H

namespace IEC61970
{
	namespace Dynamics
	{
		namespace StandardModels
		{
			namespace WindDynamics
			{
				/**
				 * Function of the lookup table.
				 */
				enum class WindLookupTableFunctionKind
				{
					/**
					 * Power versus slip lookup table (f<sub>pslip</sub>()). It is used for rotor
					 * resistance control model, IEC 61400-27-1, section 6.6.5.2. 
					 */
					 _undef = -1, 	fpslip,
					/**
					 * Power vs. speed lookup table (f<sub>pomega</sub>()). It is used for P control
					 * model type 3, IEC 61400-27-1, section 6.6.5.3. 
					 */
					fpomega,
					/**
					 * Lookup table for voltage dependency of active current limits
					 * (i<sub>pVDL</sub>()). It is used for current limitation model, IEC 61400-27-1,
					 * section 6.6.5.7. 
					 */
					ipvdl,
					/**
					 * Lookup table for voltage dependency of reactive current limits
					 * (i<sub>qVDL</sub>()). It is used for current limitation model, IEC 61400-27-1,
					 * section 6.6.5.7. 
					 */
					iqvdl,
					/**
					 * Power vs. frequency lookup table (<i>f</i><sub>dpf</sub>()). It is used for
					 * wind power plant frequency and active power control model, IEC 61400-27-1,
					 * Annex E. 
					 */
					fdpf
				};

			}

		}

	}

}
#endif // WINDLOOKUPTABLEFUNCTIONKIND_H
