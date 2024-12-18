#ifndef PowerTransformerEnd_H
#define PowerTransformerEnd_H

#include "TransformerEnd.hpp"
#include <list>
#include "Boolean.hpp"
#include "Float.hpp"


#include "Susceptance.hpp"
#include "WindingConnection.hpp"
#include "Conductance.hpp"
#include "Integer.hpp"
#include "Resistance.hpp"
#include "ApparentPower.hpp"
#include "Voltage.hpp"
#include "Reactance.hpp"

namespace CIMPP {


class PowerTransformer;
	/*
	A PowerTransformerEnd is associated with each Terminal of a PowerTransformer. The impedance values r, r0, x, and x0 of a PowerTransformerEnd represents a star equivalent as follows 1) for a two Terminal PowerTransformer the high voltage PowerTransformerEnd has non zero values on r, r0, x, and x0 while the low voltage PowerTransformerEnd has zero values for r, r0, x, and x0. 2) for a three Terminal PowerTransformer the three PowerTransformerEnds represents a star equivalent with each leg in the star represented by r, r0, x, and x0 values. 3) for a PowerTransformer with more than three Terminals the PowerTransformerEnd impedance values cannot be used. Instead use the TransformerMeshImpedance or split the transformer into multiple PowerTransformers.
	*/
	class PowerTransformerEnd: public TransformerEnd
	{

	public:
					CIMPP::PowerTransformer* PowerTransformer; 	/* The ends of this power transformer. Default: 0 */
					CIMPP::Susceptance b; 	/* Magnetizing branch susceptance (B mag).  The value can be positive or negative. Default: nullptr */
					CIMPP::Susceptance b0; 	/* Zero sequence magnetizing branch susceptance. Default: nullptr */
					CIMPP::WindingConnection connectionKind; 	/* Kind of connection. Default: 0 */
					CIMPP::Conductance g; 	/* Magnetizing branch conductance. Default: nullptr */
					CIMPP::Conductance g0; 	/* Zero sequence magnetizing branch conductance (star-model). Default: nullptr */
					CIMPP::Integer phaseAngleClock; 	/* Terminal voltage phase angle displacement where 360 degrees are represented with clock hours. The valid values are 0 to 11. For example, for the secondary side end of a transformer with vector group code of `Dyn11`, specify the connection kind as wye with neutral and specify the phase angle of the clock as 11.  The clock value of the transformer end number specified as 1, is assumed to be zero.  Note the transformer end number is not assumed to be the same as the terminal sequence number. Default: 0 */
					CIMPP::Resistance r; 	/* Resistance (star-model) of the transformer end. The attribute shall be equal or greater than zero for non-equivalent transformers. Default: nullptr */
					CIMPP::Resistance r0; 	/* Zero sequence series resistance (star-model) of the transformer end. Default: nullptr */
					CIMPP::ApparentPower ratedS; 	/* Normal apparent power rating. The attribute shall be a positive value. For a two-winding transformer the values for the high and low voltage sides shall be identical. Default: nullptr */
					CIMPP::Voltage ratedU; 	/* Rated voltage: phase-phase for three-phase windings, and either phase-phase or phase-neutral for single-phase windings. A high voltage side, as given by TransformerEnd.endNumber, shall have a ratedU that is greater or equal than ratedU for the lower voltage sides. Default: nullptr */
					CIMPP::Reactance x; 	/* Positive sequence series reactance (star-model) of the transformer end. Default: nullptr */
					CIMPP::Reactance x0; 	/* Zero sequence series reactance of the transformer end. Default: nullptr */
		
		static const char debugName[];
		virtual const char* debugString();

		/* constructor initialising all attributes to null */
		PowerTransformerEnd();
		virtual ~PowerTransformerEnd();

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>&);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>&);
		static const BaseClassDefiner declare();

	};

	BaseClass* PowerTransformerEnd_factory();
}
#endif
