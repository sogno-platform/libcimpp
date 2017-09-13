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
					 * Power versus speed change (negative slip) lookup table
					 * (p<sub>rr</sub>(deltaomega)). It is used for rotor resistance control model,
					 * IEC 61400-27-1, section 5.6.5.3. 
					 */
					prr,
					/**
					 * Power vs. speed lookup table (omega(p)). It is used for P control model type 3,
					 * IEC 61400-27-1, section 5.6.5.4. 
					 */
					omegap,
					/**
					 * Lookup table for voltage dependency of active current limits
					 * (i<sub>pmax</sub>(u<sub>WT</sub>)). It is used for current limitation model,
					 * IEC 61400-27-1, section 5.6.5.8. 
					 */
					ipmax,
					/**
					 * Lookup table for voltage dependency of reactive current limits
					 * (i<sub>qmax</sub>(u<sub>WT</sub>)). It is used for current limitation model,
					 * IEC 61400-27-1, section 5.6.5.8. 
					 */
					iqmax,
					/**
					 * Power vs. frequency lookup table (p<sub>WPbias</sub>(f)). It is used for wind
					 * power plant frequency and active power control model, IEC 61400-27-1, Annex D. 
					 */
					pwp,
					/**
					 * Crowbar duration versus voltage variation look-up table (T<sub>CW</sub>(du)).
					 * It is case dependent parameter. It is used for type 3B generator set model, IEC
					 * 61400-27-1, section 5.6.3.3. 
					 */
					tcwdu,
					/**
					 * Lookup table to determine the duration of the power reduction after a voltage
					 * dip, depending on the size of the voltage dip (T<sub>d</sub>(u<sub>WT</sub>)).
					 * It is type dependent parameter. It is used for pitch control power model, IEC
					 * 61400-27-1, section 5.6.5.1. 
					 */
					tduwt,
					/**
					 * Lookup table for active power dependency of reactive power maximum limit
					 * (q<sub>maxp</sub>(p)). It is used for QP and QU limitation model, IEC 61400-27-
					 * 1, section 5.6.5.10. 
					 */
					qmaxp,
					/**
					 * Lookup table for active power dependency of reactive power minimum limit
					 * (q<sub>minp</sub>(p)). It is used for QP and QU limitation model, IEC 61400-27-
					 * 1, section 5.6.5.10. 
					 */
					qminp,
					/**
					 * Lookup table for voltage dependency of reactive power maximum limit
					 * (q<sub>maxu</sub>(p)). It is used for QP and QU limitation model, IEC 61400-27-
					 * 1, section 5.6.5.10. 
					 */
					qmaxu,
					/**
					 * Lookup table for voltage dependency of reactive power minimum limit
					 * (q<sub>minu</sub>(p)). It is used for QP and QU limitation model, IEC 61400-27-
					 * 1, section 5.6.5.10. 
					 */
					qminu,
					/**
					 * Disconnection time versus over voltage lookup table
					 * (T<sub>uover</sub>(u<sub>WT</sub>)). It is used for grid protection model, IEC
					 * 61400-27-1, section 5.6.6. 
					 */
					tuover,
					/**
					 * Disconnection time versus under voltage lookup table
					 * (T<sub>uunder</sub>(u<sub>WT</sub>)). It is used for grid protection model, IEC
					 * 61400-27-1, section 5.6.6. 
					 */
					tuunder,
					/**
					 * Disconnection time versus over frequency lookup table
					 * (T<sub>fover</sub>(f<sub>WT</sub>)). It is used for grid protection model, IEC
					 * 61400-27-1, section 5.6.6. 
					 */
					tfover,
					/**
					 * Disconnection time versus under frequency lookup table
					 * (T<sub>funder</sub>(f<sub>WT</sub>)). It is used for grid protection model, IEC
					 * 61400-27-1, section 5.6.6. 
					 */
					tfunder,
					/**
					 * Look up table for the UQ static mode (q<sub>WP</sub>(u<sub>err</sub>)). It is
					 * used for voltage and reactive power control model, IEC 61400-27-1, Annex D. 
					 */
					qwp
				};

			}

		}

	}

}
#endif // WINDLOOKUPTABLEFUNCTIONKIND_H
