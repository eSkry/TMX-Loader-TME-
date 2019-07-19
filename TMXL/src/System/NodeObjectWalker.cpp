//
// Created by depish on 17.07.19.
//

#include "TMXL/System/NodeObjectWalker.h"

namespace TMXL {

    void NodeObjectWalker::registerCallback(const sf::String &nodeName, CallbackType callback) {
        callbacks[nodeName] = std::move(callback);
    }

    void NodeObjectWalker::run(std::shared_ptr<NodeObject> node) {
		auto rootId = IDGenerator<GCategory::NODEOBJECTS>::getId();
		walk(node, rootId, rootId);
    }

	void NodeObjectWalker::walk(std::shared_ptr<NodeObject> node, TLSize_t thisId, TLSize_t parentId) {
		if (const sf::String& name = node->name; callbacks.find(name) != callbacks.end()) {
			callbacks[name](node, thisId, parentId);
		}
		for (auto it : node->childrens) {
			walk(it, IDGenerator<GCategory::NODEOBJECTS>::getId(), thisId);
		}
	}

    void NodeObjectWalker::clearCallbacks() {
        callbacks.clear();
    }

}