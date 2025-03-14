#ifndef SWAHER_H
#define SWAHER_H

#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/wrapped.hpp>

namespace godot {

class Swayer2D : public Node {
  GDCLASS(Swayer2D, Node)

private:
  double time_passed;
  // bool valid;
  Node2D *parent;

  double amplitude;
  double frequency;

protected:
  static void _bind_methods();

public:
  Swayer2D();
  ~Swayer2D();

  void _ready() override;
  void _process(double delta) override;

  void set_amplitude(const double p_amplitude);
  double get_amplitude();

  void set_frequency(const double p_frequency);
  double get_frequency();
};

} // namespace godot

#endif // SWAHER_H