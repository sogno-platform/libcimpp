#ifndef DCTopologicalNode_H
#define DCTopologicalNode_H
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

namespace CIMPP
{
	class DCBaseTerminal;
	class DCEquipmentContainer;
	class DCNode;
	class DCTopologicalIsland;

	/** \brief DC bus. */
	class DCTopologicalNode : public IdentifiedObject
	{
	public:
		/* constructor initialising all attributes to null */
		DCTopologicalNode();
		~DCTopologicalNode() override;

		/** \brief The connectivity node container to which the topological node belongs. Default: 0 */
		CIMPP::DCEquipmentContainer* DCEquipmentContainer;

		/** \brief The DC connectivity nodes combined together to form this DC topological node.  May depend on the current state of switches in the network. Default: 0 */
		std::list<CIMPP::DCNode*> DCNodes;

		/** \brief See association end TopologicalNode.Terminal. Default: 0 */
		std::list<CIMPP::DCBaseTerminal*> DCTerminals;

		/** \brief A DC topological node belongs to a DC topological island. Default: 0 */
		CIMPP::DCTopologicalIsland* DCTopologicalIsland;

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

	BaseClass* DCTopologicalNode_factory();
}
#endif
