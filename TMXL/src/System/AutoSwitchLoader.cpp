#include "TMXL/System/AutoSwitchLoader.h"

namespace TMXL {

    void AutoSwitchLoader::registerParser(const std::string& type, IParser* parser) {
        mParsers[type] = parser;
    }

    std::shared_ptr<NodeObject> AutoSwitchLoader::parser(const std::string& fileName){
        auto fType = fileName.substr(fileName.find_last_of(".") + 1);
        if (mParsers.find(fType) != mParsers.end()){
            IParser* parser = mParsers[fType];
            parser->setFileName(fileName);
            parser->parse();
            return parser->getRoot();
        } else {
            Log::error("Parser for type: " + fType + " is not registred!");
        }
    }

}