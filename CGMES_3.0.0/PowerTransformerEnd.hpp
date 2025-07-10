#ifndef PowerTransformerEnd_H
#define PowerTransformerEnd_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "TransformerEnd.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "ApparentPower.hpp"
#include "Conductance.hpp"
#include "Integer.hpp"
#include "Reactance.hpp"
#include "Resistance.hpp"
#include "Susceptance.hpp"
#include "Voltage.hpp"
#include "WindingConnection.hpp"

namespace CIMPP
{
	class PowerTransformer;

	/** \brief A PowerTransformerEnd is associated with each Terminal of a PowerTransformer. The impedance values r, r0, x, and x0 of a PowerTransformerEnd represents a star equivalent as follows. 1) for a two Terminal PowerTransformer the high voltage (TransformerEnd.endNumber=1) PowerTransformerEnd has non zero values on r, r0, x, and x0 while the low voltage (TransformerEnd.endNumber=2) PowerTransformerEnd has zero values for r, r0, x, and x0.  Parameters are always provided, even if the PowerTransformerEnds have the same rated voltage.  In this case, the parameters are provided at the PowerTransformerEnd which has TransformerEnd.endNumber equal to 1. 2) for a three Terminal PowerTransformer the three PowerTransformerEnds represent a star equivalent with each leg in the star represented by r, r0, x, and x0 values. 3) For a three Terminal transformer each PowerTransformerEnd shall have g, g0, b and b0 values corresponding to the no load losses distributed on the three PowerTransformerEnds. The total no load loss shunt impedances may also be placed at one of the PowerTransformerEnds, preferably the end numbered 1, having the shunt values on end 1.  This is the preferred way. 4) for a PowerTransformer with more than three Terminals the PowerTransformerEnd impedance values cannot be used. Instead use the TransformerMeshImpedance or split the transformer into multiple PowerTransformers. Each PowerTransformerEnd must be contained by a PowerTransformer. Because a PowerTransformerEnd (or any other object) can not be contained by more than one parent, a PowerTransformerEnd can not have an association to an EquipmentContainer (Substation, VoltageLevel, etc). */
	class PowerTransformerEnd : public TransformerEnd
	{
	public:
		/* constructor initialising all attributes to null */
		PowerTransformerEnd();
		~PowerTransformerEnd() override;

		/** \brief The power transformer of this power transformer end. Default: 0 */
		CIMPP::PowerTransformer* PowerTransformer;

		/** \brief Magnetizing branch susceptance (B mag).  The value can be positive or negative. Default: nullptr */
		CIMPP::Susceptance b;

		/** \brief Zero sequence magnetizing branch susceptance. Default: nullptr */
		CIMPP::Susceptance b0;

		/** \brief Kind of connection. Default: 0 */
		CIMPP::WindingConnection connectionKind;

		/** \brief Magnetizing branch conductance. Default: nullptr */
		CIMPP::Conductance g;

		/** \brief Zero sequence magnetizing branch conductance (star-model). Default: nullptr */
		CIMPP::Conductance g0;

		/** \brief Terminal voltage phase angle displacement where 360 degrees are represented with clock hours. The valid values are 0 to 11. For example, for the secondary side end of a transformer with vector group code of `Dyn11`, specify the connection kind as wye with neutral and specify the phase angle of the clock as 11.  The clock value of the transformer end number specified as 1, is assumed to be zero.  Note the transformer end number is not assumed to be the same as the terminal sequence number. Default: 0 */
		CIMPP::Integer phaseAngleClock;

		/** \brief Resistance (star-model) of the transformer end. The attribute shall be equal to or greater than zero for non-equivalent transformers. Default: nullptr */
		CIMPP::Resistance r;

		/** \brief Zero sequence series resistance (star-model) of the transformer end. Default: nullptr */
		CIMPP::Resistance r0;

		/** \brief Normal apparent power rating. The attribute shall be a positive value. For a two-winding transformer the values for the high and low voltage sides shall be identical. Default: nullptr */
		CIMPP::ApparentPower ratedS;

		/** \brief Rated voltage: phase-phase for three-phase windings, and either phase-phase or phase-neutral for single-phase windings. A high voltage side, as given by TransformerEnd.endNumber, shall have a ratedU that is greater than or equal to ratedU for the lower voltage sides. The attribute shall be a positive value. Default: nullptr */
		CIMPP::Voltage ratedU;

		/** \brief Positive sequence series reactance (star-model) of the transformer end. Default: nullptr */
		CIMPP::Reactance x;

		/** \brief Zero sequence series reactance of the transformer end. Default: nullptr */
		CIMPP::Reactance x0;

		static const char debugName[];
		const char* debugString() const override;

		const std::list<std::string>& getAttributeNames() const override;

		const std::string& getClassNamespaceUrl() const override;
		const std::string& getAttributeNamespaceUrl(const std::string& attrName) const override;

		const std::list<CGMESProfile>& getPossibleProfiles() const override;
		const CGMESProfile& getRecommendedProfile() const override;
		const std::list<CGMESProfile>& getPossibleAttributeProfiles(const std::string& attrName) const override;
		const std::list<CGMESProfile>& getPossibleProfilesIncludingAttributes() const override;

		static void addConstructToMap(std::unordered_map<std::string, BaseClass* (*)()>& factory_map);
		static void addPrimitiveAssignFnsToMap(std::unordered_map<std::string, assign_function>& assign_map);
		static void addClassAssignFnsToMap(std::unordered_map<std::string, class_assign_function>& assign_map);
		void addPrimitiveGetFnsToMap(std::map<std::string, get_function>& get_map) const override;
		void addClassGetFnsToMap(std::map<std::string, class_get_function>& get_map) const override;
		void addEnumGetFnsToMap(std::map<std::string, get_function>& get_map) const override;

		bool isAssignableFrom(BaseClass* otherObject) const override;
		static const BaseClassDefiner declare();

	protected:
		std::map<std::string, AttrDetails> allAttrDetailsMap() const override;
	};

	BaseClass* PowerTransformerEnd_factory();
}
#endif
