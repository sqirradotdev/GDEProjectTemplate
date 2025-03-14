#include "swayer2d.h"

#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/math.hpp>
#include <godot_cpp/core/object.hpp>
#include <godot_cpp/core/property_info.hpp>


using namespace godot;

Swayer2D::Swayer2D() {
  time_passed = 0.0;
  parent = nullptr;

  amplitude = 1.5;
  frequency = 1;
}

Swayer2D::~Swayer2D() {}

void Swayer2D::_bind_methods() {
  ClassDB::bind_method(D_METHOD("set_amplitude", "p_amplitude"),
                       &Swayer2D::set_amplitude);
  ClassDB::bind_method(D_METHOD("get_amplitude"), &Swayer2D::get_amplitude);
  ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "amplitude"), "set_amplitude",
               "get_amplitude");

  ClassDB::bind_method(D_METHOD("set_frequency", "p_frequency"),
                       &Swayer2D::set_frequency);
  ClassDB::bind_method(D_METHOD("get_frequency"), &Swayer2D::get_frequency);
  ADD_PROPERTY(PropertyInfo(Variant::FLOAT, "frequency"), "set_frequency",
               "get_frequency");
}

void Swayer2D::_ready() {
  parent = Object::cast_to<Node2D>(get_parent());

  if (parent == nullptr) {
    set_process(false);
  }
}

void Swayer2D::_process(double delta) {
  if (parent == nullptr) {
    return;
  }

  time_passed += delta * frequency;

  parent->set_rotation(amplitude * sin(time_passed * Math_TAU));
}

void Swayer2D::set_amplitude(const double p_amplitude) {
  amplitude = p_amplitude;
}

double Swayer2D::get_amplitude() { return amplitude; }

void Swayer2D::set_frequency(const double p_frequency) {
  frequency = p_frequency;
}

double Swayer2D::get_frequency() { return frequency; }