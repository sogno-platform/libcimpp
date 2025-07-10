#ifndef ACDCTerminal_H
#define ACDCTerminal_H
/*
Generated from the CGMES files via cimgen: https://github.com/sogno-platform/cimgen
*/

#include <list>
#include <map>
#include <string>
#include <unordered_map>

#include "IdentifiedObject.hpp"
#include "BaseClassDefiner.hpp"
#include "CGMESProfile.hpp"
#include "CimClassDetails.hpp"
#include "Boolean.hpp"
#include "Integer.hpp"

namespace CIMPP
{
	class BusNameMarker;
	class Measurement;
	class OperationalLimitSet;

	/** \brief An electrical connection point (AC or DC) to a piece of conducting equipment. Terminals are connected at physical connection points called connectivity nodes. */
	class ACDCTerminal : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		ACDCTerminal();
		~ACDCTerminal() override;

		/** \brief The bus name marker used to name the bus (topological node). Default: 0 */
		CIMPP::BusNameMarker* BusNameMarker;

		/** \brief Measurements associated with this terminal defining  where the measurement is placed in the network topology.  It may be used, for instance, to capture the sensor position, such as a voltage transformer (PT) at a busbar or a current transformer (CT) at the bar between a breaker and an isolator. Default: 0 */
		std::list<CIMPP::Measurement*> Measurements;

		/** \brief  Default: 0 */
		std::list<CIMPP::OperationalLimitSet*> OperationalLimitSet;

		/** \brief The connected status is related to a bus-branch model and the topological node to terminal relation.  True implies the terminal is connected to the related topological node and false implies it is not.  In a bus-branch model, the connected status is used to tell if equipment is disconnected without having to change the connectivity described by the topological node to terminal relation. A valid case is that conducting equipment can be connected in one end and open in the other. In particular for an AC line segment, where the reactive line charging can be significant, this is a relevant case. Default: false */
		CIMPP::Boolean connected;

		/** \brief The orientation of the terminal connections for a multiple terminal conducting equipment.  The sequence numbering starts with 1 and additional terminals should follow in increasing order.   The first terminal is the `starting point` for a two terminal branch. Default: 0 */
		CIMPP::Integer sequenceNumber;

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

	BaseClass* ACDCTerminal_factory();
}
#endif
