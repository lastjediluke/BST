#include "node.h"
#include <string>

node::node(const std::string &data) : data(data), next(nullptr) {}
