#ifndef TEMPLATE_REGISTER_TYPES_H
#define TEMPLATE_REGISTER_TYPES_H

#include <godot_cpp/core/class_db.hpp>

using namespace godot;

void initialize_template_module(ModuleInitializationLevel p_level);
void uninitialize_template_module(ModuleInitializationLevel p_level);

#endif // TEMPLATE_REGISTER_TYPES_H