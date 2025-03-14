#include "register_types.h"
#include "swayer2d.h"

#include <gdextension_interface.h>
#include <godot_cpp/classes/engine.hpp>
#include <godot_cpp/classes/project_settings.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/defs.hpp>
#include <godot_cpp/godot.hpp>

using namespace godot;

void initialize_template_module(ModuleInitializationLevel p_level) {
  if (p_level == godot::MODULE_INITIALIZATION_LEVEL_SCENE) {
    ClassDB::register_class<Swayer2D>();
  }
}

void uninitialize_template_module(ModuleInitializationLevel p_level) {
  // if (p_level == godot::MODULE_INITIALIZATION_LEVEL_CORE) {
  //   // ...
  // }
}

extern "C" {
// Initialization.
GDExtensionBool GDE_EXPORT
template_library_init(GDExtensionInterfaceGetProcAddress p_get_proc_address,
                      const GDExtensionClassLibraryPtr p_library,
                      GDExtensionInitialization *r_initialization) {
  godot::GDExtensionBinding::InitObject init_obj(p_get_proc_address, p_library,
                                                 r_initialization);

  init_obj.register_initializer(initialize_template_module);
  init_obj.register_terminator(uninitialize_template_module);
  init_obj.set_minimum_library_initialization_level(
      MODULE_INITIALIZATION_LEVEL_CORE);

  return init_obj.init();
}
}